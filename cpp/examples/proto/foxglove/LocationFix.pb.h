// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/LocationFix.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_foxglove_2fLocationFix_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_foxglove_2fLocationFix_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_foxglove_2fLocationFix_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_foxglove_2fLocationFix_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_foxglove_2fLocationFix_2eproto;
namespace foxglove {
class LocationFix;
struct LocationFixDefaultTypeInternal;
extern LocationFixDefaultTypeInternal _LocationFix_default_instance_;
}  // namespace foxglove
PROTOBUF_NAMESPACE_OPEN
template<> ::foxglove::LocationFix* Arena::CreateMaybeMessage<::foxglove::LocationFix>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace foxglove {

enum LocationFix_PositionCovarianceType : int {
  LocationFix_PositionCovarianceType_UNKNOWN = 0,
  LocationFix_PositionCovarianceType_APPROXIMATED = 1,
  LocationFix_PositionCovarianceType_DIAGONAL_KNOWN = 2,
  LocationFix_PositionCovarianceType_KNOWN = 3,
  LocationFix_PositionCovarianceType_LocationFix_PositionCovarianceType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  LocationFix_PositionCovarianceType_LocationFix_PositionCovarianceType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool LocationFix_PositionCovarianceType_IsValid(int value);
constexpr LocationFix_PositionCovarianceType LocationFix_PositionCovarianceType_PositionCovarianceType_MIN = LocationFix_PositionCovarianceType_UNKNOWN;
constexpr LocationFix_PositionCovarianceType LocationFix_PositionCovarianceType_PositionCovarianceType_MAX = LocationFix_PositionCovarianceType_KNOWN;
constexpr int LocationFix_PositionCovarianceType_PositionCovarianceType_ARRAYSIZE = LocationFix_PositionCovarianceType_PositionCovarianceType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LocationFix_PositionCovarianceType_descriptor();
template<typename T>
inline const std::string& LocationFix_PositionCovarianceType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LocationFix_PositionCovarianceType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LocationFix_PositionCovarianceType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LocationFix_PositionCovarianceType_descriptor(), enum_t_value);
}
inline bool LocationFix_PositionCovarianceType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, LocationFix_PositionCovarianceType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LocationFix_PositionCovarianceType>(
    LocationFix_PositionCovarianceType_descriptor(), name, value);
}
// ===================================================================

class LocationFix final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:foxglove.LocationFix) */ {
 public:
  inline LocationFix() : LocationFix(nullptr) {}
  ~LocationFix() override;
  explicit PROTOBUF_CONSTEXPR LocationFix(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LocationFix(const LocationFix& from);
  LocationFix(LocationFix&& from) noexcept
    : LocationFix() {
    *this = ::std::move(from);
  }

  inline LocationFix& operator=(const LocationFix& from) {
    CopyFrom(from);
    return *this;
  }
  inline LocationFix& operator=(LocationFix&& from) noexcept {
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
  static const LocationFix& default_instance() {
    return *internal_default_instance();
  }
  static inline const LocationFix* internal_default_instance() {
    return reinterpret_cast<const LocationFix*>(
               &_LocationFix_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LocationFix& a, LocationFix& b) {
    a.Swap(&b);
  }
  inline void Swap(LocationFix* other) {
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
  void UnsafeArenaSwap(LocationFix* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LocationFix* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LocationFix>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LocationFix& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LocationFix& from) {
    LocationFix::MergeImpl(*this, from);
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
  void InternalSwap(LocationFix* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "foxglove.LocationFix";
  }
  protected:
  explicit LocationFix(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef LocationFix_PositionCovarianceType PositionCovarianceType;
  static constexpr PositionCovarianceType UNKNOWN =
    LocationFix_PositionCovarianceType_UNKNOWN;
  static constexpr PositionCovarianceType APPROXIMATED =
    LocationFix_PositionCovarianceType_APPROXIMATED;
  static constexpr PositionCovarianceType DIAGONAL_KNOWN =
    LocationFix_PositionCovarianceType_DIAGONAL_KNOWN;
  static constexpr PositionCovarianceType KNOWN =
    LocationFix_PositionCovarianceType_KNOWN;
  static inline bool PositionCovarianceType_IsValid(int value) {
    return LocationFix_PositionCovarianceType_IsValid(value);
  }
  static constexpr PositionCovarianceType PositionCovarianceType_MIN =
    LocationFix_PositionCovarianceType_PositionCovarianceType_MIN;
  static constexpr PositionCovarianceType PositionCovarianceType_MAX =
    LocationFix_PositionCovarianceType_PositionCovarianceType_MAX;
  static constexpr int PositionCovarianceType_ARRAYSIZE =
    LocationFix_PositionCovarianceType_PositionCovarianceType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PositionCovarianceType_descriptor() {
    return LocationFix_PositionCovarianceType_descriptor();
  }
  template<typename T>
  static inline const std::string& PositionCovarianceType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PositionCovarianceType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PositionCovarianceType_Name.");
    return LocationFix_PositionCovarianceType_Name(enum_t_value);
  }
  static inline bool PositionCovarianceType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PositionCovarianceType* value) {
    return LocationFix_PositionCovarianceType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kPositionCovarianceFieldNumber = 4,
    kLatitudeFieldNumber = 1,
    kLongitudeFieldNumber = 2,
    kAltitudeFieldNumber = 3,
    kPositionCovarianceTypeFieldNumber = 5,
  };
  // repeated double position_covariance = 4;
  int position_covariance_size() const;
  private:
  int _internal_position_covariance_size() const;
  public:
  void clear_position_covariance();
  private:
  double _internal_position_covariance(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_position_covariance() const;
  void _internal_add_position_covariance(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_position_covariance();
  public:
  double position_covariance(int index) const;
  void set_position_covariance(int index, double value);
  void add_position_covariance(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      position_covariance() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_position_covariance();

  // double latitude = 1;
  void clear_latitude();
  double latitude() const;
  void set_latitude(double value);
  private:
  double _internal_latitude() const;
  void _internal_set_latitude(double value);
  public:

  // double longitude = 2;
  void clear_longitude();
  double longitude() const;
  void set_longitude(double value);
  private:
  double _internal_longitude() const;
  void _internal_set_longitude(double value);
  public:

  // double altitude = 3;
  void clear_altitude();
  double altitude() const;
  void set_altitude(double value);
  private:
  double _internal_altitude() const;
  void _internal_set_altitude(double value);
  public:

  // .foxglove.LocationFix.PositionCovarianceType position_covariance_type = 5;
  void clear_position_covariance_type();
  ::foxglove::LocationFix_PositionCovarianceType position_covariance_type() const;
  void set_position_covariance_type(::foxglove::LocationFix_PositionCovarianceType value);
  private:
  ::foxglove::LocationFix_PositionCovarianceType _internal_position_covariance_type() const;
  void _internal_set_position_covariance_type(::foxglove::LocationFix_PositionCovarianceType value);
  public:

  // @@protoc_insertion_point(class_scope:foxglove.LocationFix)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > position_covariance_;
    double latitude_;
    double longitude_;
    double altitude_;
    int position_covariance_type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_foxglove_2fLocationFix_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocationFix

// double latitude = 1;
inline void LocationFix::clear_latitude() {
  _impl_.latitude_ = 0;
}
inline double LocationFix::_internal_latitude() const {
  return _impl_.latitude_;
}
inline double LocationFix::latitude() const {
  // @@protoc_insertion_point(field_get:foxglove.LocationFix.latitude)
  return _internal_latitude();
}
inline void LocationFix::_internal_set_latitude(double value) {
  
  _impl_.latitude_ = value;
}
inline void LocationFix::set_latitude(double value) {
  _internal_set_latitude(value);
  // @@protoc_insertion_point(field_set:foxglove.LocationFix.latitude)
}

// double longitude = 2;
inline void LocationFix::clear_longitude() {
  _impl_.longitude_ = 0;
}
inline double LocationFix::_internal_longitude() const {
  return _impl_.longitude_;
}
inline double LocationFix::longitude() const {
  // @@protoc_insertion_point(field_get:foxglove.LocationFix.longitude)
  return _internal_longitude();
}
inline void LocationFix::_internal_set_longitude(double value) {
  
  _impl_.longitude_ = value;
}
inline void LocationFix::set_longitude(double value) {
  _internal_set_longitude(value);
  // @@protoc_insertion_point(field_set:foxglove.LocationFix.longitude)
}

// double altitude = 3;
inline void LocationFix::clear_altitude() {
  _impl_.altitude_ = 0;
}
inline double LocationFix::_internal_altitude() const {
  return _impl_.altitude_;
}
inline double LocationFix::altitude() const {
  // @@protoc_insertion_point(field_get:foxglove.LocationFix.altitude)
  return _internal_altitude();
}
inline void LocationFix::_internal_set_altitude(double value) {
  
  _impl_.altitude_ = value;
}
inline void LocationFix::set_altitude(double value) {
  _internal_set_altitude(value);
  // @@protoc_insertion_point(field_set:foxglove.LocationFix.altitude)
}

// repeated double position_covariance = 4;
inline int LocationFix::_internal_position_covariance_size() const {
  return _impl_.position_covariance_.size();
}
inline int LocationFix::position_covariance_size() const {
  return _internal_position_covariance_size();
}
inline void LocationFix::clear_position_covariance() {
  _impl_.position_covariance_.Clear();
}
inline double LocationFix::_internal_position_covariance(int index) const {
  return _impl_.position_covariance_.Get(index);
}
inline double LocationFix::position_covariance(int index) const {
  // @@protoc_insertion_point(field_get:foxglove.LocationFix.position_covariance)
  return _internal_position_covariance(index);
}
inline void LocationFix::set_position_covariance(int index, double value) {
  _impl_.position_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:foxglove.LocationFix.position_covariance)
}
inline void LocationFix::_internal_add_position_covariance(double value) {
  _impl_.position_covariance_.Add(value);
}
inline void LocationFix::add_position_covariance(double value) {
  _internal_add_position_covariance(value);
  // @@protoc_insertion_point(field_add:foxglove.LocationFix.position_covariance)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
LocationFix::_internal_position_covariance() const {
  return _impl_.position_covariance_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
LocationFix::position_covariance() const {
  // @@protoc_insertion_point(field_list:foxglove.LocationFix.position_covariance)
  return _internal_position_covariance();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
LocationFix::_internal_mutable_position_covariance() {
  return &_impl_.position_covariance_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
LocationFix::mutable_position_covariance() {
  // @@protoc_insertion_point(field_mutable_list:foxglove.LocationFix.position_covariance)
  return _internal_mutable_position_covariance();
}

// .foxglove.LocationFix.PositionCovarianceType position_covariance_type = 5;
inline void LocationFix::clear_position_covariance_type() {
  _impl_.position_covariance_type_ = 0;
}
inline ::foxglove::LocationFix_PositionCovarianceType LocationFix::_internal_position_covariance_type() const {
  return static_cast< ::foxglove::LocationFix_PositionCovarianceType >(_impl_.position_covariance_type_);
}
inline ::foxglove::LocationFix_PositionCovarianceType LocationFix::position_covariance_type() const {
  // @@protoc_insertion_point(field_get:foxglove.LocationFix.position_covariance_type)
  return _internal_position_covariance_type();
}
inline void LocationFix::_internal_set_position_covariance_type(::foxglove::LocationFix_PositionCovarianceType value) {
  
  _impl_.position_covariance_type_ = value;
}
inline void LocationFix::set_position_covariance_type(::foxglove::LocationFix_PositionCovarianceType value) {
  _internal_set_position_covariance_type(value);
  // @@protoc_insertion_point(field_set:foxglove.LocationFix.position_covariance_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace foxglove

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::foxglove::LocationFix_PositionCovarianceType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::foxglove::LocationFix_PositionCovarianceType>() {
  return ::foxglove::LocationFix_PositionCovarianceType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_foxglove_2fLocationFix_2eproto
