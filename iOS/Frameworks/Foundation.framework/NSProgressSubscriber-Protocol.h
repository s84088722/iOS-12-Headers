//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSProgressValues, NSString;
@protocol NSProgressPublisher;

@protocol NSProgressSubscriber <NSObject>
- (oneway void)removePublisherForID:(NSString *)arg1;
- (oneway void)observePublisherUserInfoForID:(NSString *)arg1 value:(id)arg2 forKey:(NSString *)arg3;
- (oneway void)observePublisherForID:(NSString *)arg1 values:(NSArray *)arg2 forKeys:(NSArray *)arg3;
- (oneway void)addPublisher:(id <NSProgressPublisher>)arg1 forID:(NSString *)arg2 withValues:(NSProgressValues *)arg3 isOld:(_Bool)arg4;
@end

