//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PDFKit/PDFDocumentPageChangeDelegate-Protocol.h>
#import <PDFKit/PDFPageBackgroundManagerDelegate-Protocol.h>

@class NSString, PDFDocumentViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFDocumentView : UIView <PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate>
{
    PDFDocumentViewPrivate *_private;
}

- (void).cxx_destruct;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int *)arg2;
- (void)didRotatePageNotification:(id)arg1;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)arg1;
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)arg1;
- (void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;
- (void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_createPageView:(id)arg1;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (void)willForceUpdate;
- (void)previewRotateShiftPages:(double)arg1;
- (void)setSelection:(id)arg1;
- (void)updateVisibility;
- (struct CGSize)documentViewSize;
- (void)layoutDocumentView;
- (id)pageViews;
- (void)removePageViewForPageAtIndex:(unsigned long long)arg1;
- (id)createPageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

