//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol NSObject;

@protocol PXTileTransitionAnimationCoordinator <NSObject>
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id <NSObject>)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id <NSObject>)arg5;
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id <NSObject>)arg5;
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id <NSObject>)arg5;
- (id <NSObject>)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id <NSObject>)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id <NSObject>)arg6;
@end
