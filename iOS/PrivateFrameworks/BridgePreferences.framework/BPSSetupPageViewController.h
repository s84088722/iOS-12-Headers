//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <BridgePreferences/BPSBuddyController-Protocol.h>

@class NSString, UILabel, UIView;
@protocol BPSBuddyControllerDelegate;

@interface BPSSetupPageViewController : UIViewController <BPSBuddyController>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    id <BPSBuddyControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <BPSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)removeFollowupForPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)addFollowUpForPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_baseIdentifier;
- (_Bool)wantsFollowUpNotification;
- (id)localizedInformativeNotificationText;
- (id)localizedNotificationTitle;
- (id)localizedInformativeText;
- (id)followUpActions;
- (id)localizedTitle;
- (id)followUpIdentifier;
- (id)titleAttributedString;
- (id)titleString;
@property(readonly, nonatomic) UIView *contentView;
- (_Bool)contentViewIsInAdjustedScrollView;
- (double)verticalTitleInset;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) struct CGRect computedTitleFrame;
- (void)updateTitleLabel;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

