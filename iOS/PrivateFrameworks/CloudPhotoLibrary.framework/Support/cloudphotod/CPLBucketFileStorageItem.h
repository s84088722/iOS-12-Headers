//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFileStorageItem.h>

@class NSURL;

@interface CPLBucketFileStorageItem : CPLFileStorageItem
{
    NSURL *_url;
    _Bool _attributesAreCached;
    _Bool _cachedOriginal;
    _Bool _cachedMarkedForDelete;
}

- (void).cxx_destruct;
- (_Bool)isMarkedForDelete;
- (_Bool)isOriginal;
- (void)_cacheAttributes;
- (id)initWithIdentity:(id)arg1 url:(id)arg2;

@end

