//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDHarvestQueue : NSObject
{
    NSString *_permafailDirectory;
}

+ (id)queueCachingInMemoryBefore:(id)arg1;
+ (id)queueCachingInMemoryBefore:(id)arg1 limit:(unsigned long long)arg2 ttl:(double)arg3;
+ (id)queueWithLegacyStorage:(id)arg1 highPriority:(_Bool)arg2;
+ (id)queueWithOnDiskStorage:(id)arg1;
+ (id)pathForDefaultQueue;
+ (void)swapOutEphemeralDefaultQueueForTesting;
+ (void)swapInEphemeralDefaultQueueForTesting;
+ (id)defaultQueue;
- (void).cxx_destruct;
- (void)close;
- (void)countHighPriorityItems:(unsigned long long *)arg1 lowPriorityItems:(unsigned long long *)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)popByItemId:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)popHighPriority:(CDUnknownBlockType)arg1;
- (void)pop:(CDUnknownBlockType)arg1;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(_Bool)arg3 item:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)writePermafail:(id)arg1;
- (void)setPermafailDirectory:(id)arg1;
- (id)permafailDirectory;

@end
