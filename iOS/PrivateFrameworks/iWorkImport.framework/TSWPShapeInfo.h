//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDShapeInfo.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDSelectionStatisticsContributor-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class NSArray, NSObject, NSString, TSDInfoGeometry, TSPObject, TSWPColumns, TSWPPadding, TSWPShapeStyle, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment, TSWPFlowInfo;

__attribute__((visibility("hidden")))
@interface TSWPShapeInfo : TSDShapeInfo <TSDMixing, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage *_containedStorage;
    _Bool _isTextBox;
    _Bool _preventsComments;
    _Bool _preventsChangeTracking;
    TSPObject<TSWPFlowInfo> *_textFlow;
}

+ (id)p_newEmptyStorageWithContext:(id)arg1 paragraphStyle:(id)arg2;
+ (id)defaultPlaceholderTextForLocale:(id)arg1;
+ (void)setDefaultInstructionalText:(id)arg1;
+ (unsigned long long)numberOfDifferencesBetweenStyleProperties:(id)arg1 betweenOutgoingStorage:(id)arg2 outgoingRange:(struct _NSRange)arg3 incomingStorage:(id)arg4 incomingRange:(struct _NSRange)arg5 maxDifferencesBeforeReturning:(unsigned long long)arg6;
+ (_Bool)shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4;
+ (_Bool)stylesAreEqualWithOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4;
+ (id)textPropertiesAffectingTextMorph;
+ (id)textPropertiesNotAffectingVisualStyle;
+ (id)textPropertiesAffectingVisualStyleExceptSize;
+ (id)textPropertiesAffectingVisualStyle;
+ (id)textPropertiesAffectingObjectMatch;
+ (id)textPropertiesNeedingCharacterAnimation;
@property(nonatomic) __weak TSPObject<TSWPFlowInfo> *textFlow; // @synthesize textFlow=_textFlow;
@property(readonly, nonatomic) _Bool preventsChangeTracking; // @synthesize preventsChangeTracking=_preventsChangeTracking;
@property(readonly, nonatomic) _Bool preventsComments; // @synthesize preventsComments=_preventsComments;
@property(readonly, nonatomic) _Bool isTextBox; // @synthesize isTextBox=_isTextBox;
- (void).cxx_destruct;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (_Bool)p_isNonTopicParagraphBreakAtParagraphIndex:(unsigned long long)arg1;
- (unsigned long long)p_nonTopicParagraphBreakCount;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (unsigned long long)p_chunkCountForByBullet;
@property(readonly, nonatomic) _Bool autoListTermination;
@property(readonly, nonatomic) _Bool autoListRecognition;
- (id)stylesForCopyStyle;
- (id)propertyMapForNewPreset;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)copyAcceptingTrackedChangesWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)fixPositionOfImportedAutosizedShape;
- (struct CGPoint)autosizePositionOffset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;
- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;
- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *instructionalText;
- (void)setIsTextBoxForPersistence:(_Bool)arg1;
@property(readonly, nonatomic) _Bool displaysInstructionalText;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)presetKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (void)dealloc;
- (Class)styleClass;
@property(nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property(retain, nonatomic) TSWPPadding *padding;
@property(readonly, nonatomic) _Bool supportsMultipleColumns;
@property(retain, nonatomic) TSWPColumns *columns;
@property(readonly, nonatomic) int columnDirection;
@property(nonatomic) int verticalAlignment;
@property(nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) _Bool textIsLinked;
@property(nonatomic) _Bool shrinkTextToFit;
- (_Bool)supportsShrinkTextToFit;
- (_Bool)supportsTextInset;
- (_Bool)canAnchor;
- (_Bool)isLocked;
@property(readonly, nonatomic) _Bool shouldIgnoreWPContent;
@property(readonly, nonatomic) _Bool isLinkable;
@property(readonly, nonatomic) _Bool isLinked;
- (id)i_ownedTextStorage;
- (void)i_setOwnedTextStorage:(id)arg1;
- (void)p_setOwnedTextStorage:(id)arg1;
- (id)textStorageForHeadOfTextFlow;
@property(readonly, nonatomic) TSWPStorage *textStorage;
- (void)saveToArchive:(struct ShapeInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)upgradeOwnedStorageWithFileFormatVersion:(unsigned long long)arg1;
- (void)fixupAutosizingTextboxes;
- (void)upgradeWithNewOwnedStorage;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (_Bool)canBeDefinedAsTextPlaceholder;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)shouldHideEmptyBullets;
- (_Bool)isRightToLeft;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly, nonatomic) _Bool storageChangesInvalidateWrap;
@property(readonly) Class superclass;

@end

