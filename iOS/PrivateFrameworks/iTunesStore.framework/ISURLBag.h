//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISURLBagBackend, NSArray, NSDictionary, NSSet, NSString, SSNetworkConstraints, SSURLBagContext;

@interface ISURLBag : NSObject
{
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    ISURLBagBackend *_bagBackend;
    NSString *_bagBackendKey;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    _Bool _loadedFromDiskCache;
    NSString *_storeFrontIdentifier;
}

+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;
+ (_Bool)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;
+ (_Bool)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)_sharedBagBackend;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(nonatomic) _Bool loadedFromDiskCache; // @synthesize loadedFromDiskCache=_loadedFromDiskCache;
@property(nonatomic) double invalidationTime; // @synthesize invalidationTime=_invalidationTime;
- (void).cxx_destruct;
- (void)_writeURLResolutionCacheFile;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_setBagBackendWithDictionary:(id)arg1;
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;
- (id)_networkConstraintsCachePath;
- (id)_copyHeaderPatternsFromBagBackend;
- (id)_copyGUIDSchemesFromBagBackend;
- (id)_copyGUIDPatternsFromBagBackend;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) long long versionIdentifier;
@property(readonly, nonatomic) NSDictionary *URLBagDictionary;
@property(copy, nonatomic) SSURLBagContext *URLBagContext;
- (id)sanitizedURLForURL:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;
- (_Bool)urlIsTrusted:(id)arg1;
- (id)urlForKey:(id)arg1;
- (_Bool)shouldSendGUIDForURL:(id)arg1;
- (_Bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;
- (void)setInvalidationTimeWithExprationInterval:(double)arg1;
- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2;
- (id)networkConstraintsForDownloadKind:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly) NSSet *availableStorefrontItemKinds;
- (void)_toggleStopSendingLocalCookies;
- (_Bool)loadFromDictionary:(id)arg1 returningError:(id *)arg2;
- (id)copyExtraHeadersForURL:(id)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end

