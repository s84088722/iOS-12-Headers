//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FREditorialTabBarItemManager, NSString;
@protocol TSChannelsTabBarItemManagerType;

@protocol FRToCEditorialManager
@property(copy, nonatomic) NSString *editorialTabArticleID;
@property(nonatomic) __weak FREditorialTabBarItemManager *editorialTabBarItemManager;
@property(nonatomic) __weak id <TSChannelsTabBarItemManagerType> channelsTabBarItemManager;
- (void)prewarmWithCompletion:(void (^)(void))arg1;
- (void)removeBadgeForArticleID:(NSString *)arg1;
- (void)refreshEditorialItems;
@end
