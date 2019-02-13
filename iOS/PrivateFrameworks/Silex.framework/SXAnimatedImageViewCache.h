//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, SXAnimatedImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SXAnimatedImageViewCacheDelegate;

@interface SXAnimatedImageViewCache : NSObject
{
    _Bool _cachingEnabled;
    id <SXAnimatedImageViewCacheDelegate> _delegate;
    SXAnimatedImage *_animatedImage;
    long long _singleImageByteSize;
    unsigned long long _lastRequestedIndex;
    NSObject<OS_dispatch_queue> *_decodingQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _numberOfCachedImages;
    NSMutableArray *_cachedImages;
    NSMutableIndexSet *_indicesToCache;
}

@property(readonly, nonatomic) NSMutableIndexSet *indicesToCache; // @synthesize indicesToCache=_indicesToCache;
@property(readonly, nonatomic) NSMutableArray *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(nonatomic) unsigned long long numberOfCachedImages; // @synthesize numberOfCachedImages=_numberOfCachedImages;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *decodingQueue; // @synthesize decodingQueue=_decodingQueue;
@property unsigned long long lastRequestedIndex; // @synthesize lastRequestedIndex=_lastRequestedIndex;
@property long long singleImageByteSize; // @synthesize singleImageByteSize=_singleImageByteSize;
@property _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) __weak SXAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(nonatomic) __weak id <SXAnimatedImageViewCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)decodeImageFromSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2;
- (void)checkCacheSize;
- (void)cacheNextImage;
- (void)prepareCache;
- (void)restoreCacheSize;
- (void)decreaseCacheSize;
@property(readonly, nonatomic) unsigned long long maxCacheSize;
- (void)prune;
- (id)imageForFrameIndex:(unsigned long long)arg1;
- (long long)cacheStatusForFrameIndex:(unsigned long long)arg1;
- (unsigned long long)nearestCachedFrameIndexForFrameIndex:(unsigned long long)arg1;
- (void)prepareImageForFrameIndex:(unsigned long long)arg1;
- (id)init;

@end

