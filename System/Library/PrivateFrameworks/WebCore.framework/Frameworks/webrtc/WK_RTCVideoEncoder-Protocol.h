//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <webrtc/NSObject-Protocol.h>

@class NSArray, NSString, WK_RTCVideoEncoderQpThresholds, WK_RTCVideoEncoderSettings, WK_RTCVideoFrame;
@protocol WK_RTCCodecSpecificInfo;

@protocol WK_RTCVideoEncoder <NSObject>
- (WK_RTCVideoEncoderQpThresholds *)scalingSettings;
- (NSString *)implementationName;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (long long)encode:(WK_RTCVideoFrame *)arg1 codecSpecificInfo:(id <WK_RTCCodecSpecificInfo>)arg2 frameTypes:(NSArray *)arg3;
- (long long)releaseEncoder;
- (long long)startEncodeWithSettings:(WK_RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(_Bool (^)(WK_RTCEncodedImage *, id <WK_RTCCodecSpecificInfo>, WK_RTCRtpFragmentationHeader *))arg1;
@end
