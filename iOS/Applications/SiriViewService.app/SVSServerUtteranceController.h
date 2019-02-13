//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class NSString, SVSServerUtteranceView;

@interface SVSServerUtteranceController : SiriUIAceObjectViewController
{
    SVSServerUtteranceView *_utteranceView;
    NSString *_utterance;
    NSString *_utterancePrefix;
    _Bool _isTip;
}

- (void).cxx_destruct;
- (double)_insertionAnimatedZPosition;
- (long long)_replacementAnimation;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;
- (double)_scaledTopPadding;
- (double)_extendedTopPadding;
- (double)baselineOffsetFromBottom;
- (double)desiredTopPaddingBelowController:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (id)description;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)_loadFromObject:(id)arg1;
- (void)setAceObject:(id)arg1;

@end

