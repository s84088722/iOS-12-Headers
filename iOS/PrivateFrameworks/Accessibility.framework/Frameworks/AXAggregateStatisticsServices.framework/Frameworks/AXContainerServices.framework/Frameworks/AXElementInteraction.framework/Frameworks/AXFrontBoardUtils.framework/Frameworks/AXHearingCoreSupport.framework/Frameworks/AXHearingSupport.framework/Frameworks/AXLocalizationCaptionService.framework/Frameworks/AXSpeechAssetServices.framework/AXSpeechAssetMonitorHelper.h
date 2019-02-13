//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSpeechAssetMonitorHelper : NSObject
{
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability *_reachability;
}

+ (id)sharedInstance;
- (void)clearCurrentVoicesAndRefreshTTSVoiceList;
- (void)_checkForAssetUpdatesNowAndNextWeek;
- (void)_monitorSpeechAssetChanges;
- (void)updateAvailableSpeechAssets;
- (void)_clientUpdateAvailableSpeechAssets;
- (void)_monitorForNetworkChanges;
- (void)_unregisterForReachabilityNotifications;
- (void)_registerForReachabilityNotifications;
- (_Bool)_areMobileAssetsPresent;
- (void)_checkClientForUpdates:(_Bool)arg1;
- (id)_speechAssetUpdaterClient;
- (id)speechAssetUpdaterClient;
- (id)init;

@end

