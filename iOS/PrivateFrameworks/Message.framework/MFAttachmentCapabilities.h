//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFAttachmentCapabilities : NSObject
{
}

+ (id)capabilitiesDictionary;
+ (_Bool)placeholdersAvailable;
+ (unsigned long long)currentPlaceholderThreshold;
+ (id)mailDropWhitelistedDownloadDomains;
+ (id)mailDropPreferences;
+ (double)mailDropExpiration;
+ (_Bool)mailDropAvailable;
+ (_Bool)mailDropAvailableForAccount:(id)arg1;
+ (_Bool)mailDropConfigured;
+ (unsigned long long)_mailDropLimit;
+ (unsigned long long)mailDropThreshold;
+ (_Bool)_isMailDropDevice;
+ (_Bool)_limitMailDropOverCellular;
+ (unsigned long long)currentUploadLimitForAccount:(id)arg1;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentDownloadLimit;
+ (unsigned long long)currentMessageLimit;

@end

