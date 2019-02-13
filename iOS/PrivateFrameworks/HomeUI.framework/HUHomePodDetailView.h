//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class HUMonogramView, UILabel, UIView;
@protocol HFStringGenerator, HUHomePodDetailViewDelegate;

@interface HUHomePodDetailView : UIButton
{
    _Bool _isAnimatingPop;
    unsigned long long _role;
    UILabel *_unitNameLabel;
    UIView *_unitImageView;
    HUMonogramView *_unitBadgeLabel;
    id <HUHomePodDetailViewDelegate> _delegate;
}

@property(nonatomic) _Bool isAnimatingPop; // @synthesize isAnimatingPop=_isAnimatingPop;
@property(nonatomic) __weak id <HUHomePodDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HUMonogramView *unitBadgeLabel; // @synthesize unitBadgeLabel=_unitBadgeLabel;
@property(readonly, nonatomic) UIView *unitImageView; // @synthesize unitImageView=_unitImageView;
@property(readonly, nonatomic) UILabel *unitNameLabel; // @synthesize unitNameLabel=_unitNameLabel;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
- (void).cxx_destruct;
- (void)_speakerTapped;
@property(copy, nonatomic) id <HFStringGenerator> unitName; // @dynamic unitName;
- (void)_updateImagesForRole;
- (void)_setupConstraints;
- (id)initWithRole:(unsigned long long)arg1;

@end

