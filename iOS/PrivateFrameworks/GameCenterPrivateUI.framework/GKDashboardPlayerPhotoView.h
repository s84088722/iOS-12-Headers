//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class GKPlayer;

@interface GKDashboardPlayerPhotoView : UIImageView
{
    _Bool _useDarkerPlaceholder;
    GKPlayer *_player;
}

@property(nonatomic) _Bool useDarkerPlaceholder; // @synthesize useDarkerPlaceholder=_useDarkerPlaceholder;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)invalidatePhoto;
- (void)dealloc;

@end

