//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/NSObject-Protocol.h>

@class NSString;

@protocol ARSessionMetricsReporting <NSObject>
- (void)pushValue:(double)arg1 forDistributionKey:(NSString *)arg2;
- (void)addValue:(long long)arg1 forScalarKey:(NSString *)arg2;
- (void)postDarwinNotification:(NSString *)arg1;
@end

