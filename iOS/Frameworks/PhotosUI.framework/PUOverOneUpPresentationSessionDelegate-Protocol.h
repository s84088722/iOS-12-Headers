//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUBrowsingViewModel, PUOverOneUpPresentationSession, PUTileController, PUTilingView, UIViewController;
@protocol PUOneUpAssetTransitionViewController><PUAssetDisplayDescriptorNavigator;

@protocol PUOverOneUpPresentationSessionDelegate <NSObject>
- (void)overOneUpPresentationSessionDidFinish:(PUOverOneUpPresentationSession *)arg1;
- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didPresent:(UIViewController *)arg2;
- (_Bool)overOneUpPresentationSessionPresentingViewControllerIsReady:(PUOverOneUpPresentationSession *)arg1;
- (UIViewController<PUOneUpAssetTransitionViewController><PUAssetDisplayDescriptorNavigator> *)overOneUpPresentationSessionViewController:(PUOverOneUpPresentationSession *)arg1;
- (PUBrowsingViewModel *)overOneUpPresentationSessionBrowserViewModel:(PUOverOneUpPresentationSession *)arg1;
- (PUTileController *)overOneUpPresentationSessionCurrentTileController:(PUOverOneUpPresentationSession *)arg1;
- (PUTilingView *)overOneUpPresentationSessionTilingView:(PUOverOneUpPresentationSession *)arg1;
@end

