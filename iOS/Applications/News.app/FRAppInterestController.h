//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAdSpacingReportable-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;

@interface FRAppInterestController : NSObject <FRAdSpacingReportable>
{
    _Bool _widgetShouldAlwaysBeInserted;
    _Bool _hasOverrideSetForScreenfulsPerAd;
    long long _numberOfScreenfulsPerAd;
    NSMutableDictionary *_datesSinceLastWidgetInsertedIntoTag;
    NSMutableDictionary *_datesSinceWidgetAppearance;
    NSDate *_dateOfLastWidget;
    NSDate *_dateOfLastNativeAd;
    long long _nextWidgetOnceToken;
    long long _widgetShouldAlwaysBeInsertedOnceToken;
    long long _forceShowWidgetOnceToken;
    NSString *_forceShowWidgetTypeString;
    NSString *_currentFeedID;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *currentFeedID; // @synthesize currentFeedID=_currentFeedID;
@property(nonatomic) _Bool hasOverrideSetForScreenfulsPerAd; // @synthesize hasOverrideSetForScreenfulsPerAd=_hasOverrideSetForScreenfulsPerAd;
@property(copy, nonatomic) NSString *forceShowWidgetTypeString; // @synthesize forceShowWidgetTypeString=_forceShowWidgetTypeString;
@property(nonatomic) _Bool widgetShouldAlwaysBeInserted; // @synthesize widgetShouldAlwaysBeInserted=_widgetShouldAlwaysBeInserted;
@property(nonatomic) long long forceShowWidgetOnceToken; // @synthesize forceShowWidgetOnceToken=_forceShowWidgetOnceToken;
@property(nonatomic) long long widgetShouldAlwaysBeInsertedOnceToken; // @synthesize widgetShouldAlwaysBeInsertedOnceToken=_widgetShouldAlwaysBeInsertedOnceToken;
@property(nonatomic) long long nextWidgetOnceToken; // @synthesize nextWidgetOnceToken=_nextWidgetOnceToken;
@property(retain, nonatomic) NSDate *dateOfLastNativeAd; // @synthesize dateOfLastNativeAd=_dateOfLastNativeAd;
@property(retain, nonatomic) NSDate *dateOfLastWidget; // @synthesize dateOfLastWidget=_dateOfLastWidget;
@property(retain, nonatomic) NSMutableDictionary *datesSinceWidgetAppearance; // @synthesize datesSinceWidgetAppearance=_datesSinceWidgetAppearance;
@property(retain, nonatomic) NSMutableDictionary *datesSinceLastWidgetInsertedIntoTag; // @synthesize datesSinceLastWidgetInsertedIntoTag=_datesSinceLastWidgetInsertedIntoTag;
@property(nonatomic) long long numberOfScreenfulsPerAd; // @synthesize numberOfScreenfulsPerAd=_numberOfScreenfulsPerAd;
- (void).cxx_destruct;
- (_Bool)allowNativeAdForFeed:(id)arg1;
- (id)forceShowWidgetString;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

