//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXBasicTileUserData, PXCMMAssetStatusBadgeTileUserData;
@protocol PXCMMEngineDrivenLayoutDelegate;

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout
{
    PXBasicTileUserData *_placeholderTileUserData;
    _Bool _hasFloatingBanner;
    _Bool _hasFloatingSectionHeaders;
    _Bool _headerViewIsVisible;
    long long _layoutType;
    double _headerHeight;
    double _bannerHeight;
    double _statusFooterHeight;
    double _sendBackFooterHeight;
    long long _placeholderMode;
    double _headerTopInset;
    double _footerBottomInset;
    double _headerFooterSideInset;
    PXCMMAssetStatusBadgeTileUserData *__copiedUserData;
    PXCMMAssetStatusBadgeTileUserData *__failedUserData;
    struct UIEdgeInsets _reviewSafeAreaInsets;
}

+ (id)_additionalTileKinds;
@property(nonatomic) _Bool headerViewIsVisible; // @synthesize headerViewIsVisible=_headerViewIsVisible;
@property(readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_failedUserData; // @synthesize _failedUserData=__failedUserData;
@property(readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_copiedUserData; // @synthesize _copiedUserData=__copiedUserData;
@property(nonatomic) struct UIEdgeInsets reviewSafeAreaInsets; // @synthesize reviewSafeAreaInsets=_reviewSafeAreaInsets;
@property(nonatomic) double headerFooterSideInset; // @synthesize headerFooterSideInset=_headerFooterSideInset;
@property(nonatomic) double footerBottomInset; // @synthesize footerBottomInset=_footerBottomInset;
@property(nonatomic) double headerTopInset; // @synthesize headerTopInset=_headerTopInset;
@property(nonatomic) _Bool hasFloatingSectionHeaders; // @synthesize hasFloatingSectionHeaders=_hasFloatingSectionHeaders;
@property(nonatomic) _Bool hasFloatingBanner; // @synthesize hasFloatingBanner=_hasFloatingBanner;
@property(nonatomic) long long placeholderMode; // @synthesize placeholderMode=_placeholderMode;
@property(readonly, nonatomic) double sendBackFooterHeight; // @synthesize sendBackFooterHeight=_sendBackFooterHeight;
@property(readonly, nonatomic) double statusFooterHeight; // @synthesize statusFooterHeight=_statusFooterHeight;
@property(readonly, nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void).cxx_destruct;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(struct PXSimpleIndexPath)arg3;
- (_Bool)_getAdditionalTileIdentifierForEditorial:(out struct PXTileIdentifier *)arg1 group:(out unsigned long long *)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (_Bool)_getAdditionalTileIdentifierForGrid:(out struct PXTileIdentifier *)arg1 group:(out unsigned long long *)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (_Bool)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (double)zPositionOffsetForKind:(unsigned long long)arg1;
- (_Bool)_getAssetStatusTileIdentifier:(struct PXTileIdentifier *)arg1 outGeometry:(struct PXTileGeometry *)arg2 group:(unsigned long long *)arg3 userData:(id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getDuplicateTileIdentifier:(struct PXTileIdentifier *)arg1 outGeometry:(struct PXTileGeometry *)arg2 group:(unsigned long long *)arg3 userData:(id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const struct PXTileGeometry *)arg6 indexPath:(struct PXSimpleIndexPath)arg7;
- (struct CGSize)_preferredSelectionBadgeSize;
- (unsigned long long)_editorialGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (unsigned long long)_gridGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (unsigned long long)_generatorGeometryKindForTileKind:(unsigned long long)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (struct CGRect)_placeholderFrame;
- (struct CGSize)_placeholderSize;
- (struct CGRect)_sectionHeaderTileFrame;
- (struct PXTileIdentifier)_placeholderTileIdentifier;
- (struct PXTileIdentifier)_sendBackFooterTileIdentifier;
- (struct CGRect)_sendBackFooterFrame;
- (struct PXTileIdentifier)_statusFooterTileIdentifier;
- (struct CGRect)_statusFooterFrame;
- (struct PXTileIdentifier)_bannerTileIdentifier;
- (struct CGRect)_bannerFrame;
- (struct PXTileIdentifier)_headerTileIdentifier;
- (struct CGRect)_headerFrame;
- (struct PXTileIdentifier)_identifierForUniqueTileWithKind:(unsigned long long)arg1;
- (void)_invalidateAssetStatusBadgeTiles;
- (void)_invalidateSendBackFooter;
- (void)_invalidateStatusFooter;
- (void)_invalidateBanner;
- (void)_invalidateHeader;
- (void)_invalidateSectionHeaders;
- (void)updateAssetStatusBadgeTiles;
- (_Bool)sendBackBannerViewIsVisible:(struct UIEdgeInsets)arg1;
- (void)setVisibleOrigin:(struct CGPoint)arg1;
- (struct CGRect)contentBounds;
- (id)initWithLayoutEngineSnapshot:(id)arg1 configuration:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <PXCMMEngineDrivenLayoutDelegate> delegate; // @dynamic delegate;

@end

