//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString;

@protocol REPredictionServer <NSObject>
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(NSString *)arg1 actionIdentifier:(unsigned long long)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)fetchFirstPerformedActionDate:(void (^)(NSDate *))arg1;
- (void)requestPredictedActionsWithCompletion:(void (^)(NSArray *, NSArray *))arg1;
@end

