//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseMainController.h"

@class CUXPCAgent, NFCTagReaderScanViewController, NSString, SVSCommonNavController, UIStoryboard;

@interface NFCTagReaderMainController : SVSBaseMainController
{
    _Bool _dismissed;
    _Bool _dismissPending;
    int _operationCount;
    UIStoryboard *_storyboard;
    NFCTagReaderScanViewController *_vcIdle;
    SVSCommonNavController *_vcNav;
    NFCTagReaderScanViewController *_vcScan;
    CUXPCAgent *_xpcAgent;
    _Bool _appeared;
    _Bool _dismissing;
    NSString *_purpose;
    long long _tagCount;
}

@property(nonatomic) long long tagCount; // @synthesize tagCount=_tagCount;
@property(copy, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
- (void).cxx_destruct;
- (void)uiOperationEnd;
- (void)uiOperationBegin;
- (void)showScanUI;
- (void)showIdleUI;
- (void)nfcTagScannedCount:(long long)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)dismissIfIdle;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

