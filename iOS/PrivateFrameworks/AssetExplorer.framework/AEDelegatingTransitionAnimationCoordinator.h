//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetExplorer/PXTileTransitionAnimationCoordinator-Protocol.h>

@class NSString;
@protocol PXTileTransitionAnimationCoordinator;

@interface AEDelegatingTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>
{
    _Bool _enableDoubleSidedAnimations;
    id <PXTileTransitionAnimationCoordinator> __wrappedCoordinator;
}

@property(readonly, nonatomic) id <PXTileTransitionAnimationCoordinator> _wrappedCoordinator; // @synthesize _wrappedCoordinator=__wrappedCoordinator;
@property(nonatomic) _Bool enableDoubleSidedAnimations; // @synthesize enableDoubleSidedAnimations=_enableDoubleSidedAnimations;
- (void).cxx_destruct;
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (id)initWithWrappedCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

