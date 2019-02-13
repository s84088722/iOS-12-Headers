//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <OpusFoundation/OFUIWindowDraggingAutoscroll-Protocol.h>
#import <OpusFoundation/OFUIWindowDraggingDestination-Protocol.h>

@class NSIndexPath, NSMutableArray, NSString;
@protocol OFUICollectionFlowViewDragging;

@interface OFUICollectionFlowView : UICollectionView <OFUIWindowDraggingDestination, OFUIWindowDraggingAutoscroll>
{
    id <OFUICollectionFlowViewDragging> _draggingDelegate;
    NSMutableArray *_draggingPasteboardTypes;
    _Bool _isDragging;
    _Bool _isAnimating;
    NSIndexPath *_draggingSelectionIndexPath;
    NSIndexPath *_draggingEmptyIndexPath;
    float _mergeRectInset;
}

@property(nonatomic) float mergeRectInset; // @synthesize mergeRectInset=_mergeRectInset;
@property(retain, nonatomic) NSIndexPath *draggingEmptyIndexPath; // @synthesize draggingEmptyIndexPath=_draggingEmptyIndexPath;
@property(retain, nonatomic) NSIndexPath *draggingSelectionIndexPath; // @synthesize draggingSelectionIndexPath=_draggingSelectionIndexPath;
- (_Bool)canAutoscroll;
- (void)autoscroll:(float)arg1;
- (float)autoscrollDistance:(struct CGRect)arg1;
- (float)_autoscrollDistanceForProximityToEdge:(float)arg1;
- (void)draggingDestinationEnded:(id)arg1 cancelled:(_Bool)arg2;
- (void)draggingDestinationWillEnd:(id)arg1 cancelled:(_Bool)arg2;
- (void)concludeDragOperation:(id)arg1;
- (struct CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2;
- (_Bool)_isFrameEntirelyVisible:(struct CGRect)arg1;
- (_Bool)isFrameVisible:(struct CGRect)arg1;
- (_Bool)performDragOperation:(id)arg1;
- (_Bool)prepareForDragOperation:(id)arg1;
- (void)draggingDestinationExited:(id)arg1;
- (unsigned long long)draggingDestinationUpdated:(id)arg1;
- (unsigned long long)draggingDestinationEntered:(id)arg1;
- (void)_cleanupDragging:(id)arg1;
- (void)_prepareDragging:(id)arg1;
- (void)setDraggingEmptyIndexPath:(id)arg1 session:(id)arg2;
- (id)draggingPasteboardTypes;
- (void)unregisterAllDraggingPasteboardType;
- (void)registerDraggingPasteboardType:(id)arg1;
@property(nonatomic) id <OFUICollectionFlowViewDragging> draggingDelegate; // @synthesize draggingDelegate=_draggingDelegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewFlowLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

