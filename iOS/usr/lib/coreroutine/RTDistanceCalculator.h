//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTService.h>

@class RTLocationShifter;

@interface RTDistanceCalculator : RTService
{
    RTLocationShifter *_locationShifter;
}

@property(retain, nonatomic) RTLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
- (void).cxx_destruct;
- (double)distanceFromLocation:(id)arg1 toLocation:(id)arg2 error:(id *)arg3;

@end

