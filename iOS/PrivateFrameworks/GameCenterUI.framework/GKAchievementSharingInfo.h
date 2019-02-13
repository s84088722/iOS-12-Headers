//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCoding-Protocol.h>
#import <GameCenterUI/NSSecureCoding-Protocol.h>

@class GKAchievement, GKGame, GKPlayer, UIImage;

@interface GKAchievementSharingInfo : NSObject <NSCoding, NSSecureCoding>
{
    _Bool _complete;
    GKAchievement *_achievement;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_iconImage;
    UIImage *_badgeImage;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2;
- (void)dealloc;

@end

