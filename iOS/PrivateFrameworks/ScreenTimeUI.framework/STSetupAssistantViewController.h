//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

@protocol STSetupAssistantViewControllerDelegate;

@interface STSetupAssistantViewController : BFFSplashController
{
    _Bool _hasRestrictionsPasscode;
    id <STSetupAssistantViewControllerDelegate> _delegate;
    long long _state;
}

@property _Bool hasRestrictionsPasscode; // @synthesize hasRestrictionsPasscode=_hasRestrictionsPasscode;
@property long long state; // @synthesize state=_state;
@property __weak id <STSetupAssistantViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasRestrictions;
- (void)viewDidLoad;
- (id)initWithScreenTimeState:(long long)arg1 passcode:(_Bool)arg2;
- (id)init;

@end

