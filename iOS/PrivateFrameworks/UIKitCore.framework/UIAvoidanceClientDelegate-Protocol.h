//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, NSValue, UIAvoidanceCoordinator;
@protocol UIAvoidanceClient;

@protocol UIAvoidanceClientDelegate <NSObject>
- (NSValue *)avoid:(NSDictionary *)arg1 forClient:(id <UIAvoidanceClient>)arg2 withCoordinator:(UIAvoidanceCoordinator *)arg3;
@end

