//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TopBarAlertView;

@protocol TopBarAlertViewDelegate <NSObject>
- (void)topBarAlertViewSecondButtonWasTapped:(TopBarAlertView *)arg1;
- (void)topBarAlertViewButtonWasTapped:(TopBarAlertView *)arg1;

@optional
- (void)topBarAlertViewWasSwiped:(TopBarAlertView *)arg1;
- (void)topBarAlertViewWasTapped:(TopBarAlertView *)arg1;
@end

