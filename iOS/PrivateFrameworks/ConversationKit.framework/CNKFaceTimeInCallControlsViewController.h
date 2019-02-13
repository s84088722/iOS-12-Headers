//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIView;
@protocol CNKFaceTimeInCallControlsViewControllerDelegate;

@interface CNKFaceTimeInCallControlsViewController : UIViewController
{
    // Error parsing type: , name: joinLeaveButtonTopConstraintConstant
    // Error parsing type: , name: groupName
    // Error parsing type: , name: shouldShowEffects
    // Error parsing type: , name: shouldShowGlow
    // Error parsing type: , name: localParticipant
    // Error parsing type: , name: participants
    // Error parsing type: , name: capabilitiesChecker
    // Error parsing type: , name: viewContent
    // Error parsing type: , name: mode
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: videoButtonIsEnabled
    // Error parsing type: , name: videoIsEnabled
    // Error parsing type: , name: audioIsEnabled
    // Error parsing type: , name: effectsButtonIsEnabled
    // Error parsing type: , name: shouldShowJoinButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: participantDelegate
    // Error parsing type: , name: participantsViewControllerDelegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)accessibilityMessageLabel;
- (id)accessibilityMessageButton;
- (id)accessibilityDisableVideoLabel;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityRouteLabel;
- (id)accessibilityRouteButton;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityCameraButton;
- (id)accessibilityEffectsLabel;
- (id)accessibilityEffectsButton;
- (id)accessibilityExpandButton;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityHotdog;
- (void)updateControlsVisibilityForExpandedState:(_Bool)arg1;
- (void)didToggleMuteCamera;
- (void)didTapRoutePicker;
- (void)didTapOpenMessages;
- (void)didTapToggleMuteAudio;
- (void)didTapFlipCamera;
- (void)didTapExpand;
- (void)didTapJoinConversation;
- (void)didTapLeaveConversation;
- (void)didTapEffects;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) __weak id <CNKFaceTimeInCallControlsViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) UIView *audioButton;
@property(nonatomic) _Bool shouldShowJoinButton; // @synthesize shouldShowJoinButton;
@property(nonatomic) _Bool effectsButtonIsEnabled; // @synthesize effectsButtonIsEnabled;
@property(nonatomic) _Bool audioIsEnabled; // @synthesize audioIsEnabled;
@property(nonatomic) _Bool videoIsEnabled; // @synthesize videoIsEnabled;
@property(nonatomic) _Bool videoButtonIsEnabled; // @synthesize videoButtonIsEnabled;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;

@end

