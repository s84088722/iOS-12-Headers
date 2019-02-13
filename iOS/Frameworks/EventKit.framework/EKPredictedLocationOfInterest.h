//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RTPredictedLocationOfInterest;

__attribute__((visibility("hidden")))
@interface EKPredictedLocationOfInterest : NSObject
{
    long long _type;
    NSString *_customLabel;
    NSString *_mapItemName;
    NSString *_addressCountryCode;
    NSString *_addressThoroughfare;
    NSString *_addressLocality;
    RTPredictedLocationOfInterest *_rtPredictedLocationOfInterest;
}

@property(readonly, nonatomic) RTPredictedLocationOfInterest *rtPredictedLocationOfInterest; // @synthesize rtPredictedLocationOfInterest=_rtPredictedLocationOfInterest;
@property(readonly, copy, nonatomic) NSString *addressLocality; // @synthesize addressLocality=_addressLocality;
@property(readonly, copy, nonatomic) NSString *addressThoroughfare; // @synthesize addressThoroughfare=_addressThoroughfare;
@property(readonly, copy, nonatomic) NSString *addressCountryCode; // @synthesize addressCountryCode=_addressCountryCode;
@property(readonly, copy, nonatomic) NSString *mapItemName; // @synthesize mapItemName=_mapItemName;
@property(readonly, copy, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6;
- (id)initWithPredictedLocationOfInterest:(id)arg1;

@end

