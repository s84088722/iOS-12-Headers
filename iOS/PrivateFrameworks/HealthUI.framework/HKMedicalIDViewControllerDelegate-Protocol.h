//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKMedicalIDViewController;

@protocol HKMedicalIDViewControllerDelegate <NSObject>

@optional
- (void)medicalIDViewControllerDidAppear:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidFinish:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidDelete:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidSave:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidCancel:(HKMedicalIDViewController *)arg1;
@end

