//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsTilingLayout.h>

@class PXLayoutSnapshot;
@protocol PXEngineDrivenAssetsTilingLayoutDelegate;

@interface PXEngineDrivenAssetsTilingLayout : PXAssetsTilingLayout
{
    struct _needsUpdateFlags;
    struct {
        _Bool respondsToEngineDrivenLayoutReferenceSizeDidChange;
        _Bool respondsToEngineDrivenLayoutAspectRatioForItemAtIndexPath;
        _Bool respondsToEngineDrivenLayoutZPositionForItemAtIndexPath;
        _Bool respondsToEngineDrivenLayoutContentsRectForItemAtIndexPathForAspectRatio;
        _Bool respondsToEngineDrivenLayoutPlayButtonSizeForItemAtIndexPathForAspectRatio;
    } _delegateFlags;
    id <PXEngineDrivenAssetsTilingLayoutDelegate> _delegate;
    PXLayoutSnapshot *_layoutSnapshot;
    long long _contentMode;
}

@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) PXLayoutSnapshot *layoutSnapshot; // @synthesize layoutSnapshot=_layoutSnapshot;
@property(nonatomic) __weak id <PXEngineDrivenAssetsTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2;
- (double)_zPositionForItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (double)_aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct CGSize)playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 contentTileSize:(struct CGSize)arg2;
- (id)dataSource;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(struct PXSimpleIndexPath)arg3;
- (_Bool)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (struct CGRect)contentBounds;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forContentTileWithIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_commonInit;
- (id)initWithLayoutEngineSnapshot:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

