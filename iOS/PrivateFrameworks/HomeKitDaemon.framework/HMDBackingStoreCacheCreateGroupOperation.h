//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheCreateGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_record;
    CDUnknownBlockType _creationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithZone:(id)arg1 owner:(id)arg2 rootRecord:(id)arg3 subscriptionName:(id)arg4 subscription:(id)arg5 creationBlock:(CDUnknownBlockType)arg6;

@end

