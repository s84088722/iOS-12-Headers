//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/CNContactPickerDelegate-Protocol.h>

@class CNContactPickerViewController, NSString, SKUIClientContext, SKUIItem, UIViewController;

@interface SKUITonePurchaseController : NSObject <CNContactPickerDelegate>
{
    SKUIClientContext *_clientContext;
    CNContactPickerViewController *_contactPickerController;
    CDUnknownBlockType _completionBlock;
    SKUIItem *_item;
    UIViewController *_parentViewController;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showContactPicker;
- (void)_presentViewController:(id)arg1;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)_finishContactPicker:(id)arg1 withContact:(id)arg2;
- (void)_dismissContactPicker;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

