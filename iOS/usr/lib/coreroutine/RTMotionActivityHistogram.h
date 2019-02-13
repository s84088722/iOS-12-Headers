//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject
{
    NSMutableDictionary *_bins;
    double _totalInterval;
}

@property(nonatomic) double totalInterval; // @synthesize totalInterval=_totalInterval;
@property(readonly, nonatomic) NSMutableDictionary *bins; // @synthesize bins=_bins;
- (void).cxx_destruct;
- (id)binsSortedByInterval;
- (void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3;
- (id)binForType:(unsigned long long)arg1;
- (id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;
- (id)init;

@end

