//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TISweepSource : NSObject
{
    NSMutableDictionary *debugValues;
    int stepCount;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *debugValues; // @synthesize debugValues;
- (void).cxx_destruct;
@property(nonatomic) int stepCount;
- (_Bool)finished;
- (void)advanceSweep;
- (id)sweepStateValues;
- (id)sweepStateHeader;
- (void)addValue:(id)arg1 withValue:(float)arg2;
- (void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3;

@end

