//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface LSApplicationRestrictionsManager : NSObject
{
}

+ (id)activeRestrictionIdentifiers;
+ (id)sharedInstance;
@property(readonly, getter=isSystemAppDeletionEnabled) _Bool systemAppDeletionEnabled;
- (id)identifierForRemovedAppPrompt:(id)arg1;
@property(readonly, getter=isAdTrackingEnabled) _Bool adTrackingEnabled; // @dynamic adTrackingEnabled;
- (void)beginListeningForChanges;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3;
- (_Bool)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(_Bool)arg2;
- (_Bool)isAppExtensionRestricted:(id)arg1;
- (_Bool)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2;
- (_Bool)isApplicationRestricted:(id)arg1;
- (void)effectiveSettingsChanged;
- (_Bool)setApplication:(id)arg1 removed:(_Bool)arg2;
- (_Bool)isRatingAllowed:(id)arg1;
@property(readonly) NSSet *whitelistedBundleIDs;
@property(readonly) NSSet *blacklistedBundleIDs;
@property(readonly, getter=isWhitelistEnabled) _Bool whitelistEnabled;
@property(readonly, getter=isOpenInRestrictionInEffect) _Bool openInRestrictionInEffect;
@property(readonly) NSNumber *maximumRating;
@property(readonly) NSSet *restrictedBundleIDs;
- (_Bool)cleanRemovedSystemApplicationsList;

@end

