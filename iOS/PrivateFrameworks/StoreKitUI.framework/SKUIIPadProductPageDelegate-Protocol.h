//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIIPadProductPageViewController, SKUIItem;

@protocol SKUIIPadProductPageDelegate <NSObject>

@optional
- (void)iPadProductPageCannotOpen:(SKUIIPadProductPageViewController *)arg1;
- (void)iPadProductPage:(SKUIIPadProductPageViewController *)arg1 openURL:(NSURL *)arg2 viewControllerBlock:(UIViewController * (^)(void))arg3;
- (void)iPadProductPage:(SKUIIPadProductPageViewController *)arg1 openItem:(SKUIItem *)arg2;
@end

