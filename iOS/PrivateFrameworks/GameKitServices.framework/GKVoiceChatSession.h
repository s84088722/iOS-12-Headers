//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol GKVoiceChatSessionDelegate;

@interface GKVoiceChatSession : NSObject
{
    id opaqueSession;
}

@property float sessionVolume;
@property(readonly) float inputMeter;
@property(getter=isActiveSession) _Bool activeSession;
@property(readonly) NSArray *peerList;
@property(readonly) NSString *sessionName;
@property id <GKVoiceChatSessionDelegate> delegate;
- (float)outputMeterForPeer:(id)arg1;
- (_Bool)getMuteStateForPeer:(id)arg1;
- (void)setMute:(_Bool)arg1 forPeer:(id)arg2;
- (void)stopSession;
- (void)startSession;
- (void)dealloc;
- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;

@end

