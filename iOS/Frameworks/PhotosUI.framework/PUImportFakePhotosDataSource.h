//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotosDataSource.h>

@class PUImportAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUImportFakePhotosDataSource : PXPhotosDataSource
{
    PUImportAssetsDataSource *_importDataSource;
}

@property(retain, nonatomic) PUImportAssetsDataSource *importDataSource; // @synthesize importDataSource=_importDataSource;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(_Bool)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithImportDataSource:(id)arg1;

@end

