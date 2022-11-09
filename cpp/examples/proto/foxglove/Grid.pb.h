// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/Grid.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_foxglove_2fGrid_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_foxglove_2fGrid_2eproto

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
#include "foxglove/PackedElementField.pb.h"
#include "foxglove/Pose.pb.h"
#include "foxglove/Vector2.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_foxglove_2fGrid_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_foxglove_2fGrid_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_foxglove_2fGrid_2eproto;
namespace foxglove {
class Grid;
struct GridDefaultTypeInternal;
extern GridDefaultTypeInternal _Grid_default_instance_;
}  // namespace foxglove
PROTOBUF_NAMESPACE_OPEN
template<> ::foxglove::Grid* Arena::CreateMaybeMessage<::foxglove::Grid>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace foxglove {

// ===================================================================

class Grid final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:foxglove.Grid) */ {
 public:
  inline Grid() : Grid(nullptr) {}
  ~Grid() override;
  explicit PROTOBUF_CONSTEXPR Grid(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Grid(const Grid& from);
  Grid(Grid&& from) noexcept
    : Grid() {
    *this = ::std::move(from);
  }

  inline Grid& operator=(const Grid& from) {
    CopyFrom(from);
    return *this;
  }
  inline Grid& operator=(Grid&& from) noexcept {
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
  static const Grid& default_instance() {
    return *internal_default_instance();
  }
  static inline const Grid* internal_default_instance() {
    return reinterpret_cast<const Grid*>(
               &_Grid_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Grid& a, Grid& b) {
    a.Swap(&b);
  }
  inline void Swap(Grid* other) {
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
  void UnsafeArenaSwap(Grid* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Grid* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Grid>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Grid& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Grid& from) {
    Grid::MergeImpl(*this, from);
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
  void InternalSwap(Grid* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "foxglove.Grid";
  }
  protected:
  explicit Grid(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFieldsFieldNumber = 8,
    kFrameIdFieldNumber = 2,
    kDataFieldNumber = 9,
    kTimestampFieldNumber = 1,
    kPoseFieldNumber = 3,
    kCellSizeFieldNumber = 5,
    kColumnCountFieldNumber = 4,
    kRowStrideFieldNumber = 6,
    kCellStrideFieldNumber = 7,
  };
  // repeated .foxglove.PackedElementField fields = 8;
  int fields_size() const;
  private:
  int _internal_fields_size() const;
  public:
  void clear_fields();
  ::foxglove::PackedElementField* mutable_fields(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::foxglove::PackedElementField >*
      mutable_fields();
  private:
  const ::foxglove::PackedElementField& _internal_fields(int index) const;
  ::foxglove::PackedElementField* _internal_add_fields();
  public:
  const ::foxglove::PackedElementField& fields(int index) const;
  ::foxglove::PackedElementField* add_fields();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::foxglove::PackedElementField >&
      fields() const;

  // string frame_id = 2;
  void clear_frame_id();
  const std::string& frame_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_frame_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_frame_id();
  PROTOBUF_NODISCARD std::string* release_frame_id();
  void set_allocated_frame_id(std::string* frame_id);
  private:
  const std::string& _internal_frame_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_frame_id(const std::string& value);
  std::string* _internal_mutable_frame_id();
  public:

  // bytes data = 9;
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_NODISCARD std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // .google.protobuf.Timestamp timestamp = 1;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // .foxglove.Pose pose = 3;
  bool has_pose() const;
  private:
  bool _internal_has_pose() const;
  public:
  void clear_pose();
  const ::foxglove::Pose& pose() const;
  PROTOBUF_NODISCARD ::foxglove::Pose* release_pose();
  ::foxglove::Pose* mutable_pose();
  void set_allocated_pose(::foxglove::Pose* pose);
  private:
  const ::foxglove::Pose& _internal_pose() const;
  ::foxglove::Pose* _internal_mutable_pose();
  public:
  void unsafe_arena_set_allocated_pose(
      ::foxglove::Pose* pose);
  ::foxglove::Pose* unsafe_arena_release_pose();

  // .foxglove.Vector2 cell_size = 5;
  bool has_cell_size() const;
  private:
  bool _internal_has_cell_size() const;
  public:
  void clear_cell_size();
  const ::foxglove::Vector2& cell_size() const;
  PROTOBUF_NODISCARD ::foxglove::Vector2* release_cell_size();
  ::foxglove::Vector2* mutable_cell_size();
  void set_allocated_cell_size(::foxglove::Vector2* cell_size);
  private:
  const ::foxglove::Vector2& _internal_cell_size() const;
  ::foxglove::Vector2* _internal_mutable_cell_size();
  public:
  void unsafe_arena_set_allocated_cell_size(
      ::foxglove::Vector2* cell_size);
  ::foxglove::Vector2* unsafe_arena_release_cell_size();

  // fixed32 column_count = 4;
  void clear_column_count();
  uint32_t column_count() const;
  void set_column_count(uint32_t value);
  private:
  uint32_t _internal_column_count() const;
  void _internal_set_column_count(uint32_t value);
  public:

  // fixed32 row_stride = 6;
  void clear_row_stride();
  uint32_t row_stride() const;
  void set_row_stride(uint32_t value);
  private:
  uint32_t _internal_row_stride() const;
  void _internal_set_row_stride(uint32_t value);
  public:

  // fixed32 cell_stride = 7;
  void clear_cell_stride();
  uint32_t cell_stride() const;
  void set_cell_stride(uint32_t value);
  private:
  uint32_t _internal_cell_stride() const;
  void _internal_set_cell_stride(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:foxglove.Grid)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::foxglove::PackedElementField > fields_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_id_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
    ::foxglove::Pose* pose_;
    ::foxglove::Vector2* cell_size_;
    uint32_t column_count_;
    uint32_t row_stride_;
    uint32_t cell_stride_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_foxglove_2fGrid_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Grid

// .google.protobuf.Timestamp timestamp = 1;
inline bool Grid::_internal_has_timestamp() const {
  return this != internal_default_instance() && _impl_.timestamp_ != nullptr;
}
inline bool Grid::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Grid::_internal_timestamp() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Grid::timestamp() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.timestamp)
  return _internal_timestamp();
}
inline void Grid::unsafe_arena_set_allocated_timestamp(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  _impl_.timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:foxglove.Grid.timestamp)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Grid::release_timestamp() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Grid::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:foxglove.Grid.timestamp)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Grid::_internal_mutable_timestamp() {
  
  if (_impl_.timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.timestamp_ = p;
  }
  return _impl_.timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Grid::mutable_timestamp() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_timestamp();
  // @@protoc_insertion_point(field_mutable:foxglove.Grid.timestamp)
  return _msg;
}
inline void Grid::set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp));
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Grid.timestamp)
}

// string frame_id = 2;
inline void Grid::clear_frame_id() {
  _impl_.frame_id_.ClearToEmpty();
}
inline const std::string& Grid::frame_id() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.frame_id)
  return _internal_frame_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Grid::set_frame_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.frame_id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:foxglove.Grid.frame_id)
}
inline std::string* Grid::mutable_frame_id() {
  std::string* _s = _internal_mutable_frame_id();
  // @@protoc_insertion_point(field_mutable:foxglove.Grid.frame_id)
  return _s;
}
inline const std::string& Grid::_internal_frame_id() const {
  return _impl_.frame_id_.Get();
}
inline void Grid::_internal_set_frame_id(const std::string& value) {
  
  _impl_.frame_id_.Set(value, GetArenaForAllocation());
}
inline std::string* Grid::_internal_mutable_frame_id() {
  
  return _impl_.frame_id_.Mutable(GetArenaForAllocation());
}
inline std::string* Grid::release_frame_id() {
  // @@protoc_insertion_point(field_release:foxglove.Grid.frame_id)
  return _impl_.frame_id_.Release();
}
inline void Grid::set_allocated_frame_id(std::string* frame_id) {
  if (frame_id != nullptr) {
    
  } else {
    
  }
  _impl_.frame_id_.SetAllocated(frame_id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.frame_id_.IsDefault()) {
    _impl_.frame_id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:foxglove.Grid.frame_id)
}

// .foxglove.Pose pose = 3;
inline bool Grid::_internal_has_pose() const {
  return this != internal_default_instance() && _impl_.pose_ != nullptr;
}
inline bool Grid::has_pose() const {
  return _internal_has_pose();
}
inline const ::foxglove::Pose& Grid::_internal_pose() const {
  const ::foxglove::Pose* p = _impl_.pose_;
  return p != nullptr ? *p : reinterpret_cast<const ::foxglove::Pose&>(
      ::foxglove::_Pose_default_instance_);
}
inline const ::foxglove::Pose& Grid::pose() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.pose)
  return _internal_pose();
}
inline void Grid::unsafe_arena_set_allocated_pose(
    ::foxglove::Pose* pose) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pose_);
  }
  _impl_.pose_ = pose;
  if (pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:foxglove.Grid.pose)
}
inline ::foxglove::Pose* Grid::release_pose() {
  
  ::foxglove::Pose* temp = _impl_.pose_;
  _impl_.pose_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::foxglove::Pose* Grid::unsafe_arena_release_pose() {
  // @@protoc_insertion_point(field_release:foxglove.Grid.pose)
  
  ::foxglove::Pose* temp = _impl_.pose_;
  _impl_.pose_ = nullptr;
  return temp;
}
inline ::foxglove::Pose* Grid::_internal_mutable_pose() {
  
  if (_impl_.pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::foxglove::Pose>(GetArenaForAllocation());
    _impl_.pose_ = p;
  }
  return _impl_.pose_;
}
inline ::foxglove::Pose* Grid::mutable_pose() {
  ::foxglove::Pose* _msg = _internal_mutable_pose();
  // @@protoc_insertion_point(field_mutable:foxglove.Grid.pose)
  return _msg;
}
inline void Grid::set_allocated_pose(::foxglove::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose));
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Grid.pose)
}

// fixed32 column_count = 4;
inline void Grid::clear_column_count() {
  _impl_.column_count_ = 0u;
}
inline uint32_t Grid::_internal_column_count() const {
  return _impl_.column_count_;
}
inline uint32_t Grid::column_count() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.column_count)
  return _internal_column_count();
}
inline void Grid::_internal_set_column_count(uint32_t value) {
  
  _impl_.column_count_ = value;
}
inline void Grid::set_column_count(uint32_t value) {
  _internal_set_column_count(value);
  // @@protoc_insertion_point(field_set:foxglove.Grid.column_count)
}

// .foxglove.Vector2 cell_size = 5;
inline bool Grid::_internal_has_cell_size() const {
  return this != internal_default_instance() && _impl_.cell_size_ != nullptr;
}
inline bool Grid::has_cell_size() const {
  return _internal_has_cell_size();
}
inline const ::foxglove::Vector2& Grid::_internal_cell_size() const {
  const ::foxglove::Vector2* p = _impl_.cell_size_;
  return p != nullptr ? *p : reinterpret_cast<const ::foxglove::Vector2&>(
      ::foxglove::_Vector2_default_instance_);
}
inline const ::foxglove::Vector2& Grid::cell_size() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.cell_size)
  return _internal_cell_size();
}
inline void Grid::unsafe_arena_set_allocated_cell_size(
    ::foxglove::Vector2* cell_size) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.cell_size_);
  }
  _impl_.cell_size_ = cell_size;
  if (cell_size) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:foxglove.Grid.cell_size)
}
inline ::foxglove::Vector2* Grid::release_cell_size() {
  
  ::foxglove::Vector2* temp = _impl_.cell_size_;
  _impl_.cell_size_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::foxglove::Vector2* Grid::unsafe_arena_release_cell_size() {
  // @@protoc_insertion_point(field_release:foxglove.Grid.cell_size)
  
  ::foxglove::Vector2* temp = _impl_.cell_size_;
  _impl_.cell_size_ = nullptr;
  return temp;
}
inline ::foxglove::Vector2* Grid::_internal_mutable_cell_size() {
  
  if (_impl_.cell_size_ == nullptr) {
    auto* p = CreateMaybeMessage<::foxglove::Vector2>(GetArenaForAllocation());
    _impl_.cell_size_ = p;
  }
  return _impl_.cell_size_;
}
inline ::foxglove::Vector2* Grid::mutable_cell_size() {
  ::foxglove::Vector2* _msg = _internal_mutable_cell_size();
  // @@protoc_insertion_point(field_mutable:foxglove.Grid.cell_size)
  return _msg;
}
inline void Grid::set_allocated_cell_size(::foxglove::Vector2* cell_size) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.cell_size_);
  }
  if (cell_size) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(cell_size));
    if (message_arena != submessage_arena) {
      cell_size = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, cell_size, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.cell_size_ = cell_size;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Grid.cell_size)
}

// fixed32 row_stride = 6;
inline void Grid::clear_row_stride() {
  _impl_.row_stride_ = 0u;
}
inline uint32_t Grid::_internal_row_stride() const {
  return _impl_.row_stride_;
}
inline uint32_t Grid::row_stride() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.row_stride)
  return _internal_row_stride();
}
inline void Grid::_internal_set_row_stride(uint32_t value) {
  
  _impl_.row_stride_ = value;
}
inline void Grid::set_row_stride(uint32_t value) {
  _internal_set_row_stride(value);
  // @@protoc_insertion_point(field_set:foxglove.Grid.row_stride)
}

// fixed32 cell_stride = 7;
inline void Grid::clear_cell_stride() {
  _impl_.cell_stride_ = 0u;
}
inline uint32_t Grid::_internal_cell_stride() const {
  return _impl_.cell_stride_;
}
inline uint32_t Grid::cell_stride() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.cell_stride)
  return _internal_cell_stride();
}
inline void Grid::_internal_set_cell_stride(uint32_t value) {
  
  _impl_.cell_stride_ = value;
}
inline void Grid::set_cell_stride(uint32_t value) {
  _internal_set_cell_stride(value);
  // @@protoc_insertion_point(field_set:foxglove.Grid.cell_stride)
}

// repeated .foxglove.PackedElementField fields = 8;
inline int Grid::_internal_fields_size() const {
  return _impl_.fields_.size();
}
inline int Grid::fields_size() const {
  return _internal_fields_size();
}
inline ::foxglove::PackedElementField* Grid::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:foxglove.Grid.fields)
  return _impl_.fields_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::foxglove::PackedElementField >*
Grid::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:foxglove.Grid.fields)
  return &_impl_.fields_;
}
inline const ::foxglove::PackedElementField& Grid::_internal_fields(int index) const {
  return _impl_.fields_.Get(index);
}
inline const ::foxglove::PackedElementField& Grid::fields(int index) const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.fields)
  return _internal_fields(index);
}
inline ::foxglove::PackedElementField* Grid::_internal_add_fields() {
  return _impl_.fields_.Add();
}
inline ::foxglove::PackedElementField* Grid::add_fields() {
  ::foxglove::PackedElementField* _add = _internal_add_fields();
  // @@protoc_insertion_point(field_add:foxglove.Grid.fields)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::foxglove::PackedElementField >&
Grid::fields() const {
  // @@protoc_insertion_point(field_list:foxglove.Grid.fields)
  return _impl_.fields_;
}

// bytes data = 9;
inline void Grid::clear_data() {
  _impl_.data_.ClearToEmpty();
}
inline const std::string& Grid::data() const {
  // @@protoc_insertion_point(field_get:foxglove.Grid.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Grid::set_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:foxglove.Grid.data)
}
inline std::string* Grid::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:foxglove.Grid.data)
  return _s;
}
inline const std::string& Grid::_internal_data() const {
  return _impl_.data_.Get();
}
inline void Grid::_internal_set_data(const std::string& value) {
  
  _impl_.data_.Set(value, GetArenaForAllocation());
}
inline std::string* Grid::_internal_mutable_data() {
  
  return _impl_.data_.Mutable(GetArenaForAllocation());
}
inline std::string* Grid::release_data() {
  // @@protoc_insertion_point(field_release:foxglove.Grid.data)
  return _impl_.data_.Release();
}
inline void Grid::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  _impl_.data_.SetAllocated(data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.data_.IsDefault()) {
    _impl_.data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:foxglove.Grid.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace foxglove

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_foxglove_2fGrid_2eproto
