//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/NSObject-Protocol.h>

@class NSDictionary, NSString, UIView;

@protocol GKRemoteUIAuxiliaryViewDelegate <NSObject>

@optional
- (void)auxiliaryView:(UIView *)arg1 pressedLink:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)auxiliaryView:(UIView *)arg1 pressedButton:(NSString *)arg2 attributes:(NSDictionary *)arg3;
@end

