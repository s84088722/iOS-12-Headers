//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayType, HKGraphSeries, UIColor;

@interface WDGraphSeriesConfiguration : NSObject
{
    HKGraphSeries *_graphSeries;
    HKDisplayType *_displayType;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKGraphSeries *graphSeries; // @synthesize graphSeries=_graphSeries;
- (void).cxx_destruct;

@end

