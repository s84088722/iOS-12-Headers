//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, _DPStringRecorder;
@protocol OS_dispatch_queue;

@interface HDDiffPrivReporter : NSObject
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    _DPStringRecorder *_recorder;
}

+ (id)reportableTypes;
+ (_Bool)isAvailable;
- (void).cxx_destruct;
- (_Bool)reportWithCurrentDate:(id)arg1 error:(id *)arg2;
- (id)_typesInMonthWithDataForTypes:(id)arg1 now:(id)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1;

@end

