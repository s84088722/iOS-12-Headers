//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/WLKInstallable-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, WLKArtworkVariantListing;

@interface WLKChannelDetails : NSObject <WLKInstallable>
{
    _Bool _subscribed;
    _Bool _itunes;
    _Bool _firstParty;
    _Bool _watchListEnabled;
    _Bool _requiresSubscriptionForConsent;
    _Bool _requiresAccountLevelConsent;
    _Bool _shouldPromptForConsentOnSubscriptionChange;
    _Bool _shouldTrackPlayActivity;
    _Bool _shouldIncludeInConsent;
    _Bool _appInstalled;
    NSString *_channelID;
    NSString *_name;
    NSArray *_appAdamIDs;
    NSArray *_appBundleIDs;
    NSString *_appName;
    NSURL *_appStoreURL;
    WLKArtworkVariantListing *_images;
    NSDictionary *_rateLimit;
}

@property(readonly, nonatomic, getter=isAppInstalled) _Bool appInstalled; // @synthesize appInstalled=_appInstalled;
@property(readonly, nonatomic) _Bool shouldIncludeInConsent; // @synthesize shouldIncludeInConsent=_shouldIncludeInConsent;
@property(readonly, nonatomic) _Bool shouldTrackPlayActivity; // @synthesize shouldTrackPlayActivity=_shouldTrackPlayActivity;
@property(readonly, nonatomic) NSDictionary *rateLimit; // @synthesize rateLimit=_rateLimit;
@property(readonly, nonatomic) _Bool shouldPromptForConsentOnSubscriptionChange; // @synthesize shouldPromptForConsentOnSubscriptionChange=_shouldPromptForConsentOnSubscriptionChange;
@property(readonly, nonatomic) _Bool requiresAccountLevelConsent; // @synthesize requiresAccountLevelConsent=_requiresAccountLevelConsent;
@property(readonly, nonatomic) _Bool requiresSubscriptionForConsent; // @synthesize requiresSubscriptionForConsent=_requiresSubscriptionForConsent;
@property(readonly, nonatomic, getter=isWatchListEnabled) _Bool watchListEnabled; // @synthesize watchListEnabled=_watchListEnabled;
@property(readonly, nonatomic, getter=isFirstParty) _Bool firstParty; // @synthesize firstParty=_firstParty;
@property(readonly, nonatomic, getter=isiTunes) _Bool itunes; // @synthesize itunes=_itunes;
@property(readonly, nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, nonatomic) WLKArtworkVariantListing *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSURL *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSArray *appBundleIDs; // @synthesize appBundleIDs=_appBundleIDs;
@property(readonly, copy, nonatomic) NSArray *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)appIconURLForSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

