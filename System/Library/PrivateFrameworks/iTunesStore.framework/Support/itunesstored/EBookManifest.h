//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EBookManifest : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_manifest;
    NSString *_manifestPath;
}

+ (id)syncedBookManifest;
+ (id)sharedPurchasedBookManifest;
+ (id)purchasedBookManifest;
- (id)_manifest;
- (void)_invalidateAfterExternalChange;
- (id)_entries;
- (void)synchronizeData;
- (void)removeManifestEntryWithDownloadPermalink:(id)arg1;
- (void)removeManifestEntryWithStoreItemID:(id)arg1;
@property(readonly) NSString *manifestPath;
- (id)manifestEntriesWithProperty:(id)arg1 equalToValue:(id)arg2 limitCount:(long long)arg3;
- (id)bookPathForAdamID:(id)arg1 withPublicationVersion:(id)arg2;
- (id)bookPathPermalink:(id)arg1;
- (void)addManifestEntries:(id)arg1;
- (void)addManifestEntry:(id)arg1;
- (void)dealloc;
- (id)initWithManifestPath:(id)arg1;
- (id)init;

@end
