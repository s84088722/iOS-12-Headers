//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFBarManager;

@protocol _SFBarManagerDelegate <NSObject>

@optional
- (void)barManager:(_SFBarManager *)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (_Bool)barManager:(_SFBarManager *)arg1 canHandleLongPressForBarItem:(long long)arg2;
@end

