//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCMMSession, PXCMMViewController;

@protocol PXCMMViewControllerDelegate <NSObject>

@optional
- (void)completeMyMomentViewController:(PXCMMViewController *)arg1 showPhotoPickerForSession:(PXCMMSession *)arg2;
- (void)didCancelCompleteMyMomentViewController:(PXCMMViewController *)arg1;
- (void)startPreloadingTasksForCompleteMyMomentViewController:(PXCMMViewController *)arg1;
@end

