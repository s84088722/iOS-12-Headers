//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/PUReviewDataSourceChangeObserver-Protocol.h>

@class NSString, PUReviewDataSource;
@protocol PUDisplayAssetCollection, PUReviewAssetsDataSourceManagerDelegate;

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager <PUReviewDataSourceChangeObserver>
{
    id <PUReviewAssetsDataSourceManagerDelegate> _reviewDelegate;
    PUReviewDataSource *__reviewDataSource;
    id <PUDisplayAssetCollection> __containingAssetCollection;
}

@property(readonly, nonatomic) id <PUDisplayAssetCollection> _containingAssetCollection; // @synthesize _containingAssetCollection=__containingAssetCollection;
@property(readonly, nonatomic) PUReviewDataSource *_reviewDataSource; // @synthesize _reviewDataSource=__reviewDataSource;
@property(nonatomic) __weak id <PUReviewAssetsDataSourceManagerDelegate> reviewDelegate; // @synthesize reviewDelegate=_reviewDelegate;
- (void).cxx_destruct;
- (void)reviewDataSourceDidChange:(id)arg1 changeDetails:(id)arg2;
- (void)_updateWithReviewDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)dealloc;
- (id)initWithReviewDataSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

