//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

@interface PRLikenessCache : NSObject
{
    NSCache *_inMemoryCache;
    NSObject<OS_dispatch_queue> *_cacheLookupQueue;
    _Bool _useMemory;
    _Bool _useFilesystem;
    _Bool _renderIfNeeded;
    NSURL *_cacheDirectory;
}

+ (id)_propertyValueForURL:(id)arg1 forKey:(id)arg2;
+ (_Bool)_purgeOldCacheFilesInDirectory:(id)arg1;
+ (_Bool)_removeImageAtURL:(id)arg1;
+ (_Bool)_writeImage:(id)arg1 toURL:(id)arg2;
+ (id)_imageAtURL:(id)arg1;
+ (_Bool)_ensureExistenceOfDirectory:(id)arg1;
+ (id)_staticRepresentationCacheURL;
+ (id)_applicationCacheDirectory;
+ (id)sharedInstance;
@property(nonatomic) _Bool renderIfNeeded; // @synthesize renderIfNeeded=_renderIfNeeded;
@property(nonatomic) _Bool useFilesystem; // @synthesize useFilesystem=_useFilesystem;
@property(nonatomic) _Bool useMemory; // @synthesize useMemory=_useMemory;
@property(retain, nonatomic) NSURL *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
- (void).cxx_destruct;
- (void)_fetchWithReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_renderImageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchFromFilesystem:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchFromMemory:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_cacheURLForLikeness:(id)arg1 context:(id)arg2;
- (id)_cacheKeyForLikeness:(id)arg1 context:(id)arg2;
- (id)init;

@end

