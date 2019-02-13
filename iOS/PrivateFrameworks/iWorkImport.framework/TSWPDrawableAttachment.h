//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPAttachment.h>

@class TSDDrawableInfo;

__attribute__((visibility("hidden")))
@interface TSWPDrawableAttachment : TSWPAttachment
{
    TSDDrawableInfo *_drawableInfo;
    int _hOffsetType;
    double _hOffset;
    int _vOffsetType;
    double _vOffset;
}

+ (void)setPositionerClass:(Class)arg1;
@property(nonatomic) double vOffset; // @synthesize vOffset=_vOffset;
@property(nonatomic) int vOffsetType; // @synthesize vOffsetType=_vOffsetType;
@property(nonatomic) double hOffset; // @synthesize hOffset=_hOffset;
@property(nonatomic) int hOffsetType; // @synthesize hOffsetType=_hOffsetType;
@property(readonly, nonatomic) TSDDrawableInfo *drawable; // @synthesize drawable=_drawableInfo;
- (void).cxx_destruct;
- (_Bool)supportsUUID;
- (_Bool)preserveAttributesOverSelectionWhenInserting;
- (void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (_Bool)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (_Bool)shouldInvalidateWhenTextPropertiesChange;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)objectsForStyleMigrating;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)infoChanged;
- (_Bool)specifiesEnabledKnobMask;
- (_Bool)isSearchable;
- (Class)positionerClass;
- (_Bool)isAnchored;
- (_Bool)isPartitioned;
- (_Bool)isDrawable;
- (_Bool)isHTMLWrap;
- (void)clearParentStorageForDealloc;
- (void)setParentStorage:(id)arg1;
- (void)attachDrawable:(id)arg1;
- (id)detachDrawable;
- (void)invalidate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)saveMessage:(struct DrawableAttachmentArchive *)arg1 toArchiver:(id)arg2;
- (void)didFinalizeUnarchivingFromWPStorage:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadMessage:(const struct DrawableAttachmentArchive *)arg1 fromUnarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 drawable:(id)arg2;
- (void)dealloc;
- (int)elementKind;

@end

