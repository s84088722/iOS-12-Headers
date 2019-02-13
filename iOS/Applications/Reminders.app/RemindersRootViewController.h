//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISplitViewControllerDelegate-Protocol.h"

@class RemindersCardStackViewController, RemindersDebugMenuViewController, RemindersSplitViewController, UITraitCollection, UIView;

@interface RemindersRootViewController : UIViewController <UISplitViewControllerDelegate>
{
    RemindersCardStackViewController *_stackViewController;
    RemindersSplitViewController *_splitViewController;
    long long _currentHorizontalSizeClass;
    long long _currentVerticalSizeClass;
    UIView *_debugView;
    RemindersDebugMenuViewController *_debugController;
    UITraitCollection *_overrideTraitCollection;
    _Bool _isInSizeTransition;
    long long _transitionToHorizontalSizeClass;
    long long _transitionToVerticalSizeClass;
    struct CGSize _transitionToSize;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(readonly) struct CGSize transitionToSize; // @synthesize transitionToSize=_transitionToSize;
@property(readonly) long long transitionToVerticalSizeClass; // @synthesize transitionToVerticalSizeClass=_transitionToVerticalSizeClass;
@property(readonly) long long transitionToHorizontalSizeClass; // @synthesize transitionToHorizontalSizeClass=_transitionToHorizontalSizeClass;
@property(readonly) _Bool isInSizeTransition; // @synthesize isInSizeTransition=_isInSizeTransition;
@property(readonly) RemindersSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(readonly) RemindersCardStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
- (void).cxx_destruct;
- (void)displayEditorForReminder:(id)arg1;
- (void)beginSearch:(id)arg1;
- (void)_debugViewPanned:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)traitCollection;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (void)addSplitViewController;
- (void)addStackViewController;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

