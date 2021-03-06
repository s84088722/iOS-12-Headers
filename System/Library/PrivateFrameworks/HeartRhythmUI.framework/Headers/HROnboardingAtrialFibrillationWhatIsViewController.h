/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HROnboardingLeftAlignedExplanationViewController.h>

@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingLeftAlignedExplanationViewController {

	HRVideoPlayerView* _videoPlayerView;

}

@property (nonatomic,retain) HRVideoPlayerView * videoPlayerView;              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
-(id)titleString;
-(HRVideoPlayerView *)videoPlayerView;
-(id)bodyString;
-(void)setVideoPlayerView:(HRVideoPlayerView *)arg1 ;
-(id)initForOnboarding:(BOOL)arg1 ;
-(id)createHeroView;
-(id)buttonTitleString;
-(long long)stackedButtonViewLastButtonMode;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

