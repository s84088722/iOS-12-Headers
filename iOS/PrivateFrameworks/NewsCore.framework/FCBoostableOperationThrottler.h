//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottler-Protocol.h>

@protocol FCOperationThrottlerDelegate, OS_dispatch_queue;

@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler>
{
    _Bool _workPending;
    struct os_unfair_lock_s _workPendingLock;
    id <FCOperationThrottlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
}

@property(nonatomic) struct os_unfair_lock_s workPendingLock; // @synthesize workPendingLock=_workPendingLock;
@property(nonatomic) _Bool workPending; // @synthesize workPending=_workPending;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // @synthesize serialWorkQueue=_serialWorkQueue;
@property(nonatomic) __weak id <FCOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property _Bool suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickle;
- (void)tickleWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tickleWithQualityOfService:(long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

