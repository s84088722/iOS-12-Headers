//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;

@interface PXCloudPhotoWelcomeNavigationController : UINavigationController
{
    id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> _dismissDelegate;
}

@property(nonatomic) __weak id <PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;

@end

