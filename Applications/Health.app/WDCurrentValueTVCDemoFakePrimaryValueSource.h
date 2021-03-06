//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WDDashboardCellPrimaryValueSource-Protocol.h"

@class HKDisplayCategory, HKDisplayType, NSDate, NSString;
@protocol WDDashboardCellPrimaryValueSourceDelegate;

@interface WDCurrentValueTVCDemoFakePrimaryValueSource : NSObject <WDDashboardCellPrimaryValueSource>
{
    id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;
    NSDate *lastUpdated;
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    NSString *_mostRecentValueText;
    NSString *_mostRecentUnitText;
    NSString *_primaryValueContextualText;
    unsigned long long _marginMode;
}

@property(nonatomic) unsigned long long marginMode; // @synthesize marginMode=_marginMode;
@property(retain, nonatomic) NSString *primaryValueContextualText; // @synthesize primaryValueContextualText=_primaryValueContextualText;
@property(retain, nonatomic) NSString *mostRecentUnitText; // @synthesize mostRecentUnitText=_mostRecentUnitText;
@property(retain, nonatomic) NSString *mostRecentValueText; // @synthesize mostRecentValueText=_mostRecentValueText;
@property(retain, nonatomic) HKDisplayCategory *displayCategory; // @synthesize displayCategory=_displayCategory;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated;
@property(nonatomic) __weak id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate; // @synthesize primaryValueSourceDelegate;
- (void).cxx_destruct;
- (id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;

@end

