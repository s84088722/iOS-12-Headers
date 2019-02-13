//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantSupport/SASProximitySessionTransport.h>

@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport
{
    CUMessageSession *_messageSession;
    CUMessageSession *_actionMessageSession;
}

@property(retain) CUMessageSession *actionMessageSession; // @synthesize actionMessageSession=_actionMessageSession;
@property(retain) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;
- (void).cxx_destruct;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)activate;
- (id)initWithMessageSession:(id)arg1;

@end

