//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
{
}

- (void)_loadMiscConfig:(id)arg1;
- (_Bool)_loadConfig:(id)arg1 cipherCuite:(id)arg2;
- (void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3;
- (_Bool)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id *)arg2;
- (_Bool)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (_Bool)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (_Bool)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id *)arg2 audioStreamConfig:(id *)arg3;

@end

