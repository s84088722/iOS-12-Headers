//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKMonitor-Protocol.h>

@class NSDate;

@protocol _DKHistoricalMonitor <_DKMonitor>
@property(readonly, nonatomic) NSDate *lastUpdate;
@property(copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property(copy, nonatomic) CDUnknownBlockType historicalHandler;
- (void)update;
@end

