//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKMatchRequestInternal, GKPlayerInternal, GKTurnBasedMatchInternal, NSArray, NSData, NSDictionary, NSString;

@protocol GKTurnBasedService <NSObject>
- (oneway void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(NSArray *)arg4 withMessage:(NSString *)arg5 forMatch:(GKTurnBasedMatchInternal *)arg6 handler:(void (^)(NSError *))arg7;
- (oneway void)loadURLWithTBGMatch:(GKTurnBasedMatchInternal *)arg1 player:(GKPlayerInternal *)arg2 matchRequest:(GKMatchRequestInternal *)arg3 handler:(void (^)(NSURL *, NSError *))arg4;
- (oneway void)sendReminderToParticipants:(NSArray *)arg1 message:(NSDictionary *)arg2 match:(GKTurnBasedMatchInternal *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)getNextTurnBasedEventWithHandler:(void (^)(NSString *, NSString *, long long, _Bool, NSError *))arg1;
- (oneway void)replyToExchange:(NSString *)arg1 withMessage:(NSDictionary *)arg2 data:(NSData *)arg3 match:(GKTurnBasedMatchInternal *)arg4 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg5;
- (oneway void)cancelExchange:(NSString *)arg1 withMessage:(NSDictionary *)arg2 match:(GKTurnBasedMatchInternal *)arg3 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg4;
- (oneway void)sendExchangeToParticipants:(NSArray *)arg1 data:(NSData *)arg2 message:(NSDictionary *)arg3 timeout:(double)arg4 match:(GKTurnBasedMatchInternal *)arg5 handler:(void (^)(NSString *, GKTurnBasedMatchInternal *, NSError *))arg6;
- (oneway void)completeTurnBasedMatch:(GKTurnBasedMatchInternal *)arg1 scores:(NSArray *)arg2 achievements:(NSArray *)arg3 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg4;
- (oneway void)resignFromTurnBasedGame:(GKTurnBasedMatchInternal *)arg1 outcome:(unsigned long long)arg2 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg3;
- (oneway void)saveDataForTurnBasedMatch:(GKTurnBasedMatchInternal *)arg1 resolvedExchangeIDs:(NSArray *)arg2 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg3;
- (oneway void)submitTurnForTurnBasedMatch:(GKTurnBasedMatchInternal *)arg1 nextParticipantIndexes:(NSArray *)arg2 turnTimeout:(double)arg3 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg4;
- (oneway void)removeTurnBasedMatch:(GKTurnBasedMatchInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)declineInviteForTurnBasedMatch:(GKTurnBasedMatchInternal *)arg1 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg2;
- (oneway void)acceptInviteForTurnBasedMatch:(GKTurnBasedMatchInternal *)arg1 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg2;
- (oneway void)getDetailsForTurnBasedMatchIDs:(NSArray *)arg1 includeGameData:(_Bool)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getTurnBasedMatchesAndCompatibleBundleID:(_Bool)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)createTurnBasedGameForMatchRequest:(GKMatchRequestInternal *)arg1 individualMessages:(NSDictionary *)arg2 handler:(void (^)(GKTurnBasedMatchInternal *, NSError *))arg3;
@end

