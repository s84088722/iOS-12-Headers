//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKGameService-Protocol.h>

@class GKGameInternal, GKPlayerInternal, NSArray, NSDictionary, NSNumber, NSString;

@protocol GKGameServicePrivate <GKGameService>
- (oneway void)loadTellAFriendMessageForGameWithAdamID:(NSNumber *)arg1 handler:(void (^)(NSString *, NSString *, NSString *, NSError *))arg2;
- (oneway void)submitRating:(float)arg1 forGame:(GKGameInternal *)arg2 handler:(void (^)(void))arg3;
- (oneway void)getRatingForGameDescriptor:(NSDictionary *)arg1 handler:(void (^)(float, NSError *))arg2;
- (oneway void)getGameMetadataForBundleIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getGamesWithAchievementStatsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSString *, NSError *))arg2;
- (oneway void)getGameStatsForPlayer:(GKPlayerInternal *)arg1 bundleIDs:(NSArray *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getGamesForPlayer:(GKPlayerInternal *)arg1 includeInstalled:(_Bool)arg2 handler:(void (^)(NSArray *, NSString *, NSError *))arg3;
- (oneway void)removeGameForBundleID:(NSString *)arg1 handler:(void (^)(void))arg2;
- (oneway void)getTopGamesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getStoreItemsForAdamIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

