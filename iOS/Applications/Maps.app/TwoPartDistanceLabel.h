//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TwoPartTopBarLabel.h"

__attribute__((visibility("hidden")))
@interface TwoPartDistanceLabel : TwoPartTopBarLabel
{
    double _remainingDistance;
    long long _detail;
}

@property(nonatomic) long long detail; // @synthesize detail=_detail;
@property(nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

