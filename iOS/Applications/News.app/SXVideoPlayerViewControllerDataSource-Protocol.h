//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SXVideoPlayerViewController;
@protocol SXVideoAdProviding, SXVideoProviding;

@protocol SXVideoPlayerViewControllerDataSource <NSObject>
- (id <SXVideoAdProviding>)videoAdForVideoPlayerViewController:(SXVideoPlayerViewController *)arg1;
- (id <SXVideoProviding>)videoForVideoPlayerViewController:(SXVideoPlayerViewController *)arg1;
@end

