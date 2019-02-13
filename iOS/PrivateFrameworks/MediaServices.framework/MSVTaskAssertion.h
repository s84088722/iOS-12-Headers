//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol OS_dispatch_source;

@interface MSVTaskAssertion : NSObject
{
    NSString *_uuid;
    NSString *_bundleID;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    _Bool _acquired;
    BKSProcessAssertion *_processAssertion;
    long long _type;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_cancelInvalidationTimerWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidateOnDate:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 bundleID:(id)arg2 name:(id)arg3 subsystem:(id)arg4;
- (id)initWithType:(long long)arg1 pid:(int)arg2 name:(id)arg3 subsystem:(id)arg4;
- (id)_initWithType:(long long)arg1 bundleID:(id)arg2 orPID:(int)arg3 name:(id)arg4 subsystem:(id)arg5;

@end

