//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStyledLayout.h>

@class NSArray, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDLineEnd, TSDMutableStroke, TSDPathSource, TSDShapeInfo, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDShapeLayout : TSDStyledLayout
{
    struct {
        unsigned int path:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    TSUBezierPath *mCachedPath;
    _Bool mCachedPathIsOpen;
    _Bool mCachedPathIsLineSegment;
    CDStruct_5bfcb38a mCachedPathBoundsStruct;
    CDStruct_5bfcb38a mCachedPathBoundsWithoutStrokeStruct;
    TSUBezierPath *mCachedClippedPath;
    CDStruct_5bfcb38a mCachedClippedPathStroked;
    CDStruct_5bfcb38a mCachedClippedPathRotatedStroked;
    struct CGAffineTransform mClippedPathRotatedTransform;
    CDStruct_5bfcb38a mCachedAlignmentFrame;
    CDStruct_5bfcb38a mCachedAlignmentFrameInRoot;
    struct CGAffineTransform mCachedAlignmentFrameInRootTransformInRoot;
    struct CGPoint mHeadPoint;
    struct CGPoint mTailPoint;
    struct CGPoint mHeadLineEndPoint;
    struct CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDPathSource *mShrunkenPathSource;
    TSDPathSource *mOriginalShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
    NSArray *mDynamicStrokeOffsetArray;
    _Bool mIsDynamicallyInvisible;
}

- (void).cxx_destruct;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(_Bool)arg2 stroke:(id)arg3;
- (struct CGRect)p_boundsOfLineEndForHead:(_Bool)arg1 transform:(struct CGAffineTransform)arg2;
- (id)p_createClippedPath;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (void)p_invalidateClippedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (_Bool)p_cachedPathIsLineSegment;
- (_Bool)p_cachedPathIsOpen;
- (struct CGRect)p_cachedPathBoundsWithoutStroke;
- (struct CGRect)p_updatedCachedClipRectIfNeededForRotation:(struct CGAffineTransform)arg1;
- (struct CGRect)p_cachedClippedPathStroked;
- (struct CGRect)p_cachedPathBounds;
- (id)p_cachedPath;
- (void)validate;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (id)i_computeWrapPath;
@property(readonly, nonatomic) TSDLineEnd *strokeTailLineEnd;
@property(readonly, nonatomic) TSDLineEnd *strokeHeadLineEnd;
@property(readonly, nonatomic) struct CGPoint unclippedTailPoint;
@property(readonly, nonatomic) struct CGPoint unclippedHeadPoint;
- (_Bool)supportsRotation;
- (struct CGSize)minimumSize;
- (_Bool)supportsResize;
- (void)invalidatePathBounds;
- (void)invalidatePath;
- (void)invalidateFrame;
- (_Bool)supportsCalloutAttributes;
- (_Bool)canResetTextAndObjectHandles;
- (_Bool)canBeIntersected;
@property(readonly, nonatomic) TSDFill *fill;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id *)arg3 adjustedPath:(id *)arg4 startDelta:(struct CGPoint *)arg5 endDelta:(struct CGPoint *)arg6;
- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (struct CGPoint)centerForConnecting;
- (_Bool)isInvisibleAutosizingShape;
- (_Bool)shouldBeDisplayedInShowMode;
- (_Bool)isInvisible;
- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1 strokeDrawOptions:(unsigned long long)arg2;
- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) TSUBezierPath *clippedPathForLineEnds;
- (double)lineEndScale:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isTailEndOnLeft;
@property(readonly, nonatomic) double tailLineEndAngle;
@property(readonly, nonatomic) double headLineEndAngle;
@property(readonly, nonatomic) struct CGPoint tailLineEndPoint;
@property(readonly, nonatomic) struct CGPoint headLineEndPoint;
@property(readonly, nonatomic) struct CGPoint tailPoint;
@property(readonly, nonatomic) struct CGPoint headPoint;
@property(readonly, nonatomic) TSDInfoGeometry *layoutInfoGeometry;
@property(readonly, nonatomic) _Bool pathIsLineSegment;
@property(readonly, nonatomic) _Bool pathIsOpen;
- (id)smartPathSource;
@property(readonly, nonatomic) struct CGRect pathBoundsWithoutStroke;
@property(readonly, nonatomic) struct CGRect pathBounds;
@property(readonly, nonatomic) TSUBezierPath *path;
- (id)editablePathSource;
@property(readonly, nonatomic) TSDPathSource *pathSource;
@property(readonly, nonatomic) TSDShapeInfo *shapeInfo;
- (id)stroke;
- (_Bool)shouldAdjustForStrokeWidthForCollabCursor;
- (struct CGRect)frameForCulling;
- (struct CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)alignmentFrame;
- (void)setGeometry:(id)arg1;
- (struct CGAffineTransform)computeLayoutTransform;
- (id)computeLayoutGeometry;
- (void)invalidate;
- (id)reliedOnLayouts;
@property(readonly, nonatomic) _Bool isFreehandDrawingSpacerShape;
- (id)layoutGeometryFromInfo;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)textWrapperForExteriorWrap;

@end

