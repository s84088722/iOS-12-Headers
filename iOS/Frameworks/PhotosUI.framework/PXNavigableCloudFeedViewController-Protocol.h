//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset;

@protocol PXNavigableCloudFeedViewController <NSObject>
- (void)navigateToNewestContentAnimated:(_Bool)arg1;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(PLCloudSharedAlbum *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedAsset:(PLManagedAsset *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealCloudFeedAsset:(PLManagedAsset *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)performWhenReadyToNavigate:(void (^)(void))arg1;
@end
