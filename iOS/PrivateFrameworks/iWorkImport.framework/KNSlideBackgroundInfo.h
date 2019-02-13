//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDChangeableInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class KNAbstractSlide, NSString, TSDFill, TSDInfoGeometry, TSPObject, TSSPropertySetChangeDetails;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject>
{
    NSObject<TSDContainerInfo> *_parentInfo;
    TSSPropertySetChangeDetails *_changes;
    TSDInfoGeometry *_geometry;
    KNAbstractSlide *_slide;
}

+ (id)backgroundWithSlide:(id)arg1 andGeometry:(id)arg2;
@property(readonly, nonatomic) __weak KNAbstractSlide *slide; // @synthesize slide=_slide;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry=_geometry;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=_parentInfo;
- (void).cxx_destruct;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (struct CGSize)minimumSize;
- (id)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;
- (id)originalPDFDataForCopy;
@property(readonly, nonatomic) TSDFill *fill;
- (Class)layoutClass;
- (_Bool)isSelectable;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (_Bool)isThemeContent;
- (Class)repClass;
- (id)initWithSlide:(id)arg1 andGeometry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

