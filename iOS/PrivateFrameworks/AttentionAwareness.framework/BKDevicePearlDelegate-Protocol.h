//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AttentionAwareness/NSObject-Protocol.h>

@class BKDevice;

@protocol BKDevicePearlDelegate <NSObject>

@optional
- (void)device:(BKDevice *)arg1 pearlStateChanged:(long long)arg2;
- (void)device:(BKDevice *)arg1 pearlEventOccurred:(long long)arg2;
@end

