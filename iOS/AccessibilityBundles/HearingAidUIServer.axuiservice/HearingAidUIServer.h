//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingAidUIServer/AXUIContentViewControllerDelegate-Protocol.h>
#import <HearingAidUIServer/AXUIService-Protocol.h>

@class AXAssertion, AXHearingAidDisplayController, NSString, UIAlertController, UIViewController;

@interface HearingAidUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate>
{
    UIAlertController *_handoffAlertController;
    UIViewController *_emptyViewController;
    AXHearingAidDisplayController *_displayController;
    AXAssertion *_disableSystemGestureAssertion;
}

@property(retain, nonatomic) AXAssertion *disableSystemGestureAssertion; // @synthesize disableSystemGestureAssertion=_disableSystemGestureAssertion;
@property(retain, nonatomic) AXHearingAidDisplayController *displayController; // @synthesize displayController=_displayController;
- (void).cxx_destruct;
- (double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(_Bool)arg2;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)setNewDisplayController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

