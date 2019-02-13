//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CacheManagementAsset : NSObject
{
    int _priority;
    unsigned int _assetVersion;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_relativePath;
    NSString *_contentType;
    NSData *_metadata;
    double _expiration_date;
    double _consumed_date;
    double _download_start_date;
    double _download_completion_date;
    double _last_viewed_date;
    NSString *_absolutePath;
}

+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2;
+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2 createIfAbsent:(_Bool)arg3;
+ (id)assetFromFile:(id)arg1 withIdentifier:(id)arg2;
+ (id)assetFromData:(id)arg1;
+ (id)assetWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;
@property(retain) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property double last_viewed_date; // @synthesize last_viewed_date=_last_viewed_date;
@property double download_completion_date; // @synthesize download_completion_date=_download_completion_date;
@property double download_start_date; // @synthesize download_start_date=_download_start_date;
@property double consumed_date; // @synthesize consumed_date=_consumed_date;
@property double expiration_date; // @synthesize expiration_date=_expiration_date;
@property(readonly) unsigned int assetVersion; // @synthesize assetVersion=_assetVersion;
@property int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (long long)sizeCached:(_Bool)arg1;
- (long long)size;
- (int)purgeabilityScoreAtUrgency:(int)arg1;
- (void)commit;
- (id)fullPath;
@property(retain, nonatomic) NSData *thumbnailData;
- (id)lastViewedDate;
- (void)setLastViewedDate:(id)arg1;
- (id)downloadCompletionDate;
- (void)setDownloadCompletionDate:(id)arg1;
- (id)downloadStartDate;
- (void)setDownloadStartDate:(id)arg1;
- (id)consumedDate;
- (void)setConsumedDate:(id)arg1;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_1285e12c *)createFlattenedAsset:(long long *)arg1;
- (id)initWithFlattenedAsset:(CDStruct_1285e12c *)arg1;
- (id)initWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;

@end

