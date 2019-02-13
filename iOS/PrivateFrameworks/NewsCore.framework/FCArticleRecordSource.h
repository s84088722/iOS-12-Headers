//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource
{
    NSArray *_nonLocalizableKeys;
    NSArray *_localizableKeys;
}

+ (id)canaryRecordName;
+ (_Bool)supportsDeletions;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)identifierFromCKRecord:(id)arg1;
+ (_Bool)useTaggedImages;
- (id)localizableKeys;
- (id)nonLocalizableKeys;
- (void).cxx_destruct;
- (id)saveFeedItemAndArticleRecords:(id)arg1;
- (id)saveArticleRecords:(id)arg1;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;
- (id)recordIDPrefix;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)storeFilename;
- (id)localizableExperimentalizableKeys;
- (id)experimentalizableKeys;
- (int)pbRecordType;
- (id)recordType;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;

@end

