//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, PHFetchResult;
@protocol OS_dispatch_queue, PUSearchGridDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchGridDataSource : NSObject
{
    _Bool _finished;
    _Bool _hasPendingChanges;
    id <PUSearchGridDataSourceDelegate> _delegate;
    NSSet *_assetUUIDs;
    unsigned long long _searchCategories;
    NSString *_title;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskId;
    PHFetchResult *_fetchResult;
}

@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long searchCategories; // @synthesize searchCategories=_searchCategories;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(nonatomic) __weak id <PUSearchGridDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mergePendingChanges;
- (void)_inqClearPendingChanges;
- (void)updateAssetUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateFetchResult:(id)arg1 taskId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateFetchResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (_Bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (id)init;

@end
