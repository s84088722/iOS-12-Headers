//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKCategorySample, NSArray;

@interface HDCoachingDiagnosticData : NSObject
{
    NSArray *_items;
    HKCategorySample *_coachingEventSample;
}

@property(retain, nonatomic) HKCategorySample *coachingEventSample; // @synthesize coachingEventSample=_coachingEventSample;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemForInterval:(unsigned long long)arg1 future:(_Bool)arg2;
- (id)init;

@end

