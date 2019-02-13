//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;

@interface CMKFlashButton : CMKExpandableMenuButton
{
    _Bool _allowsAutomaticFlash;
    _Bool _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

@property(readonly, nonatomic) UIImageView *_warningIndicatorView; // @synthesize _warningIndicatorView=__warningIndicatorView;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic, getter=isUnavailable) _Bool unavailable; // @synthesize unavailable=_unavailable;
@property(nonatomic) _Bool allowsAutomaticFlash; // @synthesize allowsAutomaticFlash=_allowsAutomaticFlash;
- (void).cxx_destruct;
- (_Bool)shouldIgnoreMenuInteraction;
- (_Bool)wantsSelectedItemToBeVisible;
- (void)reloadData;
- (id)hiddenIndexesWhileCollapsed;
- (void)setExpansionOrientation:(long long)arg1;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImage;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (long long)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
@property(nonatomic) long long flashMode;
- (id)initWithExpansionOrientation:(long long)arg1;
- (void)_commonCMKFlashButtonInitialization;

@end

