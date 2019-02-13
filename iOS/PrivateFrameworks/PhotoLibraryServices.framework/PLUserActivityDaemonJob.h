//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString;

@interface PLUserActivityDaemonJob : PLDaemonJob
{
    long long _actionType;
    NSString *_albumUUID;
    NSArray *_assetUUIDs;
    long long _cloudFeedContent;
    NSString *_suggestedCMMUUID;
    NSString *_momentShareUUID;
}

+ (void)userDidChangeStatusForMomentShare:(id)arg1;
+ (void)userDidChangeStatusForSuggestedCMM:(id)arg1;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidDeleteSharedAssets:(id)arg1;
+ (void)userDidDeleteSharedAlbum:(id)arg1;
+ (void)userDidReadCommentOnSharedAsset:(id)arg1;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;
+ (void)userDidViewCloudFeedContent:(long long)arg1;
@property(copy, nonatomic) NSString *momentShareUUID; // @synthesize momentShareUUID=_momentShareUUID;
@property(copy, nonatomic) NSString *suggestedCMMUUID; // @synthesize suggestedCMMUUID=_suggestedCMMUUID;
@property(nonatomic) long long cloudFeedContent; // @synthesize cloudFeedContent=_cloudFeedContent;
@property(retain, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(copy, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property long long actionType; // @synthesize actionType=_actionType;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)dealloc;

@end

