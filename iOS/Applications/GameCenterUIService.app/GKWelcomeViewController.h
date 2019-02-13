//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKViewController.h>

#import "GKBubbleFlowableViewController-Protocol.h"

@class NSString;

@interface GKWelcomeViewController : GKViewController <GKBubbleFlowableViewController>
{
}

- (id)bubbleAnimatorForTransitionToViewController:(id)arg1;
- (id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
- (_Bool)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1;
- (_Bool)_shouldAnimateBubblesIn;
- (void)configureControlForBubble:(id)arg1;
- (struct CGRect)finalScreenFrameInViewCoordinatesForBubbleOfType:(long long)arg1;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (_Bool)_gkCanBeRemovedFromParentWhenCovered;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

