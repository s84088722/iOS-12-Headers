//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class SVVideoViewController;

@protocol SVVideoViewControllerAppearanceObserver <NSObject>

@optional
- (void)videoViewControllerDidDisappear:(SVVideoViewController *)arg1;
- (void)videoViewControllerWillDisappear:(SVVideoViewController *)arg1;
- (void)videoViewControllerDidAppear:(SVVideoViewController *)arg1;
- (void)videoViewControllerWillAppear:(SVVideoViewController *)arg1;
@end

