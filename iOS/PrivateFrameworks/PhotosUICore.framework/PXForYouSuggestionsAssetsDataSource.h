//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSArray, NSString, PXForYouSuggestionAssetCollection;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource
{
    PXForYouSuggestionAssetCollection *_collection;
    NSArray *_assets;
    NSString *_collectionTitle;
}

+ (id)new;
@property(copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithDisplayAssets:(id)arg1 collectionTitle:(id)arg2;
- (id)init;

@end

