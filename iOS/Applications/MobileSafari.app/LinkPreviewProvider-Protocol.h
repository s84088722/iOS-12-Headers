//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIViewController;

@protocol LinkPreviewProvider <NSObject>
- (void)didDismissLinkPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (void)commitLinkPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)linkPreviewViewControllerForURL:(NSURL *)arg1;
@end

