//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AttentionAwareness/NSObject-Protocol.h>

@class BKOperation;

@protocol BKOperationDelegate <NSObject>

@optional
- (void)operation:(BKOperation *)arg1 presenceStateChanged:(_Bool)arg2;
- (void)operation:(BKOperation *)arg1 stateChanged:(long long)arg2;
- (void)operation:(BKOperation *)arg1 finishedWithReason:(long long)arg2;
@end

