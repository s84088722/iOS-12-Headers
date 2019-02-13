//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class NSSet, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator
{
    _Bool _shouldCrossFadeTiles;
    PUTilingView *_tilingView;
    NSSet *__invisibleTileControllers;
}

@property(copy, nonatomic, setter=_setInvisibleTileControllers:) NSSet *_invisibleTileControllers; // @synthesize _invisibleTileControllers=__invisibleTileControllers;
@property(nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property(nonatomic) _Bool shouldCrossFadeTiles; // @synthesize shouldCrossFadeTiles=_shouldCrossFadeTiles;
- (void).cxx_destruct;
- (_Bool)_isLayoutInfoVisible:(id)arg1;
- (void)prepare;
- (id)_layoutInfoForDisappearedInvisibleTile:(id)arg1;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end

