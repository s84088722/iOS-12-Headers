//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "RAPPresentingViewController-Protocol.h"

@class NSString, RAPReport;

__attribute__((visibility("hidden")))
@interface RAPReportComposerViewController : UINavigationController <RAPPresentingViewController>
{
    RAPReport *_report;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)returnFromViewController:(id)arg1;
- (void)segueToViewController:(id)arg1 afterReturningFromViewController:(id)arg2;
- (void)segueToViewController:(id)arg1;
- (void)_cancel;
- (void)_sendWithFinalOutcome:(long long)arg1;
- (void)_invokeCompletionWithOutcome:(long long)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)initWithReport:(id)arg1 categoryQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

