//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class IKAppTabBar, NSArray, NSDictionary, NSString;

@protocol IKAppTabBarController <NSObject>
- (NSDictionary *)tabBar:(IKAppTabBar *)arg1 tabItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTabsInTabBar:(IKAppTabBar *)arg1;
- (NSString *)transientTabItemForTabBar:(IKAppTabBar *)arg1;
- (NSArray *)tabBar:(IKAppTabBar *)arg1 setTabItems:(NSArray *)arg2;
- (void)tabBar:(IKAppTabBar *)arg1 setSelectedTabItem:(NSString *)arg2;
- (NSString *)selectedTabItemForTabBar:(IKAppTabBar *)arg1;
@end

