//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class SFPunchout, SKUIPlayButton, SearchUITrailersCardSectionView, UILabel, UIView;

@interface SearchUITrailerView : TLKStackView
{
    SearchUITrailersCardSectionView *_cardSectionView;
    UILabel *_titleLabel;
    SKUIPlayButton *_playButton;
    SFPunchout *_punchout;
    UIView *_centeredBoxView;
}

@property(retain) UIView *centeredBoxView; // @synthesize centeredBoxView=_centeredBoxView;
@property(retain) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(retain) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak SearchUITrailersCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)playTrailer;
- (id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2;

@end

