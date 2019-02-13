//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/UIActionSheetDelegate-Protocol.h>

@class NSArray, NSString, RCActionSheetAlertController, UIResponder, UIViewController;

@interface RCActionSheetController : NSObject <UIActionSheetDelegate>
{
    _Bool _showing;
    NSString *_alertTitle;
    NSString *_alertMessage;
    NSString *_cancelButtonTitle;
    NSArray *_actionButtonTitles;
    _Bool _dismissWhenDismissIsEnabled;
    UIResponder *_originalFirstResponder;
    RCActionSheetAlertController *_alertController;
    UIViewController *_modalItemPresentationViewController;
    _Bool _autoDismissDisabled;
    _Bool _enabled;
    UIViewController *_accessoryViewController;
    CDUnknownBlockType _actionHandlerBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandlerBlock; // @synthesize actionHandlerBlock=_actionHandlerBlock;
@property(readonly, nonatomic) UIViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool autoDismissDisabled; // @synthesize autoDismissDisabled=_autoDismissDisabled;
- (void).cxx_destruct;
- (void)_willDismiss;
- (void)_invokeActionHandlerWithActionIndex:(long long)arg1;
- (void)dismissWithActionIndex:(long long)arg1 invokeActionHandler:(_Bool)arg2;
- (void)dismissWithActionIndex:(long long)arg1;
- (void)cancel;
- (void)showInView:(id)arg1 actionHandlerBlock:(CDUnknownBlockType)arg2;
- (void)showInViewController:(id)arg1 source:(id)arg2 actionHandlerBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 cancelTitle:(id)arg2 actionTitles:(id)arg3 accessoryViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

