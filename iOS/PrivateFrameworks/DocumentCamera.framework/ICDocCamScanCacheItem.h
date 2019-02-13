//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDocCamImageCache, NSArray;

@interface ICDocCamScanCacheItem : NSObject
{
    ICDocCamImageCache *_imageCache;
    NSArray *_docInfos;
}

@property(retain, nonatomic) NSArray *docInfos; // @synthesize docInfos=_docInfos;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)doneBuildingCache;
- (void)deleteCacheImages;
- (id)imageForScanDataDelegateIdentifier:(id)arg1;
- (id)docInfoForScanDataDelegate:(id)arg1;
- (id)initWithImageCache:(id)arg1 docInfos:(id)arg2;
- (id)init;

@end

