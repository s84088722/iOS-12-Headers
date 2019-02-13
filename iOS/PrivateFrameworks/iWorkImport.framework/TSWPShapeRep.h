//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDShapeRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>
#import <iWorkImport/TSWPContainerTextEditingRep-Protocol.h>
#import <iWorkImport/TSWPShapeLayoutDelegate-Protocol.h>

@class CALayer, NSArray, NSObject, NSString, TSWPRep, TSWPStorage;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSWPShapeRep : TSDShapeRep <TSDMagicMoveMatching, TSWPContainerTextEditingRep, TSWPShapeLayoutDelegate>
{
    _Bool _editingContainedRep;
    CALayer *_overflowGlyphLayer;
    struct CGPoint _originalAutosizePositionOffset;
    TSWPRep *_containedRep;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3 textDeliveryType:(long long)arg4 repToOpacityTextRangeDictMap:(id)arg5;
+ (_Bool)p_shouldDisableTextMorphingBetweenOutgoingRep:(id)arg1 outgoingChunkRange:(struct _NSRange)arg2 incomingRep:(id)arg3 incomingChunkRange:(struct _NSRange)arg4;
+ (id)magicMoveAnimationMatchesFromMatches:(id)arg1 description:(id)arg2;
+ (void)p_getOutgoingTextureSet:(id *)arg1 incomingTextureSet:(id *)arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(struct _NSRange)arg4 outgoingTextureByGlyphStyle:(int)arg5 incomingRep:(id)arg6 incomingChunkRange:(struct _NSRange)arg7 incomingTextureByGlyphStyle:(int)arg8 includeListLabels:(_Bool)arg9;
+ (id)p_textureSetFromRep:(id)arg1 range:(struct _NSRange)arg2 textureByGlyphStyle:(int)arg3 includeListLabel:(_Bool)arg4 desiredContentRect:(struct CGRect)arg5;
+ (_Bool)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(long long)arg2 incomingStorage:(id)arg3 incomingCharIndex:(long long)arg4 shouldMatch:(_Bool *)arg5;
+ (unsigned long long)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(long long)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5 textureDescription:(id)arg6;
+ (id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(struct _NSRange)arg2 toString:(id)arg3;
+ (id)p_potentialMatchesWithChunkLength:(unsigned long long)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureDescription:(id)arg4 textDeliveryType:(long long)arg5;
+ (double)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg1 incomingTextChunk:(id)arg2;
@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
- (void).cxx_destruct;
- (void)selectChildRep:(id)arg1 extendingSelection:(_Bool)arg2;
- (_Bool)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)newTextureRenderableForRange:(struct _NSRange)arg1 includeListLabel:(_Bool)arg2 isMagicMove:(_Bool)arg3 desiredContentRect:(struct CGRect)arg4 textureByGlyphStyle:(int)arg5 includeGroupedShadow:(_Bool)arg6 groupedShadowOnly:(_Bool)arg7 textureBounds:(struct CGRect *)arg8;
- (_Bool)p_getBoundsRect:(struct CGRect *)arg1 contentRect:(struct CGRect *)arg2 transform:(struct CGAffineTransform *)arg3 applyReflection:(_Bool *)arg4 applyShadow:(_Bool *)arg5 forRange:(struct _NSRange)arg6 includeListLabel:(_Bool)arg7 isMagicMove:(_Bool)arg8;
- (_Bool)p_hasContentForRange:(struct _NSRange)arg1 labelOnly:(_Bool)arg2;
- (void)p_drawRubyInContext:(struct CGContext *)arg1 forRange:(struct _NSRange)arg2;
- (struct CGRect)p_rectForRubyFields:(struct _NSRange)arg1;
@property(readonly, nonatomic) TSWPStorage *textStorageForTexture;
- (id)textureForDescription:(id)arg1;
- (long long)stageIndexForStorageRange:(struct _NSRange)arg1 forTextureDescription:(id)arg2 stageChunks:(id)arg3;
- (id)stageChunksForDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2;
@property(readonly, nonatomic) _Bool isShapeInvisible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

