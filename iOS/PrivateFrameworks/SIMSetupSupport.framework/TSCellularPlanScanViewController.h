//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <SIMSetupSupport/TSCellularPlanQRCodeScannerCaptureDelegate-Protocol.h>
#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>

@class CAShapeLayer, NSDate, NSString, TSCellularPlanQRCodeScannerView, UIButton, UILabel, UIView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanViewController : UIViewController <TSCellularPlanQRCodeScannerCaptureDelegate, UINavigationControllerDelegate, TSSetupFlowItem>
{
    _Bool _preinstallCompleted;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    TSCellularPlanQRCodeScannerView *_scannerView;
    _Bool _confirmationCodeRequired;
    _Bool _manualCardInfoEntry;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSString *_fauxCardData;
    UIView *_scanView;
    UIView *_cutoutView;
    UIButton *_enterDetailsManuallyButton;
    UILabel *_scanQRCodeLabel;
    UILabel *_positionQRCodeLabel;
}

@property(nonatomic) __weak UILabel *positionQRCodeLabel; // @synthesize positionQRCodeLabel=_positionQRCodeLabel;
@property(nonatomic) __weak UILabel *scanQRCodeLabel; // @synthesize scanQRCodeLabel=_scanQRCodeLabel;
@property(nonatomic) __weak UIButton *enterDetailsManuallyButton; // @synthesize enterDetailsManuallyButton=_enterDetailsManuallyButton;
@property(nonatomic) __weak UIView *cutoutView; // @synthesize cutoutView=_cutoutView;
@property(nonatomic) __weak UIView *scanView; // @synthesize scanView=_scanView;
@property(readonly) _Bool manualCardInfoEntry; // @synthesize manualCardInfoEntry=_manualCardInfoEntry;
@property(readonly) _Bool confirmationCodeRequired; // @synthesize confirmationCodeRequired=_confirmationCodeRequired;
@property(readonly) NSString *fauxCardData; // @synthesize fauxCardData=_fauxCardData;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)arg1;
- (void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)enterFauxCardDataManually:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(_Bool)arg2;
- (void)planInfoDidUpdate:(id)arg1 planListError:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

