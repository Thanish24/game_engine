#include <boost/lockfree/queue.hpp>
#include <thread>
#include <vector>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstdint>
#include <iostream>
#include <sstream>

#include "../display_system/Pixel.h"

using key = uint32_t;

struct input {
    uint32_t key;
    uint32_t clientId;
};


class GameServer {
private:

    boost::lockfree::queue<input> inputQueue;
    std::vector<std::thread> clientThreads;
    std::thread gameLoopThread;
    int tcpSocket;
    int udpSocket;
    
    struct sockaddr_in multicastAddr;
    bool running;

    // get tcp inputs from clients and add to input buffer
    void handleClient(int clientSocket, uint32_t id) {

        while (running) {

            key keyRecieved;

            int bytesRecieved = recv(clientSocket, &keyRecieved, sizeof(keyRecieved) - 1, 0);
            if (bytesRecieved <= 0) {
                std::cout << "client " << id << " disconnected\n";
                break;
            }

            if (bytesRecieved != sizeof(key)) {
                std::cerr << "recieved incomplete input\n";
            }

            keyRecieved = ntohl(keyRecieved);
            
            while (!inputQueue.push({keyRecieved, id})) {
                // spin wait
            }

        }

        close(clientSocket);
    }


    void gameLoop() {


        sendMulticast();

    }

    void sendMulticast() {
        std::ostringstream ss;

        
    }

public:

    GameServer(int tcpPort, const std::string& multicastIP, int multiCastPort)
        : inputQueue(128), running(false) {
        
        // set up tcp socket using BSD sockets API

        // create socket
        tcpSocket = socket(AF_INET, SOCK_STREAM, 0);

        if (tcpSocket < 0) {
            throw std::runtime_error("tcp socket creation failed");
        }

        // stores servers address and port
        struct sockaddr_in serverAddr;
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_addr.s_addr = INADDR_ANY;
        // convert to network byte order
        serverAddr.sin_port = htons(tcpPort);

        // associates socket with address and port
        if (bind(tcpSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
            throw std::runtime_error("tcp bind failed");
        }

        if (listen(tcpSocket, 2) < 0) {
            throw std::runtime_error("tcp listen failed");
        }

        // initialize UDP socket for multicast
        udpSocket = socket(AF_INET, SOCK_DGRAM, 0);
        if (udpSocket < 0) {
            throw std::runtime_error("udp socket creation failed");
        }

        // set up multicast address
        memset(&multicastAddr, 0, sizeof(multicastAddr));
        multicastAddr.sin_family = AF_INET;
        multicastAddr.sin_addr.s_addr = inet_addr(multicastIP.c_str());
        multicastAddr.sin_port = htons(multiCastPort);

        // set multicast ttl
        u_char ttl = 1;
        if (setsockopt(udpSocket, IPPROTO_IP, IP_MULTICAST_TTL, &ttl, sizeof(ttl)) < 0) {
            throw std::runtime_error("failed settig multicast ttl");
        }

    }


    ~GameServer() {
        stop();
        close(tcpSocket);
        close(udpSocket);
    }

    void start() {

        running = true;

        // start game loop thread
        gameLoopThread = std::thread(gameLoop, this);

        std::cout << "server listening for tcp connections\n";
        uint32_t clientId = 0;
        // accept incoming tcp connections and handle them using handleClient threads
        while (running) {
            struct sockaddr_in clientAddr;
            socklen_t clientLen = sizeof(clientAddr);
            int clientSocket = accept(tcpSocket, (struct sockaddr*)&clientAddr, &clientLen);
            if (clientSocket < 0) {
                if (!running) break;
                std::cerr << "failed accepting client";
                continue;
            }

            std::cout << "Client: " << clientId << "connected\n";
            clientThreads.emplace_back(&handleClient, this, clientSocket, clientId++);
        }




    }

    void stop() {

        // join all threads
        running = false;
        for (auto& thread : clientThreads) {
            if (thread.joinable()) thread.join();
        }

        if (gameLoopThread.joinable()) gameLoopThread.join();
    }

};