//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;
@protocol OS_os_log;

@interface HDTTRPromptController : NSObject
{
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    int _isPresenting;
    _Bool _canRepromptOnSameBuild;
    NSString *_name;
    double _minimumPromptInterval;
    long long _maximumErrorCount;
    NSString *_notificationTitle;
    NSString *_notificationMessage;
    NSString *_radarTitle;
    NSString *_radarDescription;
    CDUnknownBlockType _unitTest_willPresentTTRAlertHandler;
}

+ (id)_persistedValueKeys;
+ (id)formattedPersistedValuesForDomainName:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)nameForDomainName:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType unitTest_willPresentTTRAlertHandler; // @synthesize unitTest_willPresentTTRAlertHandler=_unitTest_willPresentTTRAlertHandler;
@property(copy, nonatomic) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(copy, nonatomic) NSString *radarTitle; // @synthesize radarTitle=_radarTitle;
@property(copy, nonatomic) NSString *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(copy, nonatomic) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property(nonatomic) _Bool canRepromptOnSameBuild; // @synthesize canRepromptOnSameBuild=_canRepromptOnSameBuild;
@property(nonatomic) long long maximumErrorCount; // @synthesize maximumErrorCount=_maximumErrorCount;
@property(nonatomic) double minimumPromptInterval; // @synthesize minimumPromptInterval=_minimumPromptInterval;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)unitTest_setLastPromptBuild:(id)arg1 error:(id *)arg2;
- (_Bool)unitTest_setLastPromptDate:(id)arg1 error:(id *)arg2;
- (id)_keyValueDomain;
- (id)_errorUserInfoKeyReason;
- (id)_errorUserInfoKeyErrorDate;
- (void)_presentTTRPromptForErrors:(id)arg1 lastPromptBuild:(id)arg2 lastPromptDate:(id)arg3 currentBuild:(id)arg4;
- (void)promptIfRequiredForReason:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (id)description;
- (id)init;
- (id)initWithProfile:(id)arg1 domainName:(id)arg2 loggingCategory:(id)arg3;

@end

