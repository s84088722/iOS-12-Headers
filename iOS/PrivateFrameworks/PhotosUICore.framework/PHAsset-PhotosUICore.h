//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

@interface PHAsset (PhotosUICore)
+ (id)px_orderedAssetsFromAssets:(id)arg1 sortDescriptors:(id)arg2;
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)px_fetchAssetsInArray:(id)arg1;
@property(readonly, nonatomic) long long px_currentVariationType;
- (id)px_singleLineMailingAddressIncludeZipCode:(_Bool)arg1;
- (id)px_mailingAddressIncludeZipCode:(_Bool)arg1;
- (id)px_postalAddressIncludeZipCode:(_Bool)arg1;
- (struct CGRect)faceAreaRect;
- (struct CGRect)originalFaceAreaRect;
@end

