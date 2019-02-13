//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DDRemoteActionViewService-Protocol.h"
#import "EKEventEditViewDelegate-Protocol.h"

@class DDAction, EKEvent, EKEventEditViewController, NSString;
@protocol DDRemoteActionPresenter;

@interface DDEventEditViewController : UIViewController <EKEventEditViewDelegate, DDRemoteActionViewService>
{
    id <DDRemoteActionPresenter> _proxy;
    DDAction *_action;
    EKEventEditViewController *_eventEditViewController;
    _Bool _shouldTrackEventCreation;
    unsigned long long _prefillMode;
    EKEvent *_proposedEvent;
    NSString *_eventTypeClassification;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain) DDAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)adaptForPresentationInPopover:(_Bool)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)prepareForAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

