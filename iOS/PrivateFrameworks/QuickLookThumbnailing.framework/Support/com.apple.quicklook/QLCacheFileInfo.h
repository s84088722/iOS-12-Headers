//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLCacheVersionedFileIdentifier;

@interface QLCacheFileInfo : NSObject
{
    float _minSize;
    float _maxSize;
    unsigned long long _cacheId;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
    unsigned long long _thumbnailCount;
    unsigned long long _totalDataLength;
}

@property(readonly, nonatomic) unsigned long long totalDataLength; // @synthesize totalDataLength=_totalDataLength;
@property(readonly, nonatomic) float maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) float minSize; // @synthesize minSize=_minSize;
@property(readonly, nonatomic) unsigned long long thumbnailCount; // @synthesize thumbnailCount=_thumbnailCount;
@property(readonly, nonatomic) QLCacheVersionedFileIdentifier *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly, nonatomic) unsigned long long cacheId; // @synthesize cacheId=_cacheId;
- (void).cxx_destruct;
- (id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2;
- (id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2 thumbnailCount:(unsigned long long)arg3 minSize:(float)arg4 maxSize:(float)arg5 totalDataLength:(unsigned long long)arg6;

@end

