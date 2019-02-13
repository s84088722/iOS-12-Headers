//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriClientFlow/AFServiceHelper-Protocol.h>

@class NSString;
@protocol AFServiceHelper;

@interface CFServiceHelper : NSObject <AFServiceHelper>
{
    _Bool _isClientLiteHelper;
    id <AFServiceHelper> _serviceHelper;
}

@property _Bool isClientLiteHelper; // @synthesize isClientLiteHelper=_isClientLiteHelper;
@property(retain) id <AFServiceHelper> serviceHelper; // @synthesize serviceHelper=_serviceHelper;
- (void).cxx_destruct;
- (id)initClientLiteHelper;
- (id)initWithServiceHelper:(id)arg1;
- (void)handleRemoteCommand:(id)arg1 isOneWay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommand:(id)arg1 isOneWay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)peerInfoForCurrentCommand;
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTimeoutSuspended;
- (_Bool)isDeviceLockedWithPasscode;
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
- (void)dismissAssistant;
- (_Bool)openSensitiveURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

