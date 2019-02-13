//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarActionsModelDelegate-Protocol.h>
#import <AvatarUI/AVTFaceTrackingManagerDelegate-Protocol.h>
#import <AvatarUI/UINavigationControllerDelegate-Protocol.h>

@class AVTAvatarActionButton, AVTAvatarActionsModel, AVTImageTransitioningContainerView, AVTUIEnvironment, AVTViewSession, AVTViewSessionProvider, NSString, UIImageView, UIStackView, UITapGestureRecognizer;
@protocol AVTAvatarActionsViewControllerDelegate, AVTAvatarActionsViewControllerLayout;

@interface AVTAvatarActionsViewController : UIViewController <AVTAvatarActionsModelDelegate, UINavigationControllerDelegate, AVTFaceTrackingManagerDelegate>
{
    _Bool _isAnimating;
    id <AVTAvatarActionsViewControllerDelegate> _delegate;
    id <AVTAvatarActionsViewControllerLayout> _currentLayout;
    UIStackView *_buttonsView;
    AVTImageTransitioningContainerView *_avatarContainer;
    AVTAvatarActionButton *_editButton;
    AVTAvatarActionButton *_duplicateButton;
    AVTAvatarActionButton *_deleteButton;
    AVTAvatarActionsModel *_actionsModel;
    AVTViewSessionProvider *_sessionProvider;
    AVTViewSession *_avtViewSession;
    CDUnknownBlockType _postSessionDidBecomeActiveHandler;
    UIImageView *_transitionImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    AVTUIEnvironment *_environment;
}

@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
@property(copy, nonatomic) CDUnknownBlockType postSessionDidBecomeActiveHandler; // @synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(readonly, nonatomic) AVTViewSessionProvider *sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) AVTAvatarActionsModel *actionsModel; // @synthesize actionsModel=_actionsModel;
@property(retain, nonatomic) AVTAvatarActionButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) AVTAvatarActionButton *duplicateButton; // @synthesize duplicateButton=_duplicateButton;
@property(retain, nonatomic) AVTAvatarActionButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) AVTImageTransitioningContainerView *avatarContainer; // @synthesize avatarContainer=_avatarContainer;
@property(retain, nonatomic) UIStackView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain, nonatomic) id <AVTAvatarActionsViewControllerLayout> currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) __weak id <AVTAvatarActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)interfaceOrientationForFaceTrackingManager:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)performTransitionAfterDeleteToRecord:(id)arg1 fromLeft:(_Bool)arg2 previousRecordImage:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (double)deleteMoveInDelay;
- (double)deleteMoveInDuration;
- (void)performTransitionAfterDuplicateToRecord:(id)arg1 previousRecordImage:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (double)duplicateScaleDelay;
- (double)duplicateScaleDuration;
- (void)actionsModelDidFinish:(id)arg1;
- (void)actionsModelDidUpdateInlineActionButtons:(id)arg1;
- (void)actionsModel:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)actionsModel:(id)arg1 shouldDeleteRecord:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)actionsModel:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)actionsModel:(id)arg1 didCancelEditingRecord:(id)arg2;
- (void)actionsModel:(id)arg1 didEditRecord:(id)arg2;
- (void)actionsModel:(id)arg1 didAddRecord:(id)arg2;
- (void)dismissEditorViewController:(id)arg1 forActionsModel:(id)arg2 wasCreate:(_Bool)arg3 didEdit:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentEditorViewController:(id)arg1 forActionsModel:(id)arg2 isCreate:(_Bool)arg3;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didTapDone:(id)arg1;
- (void)didTapAvatarView:(id)arg1;
- (void)createTransitionImageViewIfNeeded;
- (void)applyLayout:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)configureUserInfoLabel;
- (void)beginUsingAVTViewFromSession:(id)arg1;
- (void)beginAVTViewSessionWithDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutViewFromModel:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)configureAVTViewSession:(id)arg1 withAvatarRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithAVTViewSessionProvider:(id)arg1 actionsModel:(id)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

