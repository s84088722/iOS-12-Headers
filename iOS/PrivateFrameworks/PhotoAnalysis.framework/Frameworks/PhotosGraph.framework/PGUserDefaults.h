//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGUserDefaults : NSObject
{
}

+ (_Bool)isPublicEventsEnabled;
+ (_Bool)boundTextFeaturesPerEvent;
+ (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
+ (_Bool)enableIdentifyingProperties;
+ (_Bool)enablePropertyLoadManagement;
+ (double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+ (unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+ (_Bool)isMemoriesLivingOnFeedbackEnabled;
+ (_Bool)isMemoriesNotificationDisabled;
+ (unsigned long long)minimumNumberOfCuratedAssetsForInterestingMoments;
+ (unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+ (_Bool)isAlwaysShowingHolidayCalendarEvents;
+ (_Bool)isShowingHolidayCalendarEvents;
+ (void)_registerDefaults;
+ (void)initialize;

@end

