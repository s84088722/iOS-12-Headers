//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BrowserContainerViewController, BrowserController;

@protocol BrowserContainerViewControllerDelegate <NSObject>

@optional
- (BrowserController *)browserContainerViewController:(BrowserContainerViewController *)arg1 openNewWindowOnEdge:(long long)arg2 fromBrowserController:(BrowserController *)arg3;
- (void)containerWillChangeArrangement:(BrowserContainerViewController *)arg1;
@end

