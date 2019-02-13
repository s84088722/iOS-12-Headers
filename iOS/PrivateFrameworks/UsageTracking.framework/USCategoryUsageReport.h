//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface USCategoryUsageReport : NSObject <NSSecureCoding>
{
    NSString *_categoryIdentifier;
    double _totalUsageTime;
    NSArray *_applicationUsage;
    NSArray *_webUsage;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSArray *webUsage; // @synthesize webUsage=_webUsage;
@property(readonly, copy) NSArray *applicationUsage; // @synthesize applicationUsage=_applicationUsage;
@property(readonly) double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *webUsageByDomain;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3;
- (id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsage:(id)arg4;

@end

