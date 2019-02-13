//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGDPluginManager : NSObject
{
    NSDictionary *_plugins;
}

+ (void)_processHistoricalDataRequestsForPluginIdentifier:(id)arg1 result:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processSearchableItem:(id)arg1 userAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processUserAction:(id)arg1 searchableItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processSearchableItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)setPlugins:(id)arg1;

@end

