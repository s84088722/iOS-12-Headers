//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVValueTiming.h>

@interface AVConcreteValueTiming : AVValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (CDStruct_c3b9c2ee)_timing;
- (double)rate;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;

@end

