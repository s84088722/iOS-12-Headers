//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUUtility : NSObject
{
}

+ (id)systemContainerURL;
+ (id)prettyPrintDate:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(long long)arg2;
+ (id)gregorianCalendar;
+ (id)URLIfFileExists:(id)arg1;
+ (void)setCacheable:(_Bool)arg1;
+ (void)purgeV1SUAssets;
+ (unsigned long long)devicePadding:(id)arg1;
+ (_Bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(_Bool)arg3 disableCDLevelFour:(_Bool)arg4 disableSiriDeletion:(_Bool)arg5 disableAppDemotion:(_Bool)arg6;
+ (_Bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(_Bool)arg3;
+ (_Bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2;
+ (_Bool)appDemotionIsEnabled;
+ (void)enableAppDemotion:(_Bool)arg1;
+ (long long)demoteApps:(unsigned long long)arg1 withError:(id *)arg2;
+ (long long)cacheDelete:(id)arg1;
+ (unsigned long long)totalPurgeableSpace:(id)arg1;
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3 isAutoDownload:(_Bool)arg4 disableCDLevelFour:(_Bool)arg5 disableCDLevelThree:(_Bool)arg6 disableSiriDeletion:(_Bool)arg7 disableAppDemotion:(_Bool)arg8;
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3 isAutoDownload:(_Bool)arg4 includePurging:(_Bool)arg5;
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3 isAutoDownload:(_Bool)arg4;
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long *)arg3;
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2;
+ (long long)appDemoteableSpace;
+ (void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4;
+ (void)postAutoUpdateInformationalNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (long long)translateErrorCodeFromError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (id)translateError:(id)arg1;
+ (void)assignError:(id *)arg1 withError:(id)arg2 translate:(_Bool)arg3;
+ (void)assignError:(id *)arg1 withCode:(long long)arg2;
+ (id)errorWithCode:(long long)arg1 originalError:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (_Bool)alarmSetBeforeDate:(id)arg1;
+ (id)currentReleaseType;
+ (id)currentProductBuild;
+ (id)currentProductVersion;
+ (id)currentProductType;
+ (id)currentProductCategory;
+ (id)serialNumber;
+ (_Bool)cellularDataIsEnabled;
+ (_Bool)hasCellularRadio;
+ (_Bool)isCellularDataCapable;
+ (_Bool)isWiFiCapable;
+ (_Bool)isDaemon;
+ (void)setIsDaemon:(_Bool)arg1;
+ (id)taskQueue;

@end
