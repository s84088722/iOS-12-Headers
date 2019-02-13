//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerShadowView, GKPlayer, NSLayoutConstraint, UIColor, UILabel, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell
{
    _Bool _onDarkBackground;
    GKPlayer *_player;
    GKDashboardPlayerShadowView *_playerView;
    NSLayoutConstraint *_playerViewBottomToNameLabelTopConstraint;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIColor *_nameColor;
    UIColor *_statusColor;
    double _playerViewBottomToNameLabelTopConstant;
}

+ (double)preferredCollectionHeight;
+ (struct CGSize)defaultSize;
@property(nonatomic) double playerViewBottomToNameLabelTopConstant; // @synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint; // @synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint;
@property(nonatomic) GKDashboardPlayerShadowView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)canBecomeFocused;
- (void)updateLabelColorForDashboard;
- (void)setStatusWithLastPlayedDate:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setNameText:(id)arg1;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;
- (void)awakeFromNib;

@end

