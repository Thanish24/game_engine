// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: events.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_events_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_events_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_events_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_events_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_events_2eproto;
namespace events {
class collision;
class collisionDefaultTypeInternal;
extern collisionDefaultTypeInternal _collision_default_instance_;
class key_event;
class key_eventDefaultTypeInternal;
extern key_eventDefaultTypeInternal _key_event_default_instance_;
}  // namespace events
PROTOBUF_NAMESPACE_OPEN
template<> ::events::collision* Arena::CreateMaybeMessage<::events::collision>(Arena*);
template<> ::events::key_event* Arena::CreateMaybeMessage<::events::key_event>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace events {

// ===================================================================

class key_event PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:events.key_event) */ {
 public:
  inline key_event() : key_event(nullptr) {};
  virtual ~key_event();

  key_event(const key_event& from);
  key_event(key_event&& from) noexcept
    : key_event() {
    *this = ::std::move(from);
  }

  inline key_event& operator=(const key_event& from) {
    CopyFrom(from);
    return *this;
  }
  inline key_event& operator=(key_event&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const key_event& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const key_event* internal_default_instance() {
    return reinterpret_cast<const key_event*>(
               &_key_event_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(key_event& a, key_event& b) {
    a.Swap(&b);
  }
  inline void Swap(key_event* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(key_event* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline key_event* New() const final {
    return CreateMaybeMessage<key_event>(nullptr);
  }

  key_event* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<key_event>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const key_event& from);
  void MergeFrom(const key_event& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(key_event* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "events.key_event";
  }
  protected:
  explicit key_event(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_events_2eproto);
    return ::descriptor_table_events_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // required int32 key = 1;
  bool has_key() const;
  private:
  bool _internal_has_key() const;
  public:
  void clear_key();
  ::PROTOBUF_NAMESPACE_ID::int32 key() const;
  void set_key(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_key() const;
  void _internal_set_key(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:events.key_event)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 key_;
  friend struct ::TableStruct_events_2eproto;
};
// -------------------------------------------------------------------

class collision PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:events.collision) */ {
 public:
  inline collision() : collision(nullptr) {};
  virtual ~collision();

  collision(const collision& from);
  collision(collision&& from) noexcept
    : collision() {
    *this = ::std::move(from);
  }

  inline collision& operator=(const collision& from) {
    CopyFrom(from);
    return *this;
  }
  inline collision& operator=(collision&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const collision& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const collision* internal_default_instance() {
    return reinterpret_cast<const collision*>(
               &_collision_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(collision& a, collision& b) {
    a.Swap(&b);
  }
  inline void Swap(collision* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(collision* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline collision* New() const final {
    return CreateMaybeMessage<collision>(nullptr);
  }

  collision* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<collision>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const collision& from);
  void MergeFrom(const collision& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(collision* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "events.collision";
  }
  protected:
  explicit collision(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_events_2eproto);
    return ::descriptor_table_events_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kObject1FieldNumber = 1,
    kObject2FieldNumber = 2,
  };
  // required int32 object1 = 1;
  bool has_object1() const;
  private:
  bool _internal_has_object1() const;
  public:
  void clear_object1();
  ::PROTOBUF_NAMESPACE_ID::int32 object1() const;
  void set_object1(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_object1() const;
  void _internal_set_object1(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 object2 = 2;
  bool has_object2() const;
  private:
  bool _internal_has_object2() const;
  public:
  void clear_object2();
  ::PROTOBUF_NAMESPACE_ID::int32 object2() const;
  void set_object2(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_object2() const;
  void _internal_set_object2(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:events.collision)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 object1_;
  ::PROTOBUF_NAMESPACE_ID::int32 object2_;
  friend struct ::TableStruct_events_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// key_event

// required int32 key = 1;
inline bool key_event::_internal_has_key() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool key_event::has_key() const {
  return _internal_has_key();
}
inline void key_event::clear_key() {
  key_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 key_event::_internal_key() const {
  return key_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 key_event::key() const {
  // @@protoc_insertion_point(field_get:events.key_event.key)
  return _internal_key();
}
inline void key_event::_internal_set_key(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  key_ = value;
}
inline void key_event::set_key(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:events.key_event.key)
}

// -------------------------------------------------------------------

// collision

// required int32 object1 = 1;
inline bool collision::_internal_has_object1() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool collision::has_object1() const {
  return _internal_has_object1();
}
inline void collision::clear_object1() {
  object1_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 collision::_internal_object1() const {
  return object1_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 collision::object1() const {
  // @@protoc_insertion_point(field_get:events.collision.object1)
  return _internal_object1();
}
inline void collision::_internal_set_object1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  object1_ = value;
}
inline void collision::set_object1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_object1(value);
  // @@protoc_insertion_point(field_set:events.collision.object1)
}

// required int32 object2 = 2;
inline bool collision::_internal_has_object2() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool collision::has_object2() const {
  return _internal_has_object2();
}
inline void collision::clear_object2() {
  object2_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 collision::_internal_object2() const {
  return object2_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 collision::object2() const {
  // @@protoc_insertion_point(field_get:events.collision.object2)
  return _internal_object2();
}
inline void collision::_internal_set_object2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  object2_ = value;
}
inline void collision::set_object2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_object2(value);
  // @@protoc_insertion_point(field_set:events.collision.object2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace events

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_events_2eproto
