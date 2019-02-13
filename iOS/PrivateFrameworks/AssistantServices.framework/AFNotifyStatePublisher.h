//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface AFNotifyStatePublisher : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (void).cxx_destruct;
- (void)_unregister;
- (void)_register;
- (_Bool)_getState:(unsigned long long *)arg1 withToken:(int)arg2;
- (_Bool)_setState:(unsigned long long)arg1 withToken:(int)arg2;
- (void)invalidate;
- (void)publishStateWithBlock:(CDUnknownBlockType)arg1;
- (void)publishState:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

