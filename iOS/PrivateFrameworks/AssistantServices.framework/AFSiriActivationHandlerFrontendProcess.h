//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationHandling-Protocol.h>

@class AFSiriActivationConnection, NSString;

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFSiriActivationHandling>
{
    AFSiriActivationConnection *_connection;
}

- (void).cxx_destruct;
- (_Bool)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

