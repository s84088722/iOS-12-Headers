//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsTilingLayout : PXEngineDrivenAssetsTilingLayout
{
    PXPhotosDetailsAssetsSpec *_spec;
    long long _placeholderMode;
}

@property(nonatomic) long long placeholderMode; // @synthesize placeholderMode=_placeholderMode;
@property(retain, nonatomic) PXPhotosDetailsAssetsSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (struct CGRect)_placeholderFrame;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (struct UIEdgeInsets)contentInset;
- (void)prepareLayout;

@end

