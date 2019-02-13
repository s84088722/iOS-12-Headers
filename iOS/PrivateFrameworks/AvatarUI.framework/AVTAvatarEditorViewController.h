//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarAttributeEditorViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTSplashScreenViewControllerDelegate-Protocol.h>

@class AVTAvatarAttributeEditorViewController, AVTAvatarRecord, AVTSplashScreenViewController, AVTUIEnvironment, AVTViewSessionProvider, NSString, UIBarButtonItem;
@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTUILogger;

@interface AVTAvatarEditorViewController : UIViewController <AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate>
{
    _Bool _isCreating;
    id <AVTAvatarEditorViewControllerDelegate> _delegate;
    AVTAvatarRecord *_initialAvatarRecord;
    id <AVTAvatarStoreInternal> _store;
    AVTViewSessionProvider *_avtViewSessionProvider;
    AVTUIEnvironment *_environment;
    id <AVTUILogger> _logger;
    UIBarButtonItem *_doneButtonItem;
    AVTSplashScreenViewController *_splashScreenViewController;
    AVTAvatarAttributeEditorViewController *_attributeEditorViewController;
}

+ (id)viewControllerForCreatingAvatarInStore:(id)arg1 avtViewSessionProvider:(id)arg2;
+ (id)viewControllerForCreatingAvatarInStore:(id)arg1;
+ (id)viewControllerForEditingAvatar:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3;
+ (id)viewControllerForEditingAvatar:(id)arg1 store:(id)arg2;
+ (id)defaultSessionProvider;
+ (_Bool)shouldShowSplashScreen;
@property(readonly, nonatomic) AVTAvatarAttributeEditorViewController *attributeEditorViewController; // @synthesize attributeEditorViewController=_attributeEditorViewController;
@property(readonly, nonatomic) AVTSplashScreenViewController *splashScreenViewController; // @synthesize splashScreenViewController=_splashScreenViewController;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(readonly, nonatomic) _Bool isCreating; // @synthesize isCreating=_isCreating;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // @synthesize avtViewSessionProvider=_avtViewSessionProvider;
@property(readonly, nonatomic) id <AVTAvatarStoreInternal> store; // @synthesize store=_store;
@property(retain, nonatomic) AVTAvatarRecord *initialAvatarRecord; // @synthesize initialAvatarRecord=_initialAvatarRecord;
@property(nonatomic) __weak id <AVTAvatarEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributeEditorDidMakeFirstSelection:(id)arg1;
- (void)splashScreenViewControllerDidFinish:(id)arg1;
- (void)finish:(id)arg1;
- (void)cancel:(id)arg1;
- (void)configureNavigationItems;
- (void)loadAttributeEditorViewWithAvatarRecord:(id)arg1;
- (void)loadSplashScreen;
- (void)setupInitialViewState;
- (id)visibleLayout;
- (void)applyLayout:(id)arg1;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3 enviroment:(id)arg4 isCreating:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

