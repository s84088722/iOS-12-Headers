//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject
{
    NSMutableSet *__nodes;
    double __range;
    double __distance;
}

@property(readonly, nonatomic) double distance; // @synthesize distance=__distance;
@property(readonly, nonatomic) double range; // @synthesize range=__range;
@property(readonly, nonatomic) NSMutableSet *nodes; // @synthesize nodes=__nodes;
- (void)dealloc;
- (id)initWithNodes:(id)arg1 inRange:(double)arg2;

@end

