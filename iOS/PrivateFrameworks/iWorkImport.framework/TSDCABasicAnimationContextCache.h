//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDCAPropertyAnimationContextCache.h>

__attribute__((visibility("hidden")))
@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache
{
    id _fromValue;
    id _toValue;
}

@property(readonly, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(readonly, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
- (void).cxx_destruct;
- (double)percentAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)initWithAnimation:(id)arg1;

@end

