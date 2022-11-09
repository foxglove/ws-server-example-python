// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/Color.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_foxglove_2fColor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_foxglove_2fColor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_foxglove_2fColor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_foxglove_2fColor_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_foxglove_2fColor_2eproto;
namespace foxglove {
class Color;
struct ColorDefaultTypeInternal;
extern ColorDefaultTypeInternal _Color_default_instance_;
}  // namespace foxglove
PROTOBUF_NAMESPACE_OPEN
template<> ::foxglove::Color* Arena::CreateMaybeMessage<::foxglove::Color>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace foxglove {

// ===================================================================

class Color final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:foxglove.Color) */ {
 public:
  inline Color() : Color(nullptr) {}
  ~Color() override;
  explicit PROTOBUF_CONSTEXPR Color(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Color(const Color& from);
  Color(Color&& from) noexcept
    : Color() {
    *this = ::std::move(from);
  }

  inline Color& operator=(const Color& from) {
    CopyFrom(from);
    return *this;
  }
  inline Color& operator=(Color&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Color& default_instance() {
    return *internal_default_instance();
  }
  static inline const Color* internal_default_instance() {
    return reinterpret_cast<const Color*>(
               &_Color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Color& a, Color& b) {
    a.Swap(&b);
  }
  inline void Swap(Color* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Color* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Color>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Color& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Color& from) {
    Color::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Color* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "foxglove.Color";
  }
  protected:
  explicit Color(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRFieldNumber = 1,
    kGFieldNumber = 2,
    kBFieldNumber = 3,
    kAFieldNumber = 4,
  };
  // double r = 1;
  void clear_r();
  double r() const;
  void set_r(double value);
  private:
  double _internal_r() const;
  void _internal_set_r(double value);
  public:

  // double g = 2;
  void clear_g();
  double g() const;
  void set_g(double value);
  private:
  double _internal_g() const;
  void _internal_set_g(double value);
  public:

  // double b = 3;
  void clear_b();
  double b() const;
  void set_b(double value);
  private:
  double _internal_b() const;
  void _internal_set_b(double value);
  public:

  // double a = 4;
  void clear_a();
  double a() const;
  void set_a(double value);
  private:
  double _internal_a() const;
  void _internal_set_a(double value);
  public:

  // @@protoc_insertion_point(class_scope:foxglove.Color)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double r_;
    double g_;
    double b_;
    double a_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_foxglove_2fColor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Color

// double r = 1;
inline void Color::clear_r() {
  _impl_.r_ = 0;
}
inline double Color::_internal_r() const {
  return _impl_.r_;
}
inline double Color::r() const {
  // @@protoc_insertion_point(field_get:foxglove.Color.r)
  return _internal_r();
}
inline void Color::_internal_set_r(double value) {
  
  _impl_.r_ = value;
}
inline void Color::set_r(double value) {
  _internal_set_r(value);
  // @@protoc_insertion_point(field_set:foxglove.Color.r)
}

// double g = 2;
inline void Color::clear_g() {
  _impl_.g_ = 0;
}
inline double Color::_internal_g() const {
  return _impl_.g_;
}
inline double Color::g() const {
  // @@protoc_insertion_point(field_get:foxglove.Color.g)
  return _internal_g();
}
inline void Color::_internal_set_g(double value) {
  
  _impl_.g_ = value;
}
inline void Color::set_g(double value) {
  _internal_set_g(value);
  // @@protoc_insertion_point(field_set:foxglove.Color.g)
}

// double b = 3;
inline void Color::clear_b() {
  _impl_.b_ = 0;
}
inline double Color::_internal_b() const {
  return _impl_.b_;
}
inline double Color::b() const {
  // @@protoc_insertion_point(field_get:foxglove.Color.b)
  return _internal_b();
}
inline void Color::_internal_set_b(double value) {
  
  _impl_.b_ = value;
}
inline void Color::set_b(double value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:foxglove.Color.b)
}

// double a = 4;
inline void Color::clear_a() {
  _impl_.a_ = 0;
}
inline double Color::_internal_a() const {
  return _impl_.a_;
}
inline double Color::a() const {
  // @@protoc_insertion_point(field_get:foxglove.Color.a)
  return _internal_a();
}
inline void Color::_internal_set_a(double value) {
  
  _impl_.a_ = value;
}
inline void Color::set_a(double value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:foxglove.Color.a)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace foxglove

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_foxglove_2fColor_2eproto
