//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _NMSDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_q;
    // Error parsing type: AB, name: _r
}

- (void).cxx_destruct;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3;
- (id)init;

@end

