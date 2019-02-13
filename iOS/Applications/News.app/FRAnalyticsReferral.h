//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NTPBWidgetEngagement;

@interface FRAnalyticsReferral : NSObject <NSCopying>
{
    _Bool _appOpenedByUserActivity;
    NSString *_userActivityType;
    NSString *_creativeID;
    NSString *_campaignID;
    NSString *_campaignType;
    NSString *_referringApplication;
    NSString *_referringURL;
    NSString *_widgetModeGroupID;
    NTPBWidgetEngagement *_widgetEngagement;
    long long _appSessionStartMethod;
}

+ (id)analyticsReferralFrom:(id)arg1;
@property(nonatomic) long long appSessionStartMethod; // @synthesize appSessionStartMethod=_appSessionStartMethod;
@property(nonatomic) _Bool appOpenedByUserActivity; // @synthesize appOpenedByUserActivity=_appOpenedByUserActivity;
@property(copy, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(copy, nonatomic) NSString *widgetModeGroupID; // @synthesize widgetModeGroupID=_widgetModeGroupID;
@property(copy, nonatomic) NSString *referringURL; // @synthesize referringURL=_referringURL;
@property(copy, nonatomic) NSString *referringApplication; // @synthesize referringApplication=_referringApplication;
@property(copy, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
@property(copy, nonatomic) NSString *creativeID; // @synthesize creativeID=_creativeID;
@property(copy, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
- (void).cxx_destruct;
- (id)ts_analyticsReferral;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppSessionStartMethod:(long long)arg1;
- (id)initWithUserActivityType:(id)arg1 creativeID:(id)arg2 campaignID:(id)arg3 campaignType:(id)arg4 referringApplication:(id)arg5 referringURL:(id)arg6 appOpenedByUserActivity:(_Bool)arg7 widgetModeGroupID:(id)arg8 widgetEngagement:(id)arg9 appSessionStartMethod:(long long)arg10;

@end

