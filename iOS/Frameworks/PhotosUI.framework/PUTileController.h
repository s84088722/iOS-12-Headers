//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PUTileLayoutInfo, PUTilingView;

@interface PUTileController : NSObject
{
    _Bool _active;
    _Bool _detached;
    _Bool _shouldPreserveCurrentContent;
    _Bool _reusable;
    _Bool _wantsVisibleRectChanges;
    NSString *_reuseIdentifier;
    long long _animationCount;
    PUTilingView *_tilingView;
    PUTileLayoutInfo *_layoutInfo;
}

@property(readonly, nonatomic) _Bool wantsVisibleRectChanges; // @synthesize wantsVisibleRectChanges=_wantsVisibleRectChanges;
@property(readonly, nonatomic) PUTileLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic, getter=isReusable) _Bool reusable; // @synthesize reusable=_reusable;
@property(nonatomic) _Bool shouldPreserveCurrentContent; // @synthesize shouldPreserveCurrentContent=_shouldPreserveCurrentContent;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic, getter=isDetached) _Bool detached; // @synthesize detached=_detached;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)description;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)adoptAssetTransitionInfo:(id)arg1;
- (id)generateAssetTransitionInfo;
- (void)setLayoutInfo:(id)arg1;
- (void)setTilingView:(id)arg1;
@property(readonly, nonatomic) _Bool shouldAvoidInPlaceSnapshottedFadeOut;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)reuseIfApplicable;
- (void)setPreloadedImage:(id)arg1;
- (void)didChangeVisibleRect;
- (void)didChangeActive;
- (void)didChangeAnimating;
- (void)didEndAnimation:(long long)arg1;
- (long long)willBeginAnimation;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (void)applyLayoutInfo:(id)arg1;
- (void)removeAllAnimations;
- (id)freeze;
@property(readonly, nonatomic) _Bool isPresentationActive;
@property(readonly, nonatomic) PUTileLayoutInfo *presentationLayoutInfo;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)addToTilingView:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)init;

@end

