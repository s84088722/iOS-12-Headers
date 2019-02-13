//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKitUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary;

@protocol WLKUISettingsInterface <JSExport>
- (NSArray *)deniedBrands;
- (NSArray *)consentedBrands;
- (NSDictionary *)settings;
- (void)forceUpdateWithCallback:(JSValue *)arg1;
- (_Bool)sportsScoreSpoilersAllowed;
- (_Bool)privateModeEnabled;
- (unsigned long long)privacyFlowContentVersion;
@end

