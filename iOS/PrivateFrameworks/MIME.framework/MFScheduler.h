//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFScheduler : NSObject
{
}

+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)mainThreadScheduler;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end

