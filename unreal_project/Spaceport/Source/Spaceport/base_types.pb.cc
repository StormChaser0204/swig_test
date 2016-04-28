// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base_types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base_types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace message {

namespace {

const ::google::protobuf::Descriptor* turn_t_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  turn_t_reflection_ = NULL;
const ::google::protobuf::Descriptor* hex_coord_t_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  hex_coord_t_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* season_t_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* tug_mission_t_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* carrier_type_t_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* escort_type_t_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* war_footing_t_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_5ftypes_2eproto() {
  protobuf_AddDesc_base_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "base_types.proto");
  GOOGLE_CHECK(file != NULL);
  turn_t_descriptor_ = file->message_type(0);
  static const int turn_t_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(turn_t, year_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(turn_t, season_),
  };
  turn_t_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      turn_t_descriptor_,
      turn_t::default_instance_,
      turn_t_offsets_,
      -1,
      -1,
      -1,
      sizeof(turn_t),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(turn_t, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(turn_t, _is_default_instance_));
  hex_coord_t_descriptor_ = file->message_type(1);
  static const int hex_coord_t_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(hex_coord_t, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(hex_coord_t, y_),
  };
  hex_coord_t_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      hex_coord_t_descriptor_,
      hex_coord_t::default_instance_,
      hex_coord_t_offsets_,
      -1,
      -1,
      -1,
      sizeof(hex_coord_t),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(hex_coord_t, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(hex_coord_t, _is_default_instance_));
  season_t_descriptor_ = file->enum_type(0);
  tug_mission_t_descriptor_ = file->enum_type(1);
  carrier_type_t_descriptor_ = file->enum_type(2);
  escort_type_t_descriptor_ = file->enum_type(3);
  war_footing_t_descriptor_ = file->enum_type(4);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_base_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      turn_t_descriptor_, &turn_t::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      hex_coord_t_descriptor_, &hex_coord_t::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_base_5ftypes_2eproto() {
  delete turn_t::default_instance_;
  delete turn_t_reflection_;
  delete hex_coord_t::default_instance_;
  delete hex_coord_t_reflection_;
}

void protobuf_AddDesc_base_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020base_types.proto\022\007message\"9\n\006turn_t\022\014\n"
    "\004year\030\001 \001(\005\022!\n\006season\030\002 \001(\0162\021.message.se"
    "ason_t\"#\n\013hex_coord_t\022\t\n\001x\030\001 \001(\005\022\t\n\001y\030\002 "
    "\001(\005* \n\010season_t\022\n\n\006spring\020\000\022\010\n\004fall\020\001*\212\001"
    "\n\rtug_mission_t\022\005\n\001A\020\000\022\005\n\001B\020\001\022\005\n\001C\020\002\022\005\n\001"
    "D\020\003\022\005\n\001E\020\004\022\005\n\001F\020\005\022\005\n\001G\020\006\022\005\n\001H\020\007\022\005\n\001I\020\010\022\006"
    "\n\002J1\020\t\022\006\n\002J2\020\n\022\006\n\002K1\020\013\022\006\n\002K2\020\014\022\005\n\001L\020\r\022\005\n"
    "\001M\020\016\022\005\n\001N\020\017\022\005\n\001O\020\020*v\n\016carrier_type_t\022\021\n\r"
    "not_a_carrier\020\000\022\027\n\023single_ship_carrier\020\001"
    "\022\021\n\rlight_carrier\020\002\022\022\n\016medium_carrier\020\003\022"
    "\021\n\rheavy_carrier\020\004*F\n\rescort_type_t\022\021\n\rn"
    "ot_an_escort\020\000\022\020\n\014light_escort\020\001\022\020\n\014heav"
    "y_escort\020\002*4\n\rwar_footing_t\022\007\n\003war\020\000\022\017\n\013"
    "limited_war\020\001\022\t\n\005peace\020\002b\006proto3", 552);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base_types.proto", &protobuf_RegisterTypes);
  turn_t::default_instance_ = new turn_t();
  hex_coord_t::default_instance_ = new hex_coord_t();
  turn_t::default_instance_->InitAsDefaultInstance();
  hex_coord_t::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_5ftypes_2eproto {
  StaticDescriptorInitializer_base_5ftypes_2eproto() {
    protobuf_AddDesc_base_5ftypes_2eproto();
  }
} static_descriptor_initializer_base_5ftypes_2eproto_;
const ::google::protobuf::EnumDescriptor* season_t_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return season_t_descriptor_;
}
bool season_t_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* tug_mission_t_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return tug_mission_t_descriptor_;
}
bool tug_mission_t_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* carrier_type_t_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return carrier_type_t_descriptor_;
}
bool carrier_type_t_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* escort_type_t_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return escort_type_t_descriptor_;
}
bool escort_type_t_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* war_footing_t_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return war_footing_t_descriptor_;
}
bool war_footing_t_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int turn_t::kYearFieldNumber;
const int turn_t::kSeasonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

turn_t::turn_t()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:message.turn_t)
}

void turn_t::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

turn_t::turn_t(const turn_t& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:message.turn_t)
}

void turn_t::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  year_ = 0;
  season_ = 0;
}

turn_t::~turn_t() {
  // @@protoc_insertion_point(destructor:message.turn_t)
  SharedDtor();
}

void turn_t::SharedDtor() {
  if (this != default_instance_) {
  }
}

void turn_t::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* turn_t::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return turn_t_descriptor_;
}

const turn_t& turn_t::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_base_5ftypes_2eproto();
  return *default_instance_;
}

turn_t* turn_t::default_instance_ = NULL;

turn_t* turn_t::New(::google::protobuf::Arena* arena) const {
  turn_t* n = new turn_t;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void turn_t::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<turn_t*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(year_, season_);

#undef ZR_HELPER_
#undef ZR_

}

bool turn_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:message.turn_t)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 year = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &year_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_season;
        break;
      }

      // optional .message.season_t season = 2;
      case 2: {
        if (tag == 16) {
         parse_season:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_season(static_cast< ::message::season_t >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:message.turn_t)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:message.turn_t)
  return false;
#undef DO_
}

void turn_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:message.turn_t)
  // optional int32 year = 1;
  if (this->year() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->year(), output);
  }

  // optional .message.season_t season = 2;
  if (this->season() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->season(), output);
  }

  // @@protoc_insertion_point(serialize_end:message.turn_t)
}

::google::protobuf::uint8* turn_t::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.turn_t)
  // optional int32 year = 1;
  if (this->year() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->year(), target);
  }

  // optional .message.season_t season = 2;
  if (this->season() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->season(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:message.turn_t)
  return target;
}

int turn_t::ByteSize() const {
  int total_size = 0;

  // optional int32 year = 1;
  if (this->year() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->year());
  }

  // optional .message.season_t season = 2;
  if (this->season() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->season());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void turn_t::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const turn_t* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const turn_t>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void turn_t::MergeFrom(const turn_t& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.year() != 0) {
    set_year(from.year());
  }
  if (from.season() != 0) {
    set_season(from.season());
  }
}

void turn_t::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void turn_t::CopyFrom(const turn_t& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool turn_t::IsInitialized() const {

  return true;
}

void turn_t::Swap(turn_t* other) {
  if (other == this) return;
  InternalSwap(other);
}
void turn_t::InternalSwap(turn_t* other) {
  std::swap(year_, other->year_);
  std::swap(season_, other->season_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata turn_t::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = turn_t_descriptor_;
  metadata.reflection = turn_t_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// turn_t

// optional int32 year = 1;
void turn_t::clear_year() {
  year_ = 0;
}
 ::google::protobuf::int32 turn_t::year() const {
  // @@protoc_insertion_point(field_get:message.turn_t.year)
  return year_;
}
 void turn_t::set_year(::google::protobuf::int32 value) {
  
  year_ = value;
  // @@protoc_insertion_point(field_set:message.turn_t.year)
}

// optional .message.season_t season = 2;
void turn_t::clear_season() {
  season_ = 0;
}
 ::message::season_t turn_t::season() const {
  // @@protoc_insertion_point(field_get:message.turn_t.season)
  return static_cast< ::message::season_t >(season_);
}
 void turn_t::set_season(::message::season_t value) {
  
  season_ = value;
  // @@protoc_insertion_point(field_set:message.turn_t.season)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int hex_coord_t::kXFieldNumber;
const int hex_coord_t::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

hex_coord_t::hex_coord_t()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:message.hex_coord_t)
}

void hex_coord_t::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

hex_coord_t::hex_coord_t(const hex_coord_t& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:message.hex_coord_t)
}

void hex_coord_t::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
}

hex_coord_t::~hex_coord_t() {
  // @@protoc_insertion_point(destructor:message.hex_coord_t)
  SharedDtor();
}

void hex_coord_t::SharedDtor() {
  if (this != default_instance_) {
  }
}

void hex_coord_t::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* hex_coord_t::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return hex_coord_t_descriptor_;
}

const hex_coord_t& hex_coord_t::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_base_5ftypes_2eproto();
  return *default_instance_;
}

hex_coord_t* hex_coord_t::default_instance_ = NULL;

hex_coord_t* hex_coord_t::New(::google::protobuf::Arena* arena) const {
  hex_coord_t* n = new hex_coord_t;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void hex_coord_t::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<hex_coord_t*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(x_, y_);

#undef ZR_HELPER_
#undef ZR_

}

bool hex_coord_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:message.hex_coord_t)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 x = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_y;
        break;
      }

      // optional int32 y = 2;
      case 2: {
        if (tag == 16) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:message.hex_coord_t)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:message.hex_coord_t)
  return false;
#undef DO_
}

void hex_coord_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:message.hex_coord_t)
  // optional int32 x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // optional int32 y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  // @@protoc_insertion_point(serialize_end:message.hex_coord_t)
}

::google::protobuf::uint8* hex_coord_t::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:message.hex_coord_t)
  // optional int32 x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x(), target);
  }

  // optional int32 y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:message.hex_coord_t)
  return target;
}

int hex_coord_t::ByteSize() const {
  int total_size = 0;

  // optional int32 x = 1;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // optional int32 y = 2;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void hex_coord_t::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const hex_coord_t* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const hex_coord_t>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void hex_coord_t::MergeFrom(const hex_coord_t& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void hex_coord_t::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void hex_coord_t::CopyFrom(const hex_coord_t& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool hex_coord_t::IsInitialized() const {

  return true;
}

void hex_coord_t::Swap(hex_coord_t* other) {
  if (other == this) return;
  InternalSwap(other);
}
void hex_coord_t::InternalSwap(hex_coord_t* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata hex_coord_t::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = hex_coord_t_descriptor_;
  metadata.reflection = hex_coord_t_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// hex_coord_t

// optional int32 x = 1;
void hex_coord_t::clear_x() {
  x_ = 0;
}
 ::google::protobuf::int32 hex_coord_t::x() const {
  // @@protoc_insertion_point(field_get:message.hex_coord_t.x)
  return x_;
}
 void hex_coord_t::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:message.hex_coord_t.x)
}

// optional int32 y = 2;
void hex_coord_t::clear_y() {
  y_ = 0;
}
 ::google::protobuf::int32 hex_coord_t::y() const {
  // @@protoc_insertion_point(field_get:message.hex_coord_t.y)
  return y_;
}
 void hex_coord_t::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:message.hex_coord_t.y)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
