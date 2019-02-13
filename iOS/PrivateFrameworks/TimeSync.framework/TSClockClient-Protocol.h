//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/NSObject-Protocol.h>

@class TSClock;

@protocol TSClockClient <NSObject>

@optional
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didProcessSync:(TSClock *)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didEndClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didBeginClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSClock *)arg2;
- (void)didChangeClockMasterForClock:(TSClock *)arg1;
- (void)didResetClock:(TSClock *)arg1;
@end

