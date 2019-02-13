//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseMainController.h"

@class NSUUID, RepairDoneViewController, RepairProgressViewController, RepairStartViewController, SFDeviceRepairSession, SVSCommonNavController, UIStoryboard;

@interface RepairMainController : SVSBaseMainController
{
    _Bool _dismissed;
    _Bool _loggedUsageStart;
    _Bool _loggedUsageDone;
    SFDeviceRepairSession *_sfSession;
    UIStoryboard *_storyboard;
    RepairDoneViewController *_vcDone;
    SVSCommonNavController *_vcNav;
    RepairProgressViewController *_vcProgress;
    RepairStartViewController *_vcStart;
    unsigned long long _viewAppearedTicks;
    unsigned char _deviceColorCode;
    int _testMode;
    NSUUID *_deviceIdentifier;
}

@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned char deviceColorCode; // @synthesize deviceColorCode=_deviceColorCode;
- (void).cxx_destruct;
- (void)showProgressUI;
- (void)showDoneUI:(int)arg1 error:(id)arg2 final:(_Bool)arg3;
- (void)showDoneUI:(int)arg1;
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;
- (void)_sessionStart:(id)arg1;
- (void)logUsageDone:(int)arg1;
- (void)logUsageStart:(int)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

