//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingController, PXTilingLayout, PXTilingScrollInfo;

@protocol PXTilingControllerScrollDelegate <NSObject>

@optional
- (PXTilingScrollInfo *)tilingController:(PXTilingController *)arg1 scrollInfoForLayout:(PXTilingLayout *)arg2;
- (struct CGPoint)tilingController:(PXTilingController *)arg1 targetVisibleOriginForLayout:(PXTilingLayout *)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (struct CGPoint)tilingController:(PXTilingController *)arg1 initialVisibleOriginForLayout:(PXTilingLayout *)arg2;
@end

