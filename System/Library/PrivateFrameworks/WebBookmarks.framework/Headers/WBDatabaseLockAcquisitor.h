//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol WBDatabaseLockAcquisitorDelegate;

@interface WBDatabaseLockAcquisitor : NSObject
{
    NSTimer *_timer;
    Class _webBookmarkCollectionClass;
    _Bool _lockAcquired;
    long long _maxRetryCount;
    long long _retryCount;
    id <WBDatabaseLockAcquisitorDelegate> _delegate;
}

@property(nonatomic) __weak id <WBDatabaseLockAcquisitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_retryTimerFired:(id)arg1;
- (void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)_stopTimer;
- (_Bool)_attemptToLockSyncAndNotifyDelegateOnFailure:(_Bool)arg1;
- (void)releaseLock;
- (void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)acquireLockWithTimeout:(double)arg1;
- (void)dealloc;
- (id)initWithWebBookmarkCollectionClass:(Class)arg1;

@end

