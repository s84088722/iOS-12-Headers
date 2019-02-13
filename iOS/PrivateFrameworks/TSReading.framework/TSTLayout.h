//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPTextHostLayout.h>

#import <TSReading/TSKSearchTarget-Protocol.h>
#import <TSReading/TSWPColumnMetrics-Protocol.h>
#import <TSReading/TSWPLayoutParent-Protocol.h>
#import <TSReading/TSWPStorageObserver-Protocol.h>

@class NSString, TSTEditingState, TSTLayoutHint, TSTLayoutSpaceBundle, TSTMasterLayout, TSTTableInfo, TSTTableModel, TSWPLayout, TSWPPadding;

@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>
{
    TSTMasterLayout *mMasterLayout;
    TSTLayoutHint *mLayoutHint;
    struct CGRect mCanvasVisibleRect;
    struct CGRect mPreviousVisibleStrokeFrame;
    _Bool mProcessChangesFiltering;
    _Bool mTabsVisible;
    _Bool mTableNameVisibilityIsValid;
    _Bool mTableNameVisible;
    _Bool mNewCanvasRevealedHorizontally;
    _Bool mNewCanvasRevealedVertically;
    _Bool mLayoutDirectionIsLeftToRight;
    TSTLayoutSpaceBundle *mSpaceBundle;
    struct {
        double tableNameHeight;
        struct CGSize scaleToFitParent;
        struct CGSize scaleToFitEnclosingTextColumn;
    } mCached;
    struct CGRect mRenderingFrameForLayoutGeometryFromInfo;
    TSWPLayout *mContainedTextEditingLayout;
    struct UIEdgeInsets mCachedPaddingForEditingCell;
    struct CGRect mComputedEditingCellContentFrame;
    unsigned int mCachedVerticalAlignmentForEditingCell;
    struct CGSize mTableSizeWithoutStrokes;
    struct CGSize mStrokeDelta;
    struct CGSize mCapturedStrokeFrameSizeForInline;
    CDStruct_5f1f7aa9 mEditingSpillingTextRange;
    unsigned int mContainedTextEditorParagraphAlignment;
    _Bool mContainedTextEditorTextWraps;
    _Bool mContainedTextEditorSpills;
    struct CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
}

@property(nonatomic) _Bool processChangesFiltering; // @synthesize processChangesFiltering=mProcessChangesFiltering;
@property(retain, nonatomic) TSTLayoutHint *layoutHint; // @synthesize layoutHint=mLayoutHint;
@property(retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=mMasterLayout;
@property(readonly, nonatomic) _Bool layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(readonly, nonatomic) CDStruct_5f1f7aa9 editingSpillingTextRange; // @synthesize editingSpillingTextRange=mEditingSpillingTextRange;
@property(retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // @synthesize spaceBundle=mSpaceBundle;
@property(readonly, nonatomic) struct UIEdgeInsets paddingForEditingCell; // @synthesize paddingForEditingCell=mCachedPaddingForEditingCell;
@property(retain, nonatomic) TSWPLayout *containedTextEditingLayout; // @synthesize containedTextEditingLayout=mContainedTextEditingLayout;
@property(nonatomic) _Bool newCanvasRevealedVertically; // @synthesize newCanvasRevealedVertically=mNewCanvasRevealedVertically;
@property(nonatomic) _Bool newCanvasRevealedHorizontally; // @synthesize newCanvasRevealedHorizontally=mNewCanvasRevealedHorizontally;
- (_Bool)p_getLayoutDirectionLeftToRight;
- (unsigned int)p_defaultAlignmentForTableWritingDirection;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (int)reapCoordinatesChangedMaskForChrome;
- (void)processChanges:(id)arg1;
- (void)p_processChangeActions:(id)arg1;
- (void)p_processChange:(id)arg1 forChangeSource:(id)arg2 actions:(id)arg3;
- (struct CGSize)initialTextSize;
- (struct CGRect)maskRectForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (id)dependentLayouts;
- (struct CGRect)p_computeSpillingTextFrameForLayout:(id)arg1 textSize:(struct CGSize)arg2 editingSpillRange:(CDStruct_5f1f7aa9 *)arg3;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (_Bool)p_layoutWhollyContainsGridRange:(CDStruct_58eae27c)arg1;
- (struct CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(CDStruct_58eae27c)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (unsigned int)naturalAlignmentForTextLayout:(id)arg1;
- (unsigned int)p_naturalAlignmentForCellID:(CDStruct_0441cfb5)arg1;
@property(readonly, nonatomic) struct CGRect computedEditingCellContentFrame;
- (_Bool)textIsVertical;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) struct CGSize adjustedInsets;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect)rectForSelection:(id)arg1;
- (_Bool)orderedBefore:(id)arg1;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;
- (void)removeContainedTextEditingLayout;
- (void)updateChildrenFromInfo;
- (id)children;
- (void)setupContainedTextEditingLayout:(CDStruct_0441cfb5)arg1;
- (void)p_updateCachedStyleInformationFromCellID:(CDStruct_0441cfb5)arg1;
- (_Bool)isBeingManipulated;
- (void)validateTableNameVisibility;
- (void)invalidateTableNameVisibility;
- (void)bezierPathsForCellRegion:(id)arg1 transform:(struct CGAffineTransform)arg2 viewScale:(double)arg3 inset:(double)arg4 block:(CDUnknownBlockType)arg5;
- (void)invalidateSize;
- (void)invalidate;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)validate;
- (_Bool)isZoomedEditing;
- (_Bool)inFindReplaceMode;
- (_Bool)inPrintPreviewMode;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect)alignmentFrame;
- (int)wrapFitType;
- (id)initialInfoGeometry;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (struct CGSize)minimumSize;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canRotateChildLayout:(id)arg1;
- (_Bool)supportsRotation;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;
@property(readonly, nonatomic) TSTEditingState *editingState;
@property(nonatomic) struct CGSize scaleToFit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double textScaleFactor;

@end

