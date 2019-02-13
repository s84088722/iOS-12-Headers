//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDShapeLayout.h>

@class NSObject, TSDConnectionLineInfo, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout, TSUBezierPath;
@protocol TSDInfo;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineAbstractLayout : TSDShapeLayout
{
    TSUBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDLayout *mConnectedFrom;
    TSDLayout *mConnectedTo;
    NSObject<TSDInfo> *mConnectedFromInfo;
    NSObject<TSDInfo> *mConnectedToInfo;
    TSUBezierPath *mCachedFromWrapPath;
    TSUBezierPath *mCachedToWrapPath;
    double mCachedFromOutset;
    double mCachedToOutset;
    TSUBezierPath *mCachedFromOutsetWrapPath;
    TSUBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    _Bool mValidConnections;
    _Bool mVisibleLine;
    _Bool mValidLine;
    struct CGPoint mLooseEndPosition;
    struct CGPoint mAcumulatedDrag;
    _Bool mUseResizePoints[3];
    struct CGPoint mResizeControlPoints[3];
    _Bool mUseDynamicOutsets;
    double mDynamicOutsetFrom;
    double mDynamicOutsetTo;
    unsigned long long mDynamicOutsetType;
}

@property(nonatomic) unsigned long long dynamicOutsetType; // @synthesize dynamicOutsetType=mDynamicOutsetType;
@property(nonatomic) double dynamicOutsetTo; // @synthesize dynamicOutsetTo=mDynamicOutsetTo;
@property(nonatomic) double dynamicOutsetFrom; // @synthesize dynamicOutsetFrom=mDynamicOutsetFrom;
@property(nonatomic) _Bool useDynamicOutsets; // @synthesize useDynamicOutsets=mUseDynamicOutsets;
@property(readonly, nonatomic) _Bool validLine; // @synthesize validLine=mValidLine;
@property(nonatomic) __weak NSObject<TSDInfo> *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;
@property(nonatomic) __weak NSObject<TSDInfo> *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property(nonatomic) __weak TSDLayout *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(nonatomic) __weak TSDLayout *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (void).cxx_destruct;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (_Bool)p_isInfoAKeynoteMasterObject:(id)arg1;
- (_Bool)shouldAdjustForStrokeWidthForCollabCursor;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isStraightLine) _Bool straightLine;
- (struct CGSize)minimumSize;
- (_Bool)shouldDisplayGuides;
- (struct CGPoint)unclippedTailPoint;
- (struct CGPoint)unclippedHeadPoint;
- (id)path;
- (_Bool)pathIsOpen;
- (_Bool)pathIsLineSegment;
- (void)invalidatePath;
- (struct CGRect)boundsForStandardKnobs;
- (id)layoutInfoGeometry;
- (id)pathSource;
@property(readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
- (int)wrapType;
- (_Bool)canResetTextAndObjectHandles;
- (_Bool)canBeIntersected;
- (_Bool)canFlip;
- (_Bool)canEndpointsCoincide;
- (_Bool)isInvisible;
- (void)updateConnectedPath;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(_Bool)arg4 isValid:(_Bool *)arg5;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (void)checkConnections;
- (_Bool)p_connectedInfoInDocument:(id)arg1;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidateConnections;
- (void)removeConnections;
- (void)invalidateAndCleanupConnectedLayouts;
- (void)connectedLayoutDisconnected:(id)arg1;
- (void)connectedLayoutInvalidated:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (_Bool)supportsFlipping;
- (_Bool)supportsRotation;
- (_Bool)supportsResize;
- (_Bool)p_isConnectedToLockedObjects;
- (_Bool)isDraggable;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (_Bool)shouldValidate;
@property(readonly, nonatomic) TSDConnectionLineInfo *connectionLineInfo;
@property(readonly, nonatomic) double outsetTo;
@property(readonly, nonatomic) double outsetFrom;
- (void)dealloc;

@end

