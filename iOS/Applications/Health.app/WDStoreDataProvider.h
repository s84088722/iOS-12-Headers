//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, _HKMobileAssetDownloadManager;

@interface WDStoreDataProvider : NSObject
{
    NSMutableDictionary *_storeDataByType;
    _HKMobileAssetDownloadManager *_downloadManager;
    NSMutableDictionary *_isRequestingAppsForType;
    NSDictionary *_adamIdsByType;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *adamIdsByType; // @synthesize adamIdsByType=_adamIdsByType;
- (void).cxx_destruct;
- (void)_storeDataForIdentifier:(id)arg1 onLoadingCompletion:(CDUnknownBlockType)arg2;
- (void)storeDataForHKDisplayCategory:(id)arg1 onLoadingCompletion:(CDUnknownBlockType)arg2;
- (void)storeDataForHKDisplayType:(id)arg1 onLoadingCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_hasLocalStoreDataForIdentifier:(id)arg1;
- (_Bool)hasLocalStoreDataForHKDisplayCategory:(id)arg1;
- (_Bool)hasLocalStoreDataForHKDisplayType:(id)arg1;
- (void)_downloadStoreDataForIdentifierIfNecessary:(id)arg1;
- (void)downloadStoreDataForHKCategoryIfNecessary:(id)arg1;
- (void)downloadStoreDataForHKDisplayTypeIfNecessary:(id)arg1;
- (id)typeIdentifierForHKDisplayType:(id)arg1;
- (void)_loadAppsInfoFromStoreForIdentifier:(id)arg1 onLoadingCompletion:(CDUnknownBlockType)arg2;
- (id)_matchOrderOfStoreResults:(id)arg1 withAdamIDList:(id)arg2;
- (id)_predicateForAppsInHealthAssetForCurrentLocale;
- (void)_downloadAssetsForCurrentLocale;
- (void)_localeChanged:(id)arg1;
- (id)typeIdentifierForHKDisplayCategory:(id)arg1;
- (id)_typeIdentifierForHKDisplayCategoryIdentifier:(long long)arg1;
- (void)purgeOldAppsInHealthAssets;
- (id)init;

@end

