//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol DCDocumentCameraViewControllerDelegate;

@interface DCDocumentCameraViewController : UINavigationController
{
    id <DCDocumentCameraViewControllerDelegate> _docCamDelegate;
}

+ (_Bool)isAvailable;
+ (id)inProcessViewControllerWithDelegate:(id)arg1;
+ (id)viewServiceViewControllerWithDelegate:(id)arg1;
+ (id)defaultViewControllerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <DCDocumentCameraViewControllerDelegate> docCamDelegate; // @synthesize docCamDelegate=_docCamDelegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 rootViewController:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

