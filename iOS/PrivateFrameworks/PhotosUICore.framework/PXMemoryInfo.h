//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString, PHAsset, PHAssetCollection, PHFetchResult;

@interface PXMemoryInfo : NSObject <NSCopying>
{
    NSString *_localizedDateText;
    NSString *_localizedTitle;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_keyAssetFetchResult;
}

+ (id)memoryInfoWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2;
+ (id)memoryInfoWithMemory:(id)arg1;
+ (id)fastMemoryInfoWithMemory:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // @synthesize keyAssetFetchResult=_keyAssetFetchResult;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSString *localizedDateText; // @synthesize localizedDateText=_localizedDateText;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) PHAsset *primaryAsset;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) unsigned long long category;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg1;

@end

