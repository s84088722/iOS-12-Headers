//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKAnalyticsLogger : NSObject
{
    _Bool _shouldSummarize;
    _Bool _logApplicationName;
    _Bool _recalculateWillLog;
    _Bool _cachedWillLogAnalytics;
    _Bool _requireExplicitFinish;
    _Bool _recalculateDomain;
    long long _samplingPercentage;
    NSString *_baseDomain;
    NSString *_cachedFullDomain;
    CDStruct_f6aba300 _miniOSVersion;
    CDStruct_f6aba300 _minOSXVersion;
}

+ (void)logDistributionValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logScalarValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logDistributionValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3 logApplicationName:(_Bool)arg4;
+ (void)logScalarValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 logApplicationName:(_Bool)arg4;
+ (id)loggerWithDomain:(id)arg1;
@property(nonatomic) _Bool recalculateDomain; // @synthesize recalculateDomain=_recalculateDomain;
@property(nonatomic) _Bool requireExplicitFinish; // @synthesize requireExplicitFinish=_requireExplicitFinish;
@property(nonatomic) _Bool cachedWillLogAnalytics; // @synthesize cachedWillLogAnalytics=_cachedWillLogAnalytics;
@property(nonatomic) _Bool recalculateWillLog; // @synthesize recalculateWillLog=_recalculateWillLog;
@property(copy, nonatomic) NSString *cachedFullDomain; // @synthesize cachedFullDomain=_cachedFullDomain;
@property(copy, nonatomic) NSString *baseDomain; // @synthesize baseDomain=_baseDomain;
@property(nonatomic) CDStruct_f6aba300 minOSXVersion; // @synthesize minOSXVersion=_minOSXVersion;
@property(nonatomic) CDStruct_f6aba300 miniOSVersion; // @synthesize miniOSVersion=_miniOSVersion;
@property(nonatomic) _Bool logApplicationName; // @synthesize logApplicationName=_logApplicationName;
@property(nonatomic) _Bool shouldSummarize; // @synthesize shouldSummarize=_shouldSummarize;
@property(nonatomic) long long samplingPercentage; // @synthesize samplingPercentage=_samplingPercentage;
- (void).cxx_destruct;
- (void)logScalarValueAddition:(long long)arg1 forKey:(id)arg2;
- (void)logDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)logScalarValue:(long long)arg1 forKey:(id)arg2;
- (void)finishMessage;
- (void)p_finishMessage;
- (void)startMessage;
- (void)p_startMessage;
- (void)p_logASLMessageWithDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithScalarValue:(long long)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithValueString:(char *)arg1 forKey:(id)arg2;
- (id)p_qualifiedStringForKey:(id)arg1;
@property(readonly, nonatomic) _Bool willLogAnalytics; // @dynamic willLogAnalytics;
@property(readonly, nonatomic) _Bool canLogAnalytics; // @dynamic canLogAnalytics;
@property(readonly, nonatomic) NSString *domain; // @dynamic domain;
- (id)initWithDomain:(id)arg1;
- (id)init;

@end

