//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSArray, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKDailySleepSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    NSArray *_yValues;
    double _xValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
@property(readonly, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)initWithXValue:(double)arg1 yValues:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

