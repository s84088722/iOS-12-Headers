//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMPedometerBin : NSObject <NSSecureCoding>
{
    double _valueOut;
    double _begin;
    double _end;
    long long _state;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double end; // @synthesize end=_end;
@property(readonly, nonatomic) double begin; // @synthesize begin=_begin;
@property(readonly, nonatomic) double valueOut; // @synthesize valueOut=_valueOut;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double upperQuartile;
@property(readonly, nonatomic) double center;
@property(readonly, nonatomic) double lowerQuartile;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4;

@end

