//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iPhotoMigrationSupport/BLAlertViewControllerDelegate-Protocol.h>

@class BLAlertAction, BLAlertViewController, NSArray, NSString;

@interface BLAlert : NSObject <BLAlertViewControllerDelegate>
{
    BLAlertAction *_cancelAction;
    NSArray *_actions;
    CDUnknownBlockType _conditionBlock;
    id _context;
    CDUnknownBlockType _executionBlock;
    _Bool _showing;
    int _options;
    BLAlertViewController *_alertView;
    BLAlert *_strongSelf;
}

+ (id)popPendingAlert;
+ (void)pushPendingAlert:(id)arg1;
+ (id)pendingAlerts;
+ (void)performWithTitle:(id)arg1 message:(id)arg2 action:(id)arg3;
@property(retain) BLAlert *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain) id context; // @synthesize context=_context;
@property(copy) CDUnknownBlockType conditionBlock; // @synthesize conditionBlock=_conditionBlock;
- (void).cxx_destruct;
- (void)alertViewController:(id)arg1 didPressButtonAtIndex:(long long)arg2;
- (_Bool)isShowing;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)hideWithDelay:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)hideWithDelay:(double)arg1;
- (void)cancelDelayedHide;
- (void)hideWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hide:(_Bool)arg1;
- (void)hide;
- (void)showWithExecutionBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)showPendingAlertIfNeeded;
- (_Bool)wantSingular;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelAction:(id)arg3 otherActions:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 otherActions:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

