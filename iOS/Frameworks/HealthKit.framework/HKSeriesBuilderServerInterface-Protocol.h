//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol HKSeriesBuilderServerInterface <NSObject>
- (void)remote_recoverWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_freezeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_discardWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_addMetadata:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

