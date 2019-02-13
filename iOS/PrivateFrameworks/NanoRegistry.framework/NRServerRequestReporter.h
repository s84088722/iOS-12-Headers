//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NRServerRequestReporter : NSObject
{
    _Bool _submitted;
    NSString *_requestType;
    struct mach_timebase_info _timebaseInfo;
    double _startTime;
}

@property(nonatomic) _Bool submitted; // @synthesize submitted=_submitted;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct mach_timebase_info timebaseInfo; // @synthesize timebaseInfo=_timebaseInfo;
@property(retain, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestTimedOut;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1 andDuration:(double)arg2;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1;
- (double)abs_to_seconds:(unsigned long long)arg1;
- (unsigned long long)abs_to_nanos:(unsigned long long)arg1;
- (id)initWithRequestType:(id)arg1;

@end

