//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting>
{
    _Bool _pressIsAnimating;
    _Bool _unpressOnEndAnimating;
    _Bool _allowsFocus;
    UIView<TVAuxiliaryViewSelecting> *_selectingView;
}

@property(nonatomic) __weak UIView<TVAuxiliaryViewSelecting> *selectingView; // @synthesize selectingView=_selectingView;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void).cxx_destruct;
- (void)_showPressState;
- (void)_clearPressState;
- (id)_selectingView;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

