//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATOperation.h"

@class NSString, UIAlertController, UIViewController;

@interface CRKPresentAlertOperation : CATOperation
{
    UIAlertController *mAlertController;
    NSString *_acknowledgeOptionTitle;
    NSString *_message;
    UIViewController *_presentingViewController;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *acknowledgeOptionTitle; // @synthesize acknowledgeOptionTitle=_acknowledgeOptionTitle;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithPresentingViewController:(id)arg1 title:(id)arg2 message:(id)arg3 acknowledgeOptionTitle:(id)arg4;
- (void)dealloc;

@end

