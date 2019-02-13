//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDContainerLayout.h>

#import <SilexText/TSDWrappable-Protocol.h>

@class NSMutableArray, NSString, TSDBezierPath, TSDWrapPolygon;

@interface STContainerLayout : TSDContainerLayout <TSDWrappable>
{
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
    NSMutableArray *_oldchildLayouts;
}

@property(retain, nonatomic) NSMutableArray *oldchildLayouts; // @synthesize oldchildLayouts=_oldchildLayouts;
- (void).cxx_destruct;
- (_Bool)supportsInspectorPositioning;
- (void)invalidateParentForWrap;
- (void)i_invalidateWrap;
- (_Bool)allowsConnections;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
- (void)setGeometry:(id)arg1;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)invalidate;
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (id)wrapPolygon;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (id)i_exteriorTextWrap;
- (void)childLayoutCreated:(id)arg1;
- (id)additionalLayouts;
- (void)updateChildrenFromInfo;
- (id)childrenForLayout;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

