//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface _CPLCloudKitDownloadGroup : NSObject
{
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_resourceSizes;
    NSMutableDictionary *_downloadedSizes;
    NSMutableSet *_sourceBundleIdentifiers;
    _Bool _mainBundleIdentifierIsDefault;
    unsigned long long _downloadSize;
    unsigned long long _maxDownloadSize;
    _Bool _highPriority;
    unsigned long long _resourceType;
    NSString *_mainSourceBundleIdentifier;
}

@property(readonly, nonatomic) NSString *mainSourceBundleIdentifier; // @synthesize mainSourceBundleIdentifier=_mainSourceBundleIdentifier;
@property(readonly, nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *resourceTypeDescription;
- (id)propertyKeys;
- (id)cloudResourceForRecordWithScopedIdentifier:(id)arg1;
- (void)enumerateRecordScopedIdentifiersAndTasksWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *recordScopedIdentifiers;
@property(readonly, nonatomic) _Bool shouldBoostPriority;
@property(readonly, nonatomic) double downloadProgress;
@property(readonly, nonatomic) NSArray *allSourceBundleIdentifiers;
@property(readonly, nonatomic) unsigned long long countOfDownloadTasks;
@property(readonly, nonatomic) _Bool hasDownloadTasks;
- (_Bool)cancelDownloadTask:(id)arg1;
- (void)allDownloadsDidFailWithError:(id)arg1;
- (void)resourceWithRecordScopedIdentifier:(id)arg1 didFailToDownloadWithError:(id)arg2;
- (void)resourceWithRecordScopedIdentifier:(id)arg1 didDownloadCKAsset:(id)arg2 withFingerPrint:(id)arg3;
- (void)resourceWithRecordScopedIdentifier:(id)arg1 didProgress:(double)arg2;
- (void)resourceWithRecordScopedIdentifierDidStart:(id)arg1 operationID:(id)arg2;
- (void)allDownloadsDidStartWithOperationID:(id)arg1;
- (_Bool)addDownloadTask:(id)arg1;
- (id)initWithResourceType:(unsigned long long)arg1;

@end

