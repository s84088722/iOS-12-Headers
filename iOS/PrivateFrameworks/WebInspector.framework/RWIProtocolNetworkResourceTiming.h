//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject
{
}

@property(nonatomic) double responseStart;
@property(nonatomic) double requestStart;
@property(nonatomic) double secureConnectionStart;
@property(nonatomic) double connectEnd;
@property(nonatomic) double connectStart;
@property(nonatomic) double domainLookupEnd;
@property(nonatomic) double domainLookupStart;
@property(nonatomic) double startTime;
- (id)initWithStartTime:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8;

@end

