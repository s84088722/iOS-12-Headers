//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXOneUpPresentation;

@interface UIViewController (PXOneUpPresentation)
+ (void)_px_prepareClassForOneUpPresentation;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;
- (void)px_enableOneUpPresentation;
@end

