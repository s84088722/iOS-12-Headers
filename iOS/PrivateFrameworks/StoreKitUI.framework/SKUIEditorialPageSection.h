//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIColorScheme, SKUIEditorialComponent, SKUIEditorialLayout, SKUIViewElementLayoutContext;

@interface SKUIEditorialPageSection : SKUIStorePageSection
{
    SKUIColorScheme *_colorScheme;
    SKUIEditorialLayout *_editorialLayout;
    _Bool _hasValidColorScheme;
    _Bool _isExpanded;
    SKUIViewElementLayoutContext *_layoutContext;
}

- (void).cxx_destruct;
- (id)_editorialLayout;
- (id)_colorScheme;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIEditorialComponent *pageComponent; // @dynamic pageComponent;

@end

