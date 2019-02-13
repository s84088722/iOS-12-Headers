//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct BatchBeepCanceller;

struct CSAudioCircularBufferImpl<unsigned short>;

struct CSAudioZeroFilterImpl<unsigned short>;

struct SmartSiriVolume;

struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller>> {
    struct __compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller>> {
        struct BatchBeepCanceller *__value_;
    } __ptr_;
};

struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short>>> {
    struct __compressed_pair<CSAudioZeroFilterImpl<unsigned short>*, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short>>> {
        struct CSAudioZeroFilterImpl<unsigned short> *__value_;
    } __ptr_;
};

struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> {
    struct __compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume>> {
        struct SmartSiriVolume *__value_;
    } __ptr_;
};

struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
    struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short>*, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
        struct CSAudioCircularBufferImpl<unsigned short> *__value_;
    } __ptr_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__value_;
    } __end_cap_;
};

