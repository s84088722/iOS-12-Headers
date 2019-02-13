//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <FuseUI/MusicActionableHeaderViewDelegate-Protocol.h>

@class MusicActionableHeaderView, NSString, UIView;
@protocol MusicEntityVerticalSectionHeaderViewDelegate;

@interface MusicEntityVerticalSectionHeaderView : UICollectionReusableView <MusicActionableHeaderViewDelegate>
{
    UIView *_hairlineView;
    _Bool _alignsHairlineWithTitle;
    id <MusicEntityVerticalSectionHeaderViewDelegate> _delegate;
    MusicActionableHeaderView *_actionableHeaderView;
    double _topContentInset;
    double _bottomContentInset;
}

+ (CDStruct_4a0565dd)_actionableHeaderMetricsForDisplayScale:(double)arg1;
+ (double)heightForTraitCollection:(id)arg1;
@property(nonatomic) _Bool alignsHairlineWithTitle; // @synthesize alignsHairlineWithTitle=_alignsHairlineWithTitle;
@property(nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(readonly, nonatomic) MusicActionableHeaderView *actionableHeaderView; // @synthesize actionableHeaderView=_actionableHeaderView;
@property(nonatomic) __weak id <MusicEntityVerticalSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

