//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKPlayer, GKSavedGame, NSArray;

@protocol GKSavedGameListener <NSObject>

@optional
- (void)player:(GKPlayer *)arg1 hasConflictingSavedGames:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didModifySavedGame:(GKSavedGame *)arg2;
@end

