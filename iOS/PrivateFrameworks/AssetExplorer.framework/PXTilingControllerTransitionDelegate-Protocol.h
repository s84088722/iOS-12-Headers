//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class PXTilingChange, PXTilingController;
@protocol PXTileIdentifierConverter, PXTileTransitionAnimationCoordinator;

@protocol PXTilingControllerTransitionDelegate <NSObject>

@optional
- (id <PXTileTransitionAnimationCoordinator>)tilingController:(PXTilingController *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
- (id <PXTileIdentifierConverter>)tilingController:(PXTilingController *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (void)tilingController:(PXTilingController *)arg1 prepareForChange:(PXTilingChange *)arg2;
@end

