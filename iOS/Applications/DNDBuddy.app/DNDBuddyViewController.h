//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DNDBuddyButtonViewDelegate-Protocol.h"

@class CARAutomaticDNDStatus, DNDBuddyContainer, DNDBuddyWelcomeView, NSString, UIStatusBar;

@interface DNDBuddyViewController : UIViewController <DNDBuddyButtonViewDelegate>
{
    _Bool _initialPresentation;
    DNDBuddyContainer *_container;
    DNDBuddyWelcomeView *_buddyView;
    CARAutomaticDNDStatus *_DNDPreferences;
    UIStatusBar *_statusBar;
}

@property(nonatomic) _Bool initialPresentation; // @synthesize initialPresentation=_initialPresentation;
@property(retain, nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) CARAutomaticDNDStatus *DNDPreferences; // @synthesize DNDPreferences=_DNDPreferences;
@property(retain, nonatomic) DNDBuddyWelcomeView *buddyView; // @synthesize buddyView=_buddyView;
@property(readonly, nonatomic) __weak DNDBuddyContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)DNDBuddyButtonView:(id)arg1 didTapButtonAtIndex:(unsigned long long)arg2;
- (void)learnMoreVCComplete:(id)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContainer:(id)arg1 initialPresentation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
