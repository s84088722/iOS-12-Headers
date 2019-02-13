//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TSWPLayout;
@protocol TSWPHeaderFooterProvider;

__attribute__((visibility("hidden")))
@interface TSWPPageLayout : TSDLayout
{
    TSWPLayout *_headerFooterLayouts[2][3];
    struct CGRect _headerFooterClipRects[2][3];
    struct CGRect _headerFooterBorderRects[2][3];
}

- (void).cxx_destruct;
- (void)i_clearHeaderFooterLayouts;
- (id)i_insertValidatedHeaderFooterLayouts;
- (_Bool)i_updateHeaderFooterLayouts;
- (struct CGRect)borderRectForHeaderFooter:(long long)arg1 atIndex:(long long)arg2;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (void)p_updateHeaderFooterClipAndBorderRects:(long long)arg1;
- (void)parentWillChangeTo:(id)arg1;
- (id)headerFooterLayout:(long long)arg1 atIndex:(long long)arg2;
- (struct CGRect)clipRectForHeaderFooter:(long long)arg1 atIndex:(long long)arg2;
- (_Bool)p_isHeaderFooter:(long long)arg1 editingAtFragmentIndex:(long long)arg2;
- (_Bool)isHeaderFooterLayout:(id)arg1;
- (_Bool)shouldHeaderFooterBeVisible:(long long)arg1;
@property(readonly, nonatomic) _Bool hasFooters;
@property(readonly, nonatomic) _Bool hasHeaders;
@property(readonly, nonatomic) _Bool allowsHeaderFooter;
@property(readonly, nonatomic) double footerHeight;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) _Bool headerFooterProviderValid;
@property(readonly, nonatomic) id <TSWPHeaderFooterProvider> headerFooterProvider;

@end

