//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIPDFPageView, UIPDFSelection;

@protocol UIPDFSelectionWidget
@property(nonatomic) UIPDFPageView *pageView;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (struct CGRect)selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint)arg1;
- (void)layout;
- (struct CGPoint)viewOffset;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;
- (void)hide;
- (void)remove;
- (void)setSelection:(UIPDFSelection *)arg1;
@end

