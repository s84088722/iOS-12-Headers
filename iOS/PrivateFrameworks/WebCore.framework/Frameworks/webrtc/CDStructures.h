//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BitrateAdjuster;

struct CodecSpecificInfo {
    int _field1;
    char *_field2;
    union CodecSpecificInfoUnion _field3;
};

struct CodecSpecificInfoGeneric {
    unsigned char _field1;
};

struct CodecSpecificInfoH264 {
    int _field1;
};

struct CodecSpecificInfoStereo {
    int _field1;
    struct StereoIndices _field2;
};

struct CodecSpecificInfoVP8 {
    short _field1;
    _Bool _field2;
    unsigned char _field3;
    unsigned char _field4;
    _Bool _field5;
    int _field6;
    char _field7;
};

struct CodecSpecificInfoVP9 {
    short _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    int _field5;
    unsigned char _field6;
    unsigned char _field7;
    _Bool _field8;
    _Bool _field9;
    unsigned char _field10;
    unsigned long long _field11;
    _Bool _field12;
    unsigned short _field13[8];
    unsigned short _field14[8];
    struct GofInfoVP9 _field15;
    unsigned char _field16;
    unsigned char _field17[3];
};

struct EncodedImage {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    long long _field4;
    long long _field5;
    int _field6;
    char *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    int _field10;
    unsigned char _field11;
    _Bool _field12;
    int _field13;
    struct PlayoutDelay _field14;
    struct Timing _field15;
};

struct FeedbackParam;

struct FeedbackParams {
    struct vector<cricket::FeedbackParam, std::__1::allocator<cricket::FeedbackParam>> _field1;
};

struct GofInfoVP9 {
    unsigned long long _field1;
    unsigned char _field2[255];
    _Bool _field3[255];
    unsigned char _field4[255];
    unsigned char _field5[255][3];
    unsigned short _field6;
};

struct H264BitstreamParser {
    CDUnknownFunctionPointerType *_vptr$H264BitstreamParser;
    struct Optional<webrtc::SpsParser::SpsState> sps_;
    struct Optional<webrtc::PpsParser::PpsState> pps_;
    struct Optional<int> last_slice_qp_delta_;
};

struct I420BufferInterface;

struct Optional<int> {
    _Bool has_value_;
    union {
        char empty_;
        int value_;
    } ;
};

struct Optional<webrtc::PpsParser::PpsState> {
    _Bool has_value_;
    union {
        char empty_;
        struct PpsState value_;
    } ;
};

struct Optional<webrtc::SpsParser::SpsState> {
    _Bool has_value_;
    union {
        char empty_;
        struct SpsState value_;
    } ;
};

struct PlayoutDelay {
    int _field1;
    int _field2;
};

struct PpsState {
    _Bool bottom_field_pic_order_in_frame_present_flag;
    _Bool weighted_pred_flag;
    _Bool entropy_coding_mode_flag;
    unsigned int weighted_bipred_idc;
    unsigned int redundant_pic_cnt_present_flag;
    int pic_init_qp_minus26;
    unsigned int id;
    unsigned int sps_id;
};

struct RTPFragmentationHeader {
    unsigned short _field1;
    unsigned long long *_field2;
    unsigned long long *_field3;
    unsigned short *_field4;
    char *_field5;
};

struct SdpVideoFormat {
    basic_string_a1f69cfb _field1;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field2;
};

struct SimulcastStream {
    unsigned short _field1;
    unsigned short _field2;
    unsigned char _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct SpatialLayer {
    int _field1;
    int _field2;
    int _field3;
};

struct SpsState {
    unsigned int width;
    unsigned int height;
    unsigned int delta_pic_order_always_zero_flag;
    unsigned int separate_colour_plane_flag;
    unsigned int frame_mbs_only_flag;
    unsigned int log2_max_frame_num_minus4;
    unsigned int log2_max_pic_order_cnt_lsb_minus4;
    unsigned int pic_order_cnt_type;
    unsigned int max_num_ref_frames;
    unsigned int vui_params_present;
    unsigned int id;
};

struct StereoIndices {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
};

struct TemporalLayersFactory;

struct Timing {
    unsigned char _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
};

struct TimingFrameTriggerThresholds {
    long long _field1;
    unsigned short _field2;
};

struct VideoCodecH264 {
    _Bool _field1;
    int _field2;
    char *_field3;
    unsigned long long _field4;
    char *_field5;
    unsigned long long _field6;
    int _field7;
};

struct VideoCodecVP8 {
    _Bool _field1;
    int _field2;
    int _field3;
    unsigned char _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    int _field9;
    struct TemporalLayersFactory *_field10;
};

struct VideoCodecVP9 {
    int _field1;
    _Bool _field2;
    unsigned char _field3;
    _Bool _field4;
    _Bool _field5;
    int _field6;
    _Bool _field7;
    _Bool _field8;
    unsigned char _field9;
    _Bool _field10;
};

struct VideoDecoder;

struct VideoEncoder;

struct VideoFrame {
    struct scoped_refptr<webrtc::VideoFrameBuffer> _field1;
    unsigned int _field2;
    long long _field3;
    long long _field4;
    int _field5;
};

struct VideoFrameBuffer;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct scoped_refptr<webrtc::I420BufferInterface> {
    struct I420BufferInterface *ptr_;
};

struct scoped_refptr<webrtc::VideoFrameBuffer> {
    struct VideoFrameBuffer *_field1;
};

struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster>> {
    struct __compressed_pair<webrtc::BitrateAdjuster *, std::__1::default_delete<webrtc::BitrateAdjuster>> {
        struct BitrateAdjuster *__value_;
    } __ptr_;
};

struct unique_ptr<webrtc::RTPFragmentationHeader, std::__1::default_delete<webrtc::RTPFragmentationHeader>> {
    struct __compressed_pair<webrtc::RTPFragmentationHeader *, std::__1::default_delete<webrtc::RTPFragmentationHeader>> {
        struct RTPFragmentationHeader *_field1;
    } _field1;
};

struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder>> {
    struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder>> {
        struct VideoDecoder *__value_;
    } __ptr_;
};

struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder>> {
    struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder>> {
        struct VideoEncoder *__value_;
    } __ptr_;
};

struct vector<cricket::FeedbackParam, std::__1::allocator<cricket::FeedbackParam>> {
    struct FeedbackParam *_field1;
    struct FeedbackParam *_field2;
    struct __compressed_pair<cricket::FeedbackParam *, std::__1::allocator<cricket::FeedbackParam>> {
        struct FeedbackParam *_field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:
typedef struct {
    int _field1;
    char _field2[32];
    unsigned char _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned char _field12;
    struct SimulcastStream _field13[4];
    struct SpatialLayer _field14[5];
    int _field15;
    _Bool _field16;
    struct TimingFrameTriggerThresholds _field17;
    union VideoCodecUnion _field18;
} VideoCodec_028860f0;

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    basic_string_a1f69cfb _field3;
    int _field4;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field5;
    struct FeedbackParams _field6;
} VideoCodec_88e09d5a;

#endif

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_a1f69cfb;

typedef struct scoped_refptr<webrtc::I420BufferInterface> {
    struct I420BufferInterface *ptr_;
} scoped_refptr_b674d2a6;

typedef struct unique_ptr<webrtc::RTPFragmentationHeader, std::__1::default_delete<webrtc::RTPFragmentationHeader>> {
    struct __compressed_pair<webrtc::RTPFragmentationHeader *, std::__1::default_delete<webrtc::RTPFragmentationHeader>> {
        struct RTPFragmentationHeader *_field1;
    } _field1;
} unique_ptr_91070b9b;

typedef struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder>> {
    struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder>> {
        struct VideoDecoder *__value_;
    } __ptr_;
} unique_ptr_28850a1b;

typedef struct unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder>> {
    struct __compressed_pair<webrtc::VideoEncoder *, std::__1::default_delete<webrtc::VideoEncoder>> {
        struct VideoEncoder *__value_;
    } __ptr_;
} unique_ptr_2722152f;

#pragma mark Named Unions

union CodecSpecificInfoUnion {
    struct CodecSpecificInfoGeneric _field1;
    struct CodecSpecificInfoVP8 _field2;
    struct CodecSpecificInfoVP9 _field3;
    struct CodecSpecificInfoH264 _field4;
    struct CodecSpecificInfoStereo _field5;
};

union VideoCodecUnion {
    struct VideoCodecVP8 _field1;
    struct VideoCodecVP9 _field2;
    struct VideoCodecH264 _field3;
};

