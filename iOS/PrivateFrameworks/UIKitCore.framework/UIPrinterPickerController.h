//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPrinter;
@protocol UIPrinterPickerControllerDelegate;

@interface UIPrinterPickerController : NSObject
{
    CDUnknownBlockType _completionHandler;
    id _state;
    UIPrinter *_selectedPrinter;
    id <UIPrinterPickerControllerDelegate> _delegate;
}

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1;
@property(nonatomic) __weak id <UIPrinterPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIPrinter *selectedPrinter; // @synthesize selectedPrinter=_selectedPrinter;
- (void).cxx_destruct;
- (void)dismissAnimated:(_Bool)arg1;
- (_Bool)_shouldShowPrinter:(id)arg1;
- (_Bool)_delegateFiltersPrinters;
- (void)_printerPickerDidDismiss;
- (void)_printerPickerWillDismiss;
- (void)_printerPickerDidPresent;
- (_Bool)_setupPickerPanel:(CDUnknownBlockType)arg1;
- (_Bool)presentFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_init;
- (id)init;

@end

