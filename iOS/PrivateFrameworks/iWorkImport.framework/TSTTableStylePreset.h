//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>

@class NSString, TSTTableStyleNetwork;

__attribute__((visibility("hidden")))
@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>
{
    TSTTableStyleNetwork *_styleNetwork;
    _Bool _tableHasStrongOwnership;
    unsigned long long _tempUpgradePresetID;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) unsigned long long tempUpgradePresetID; // @synthesize tempUpgradePresetID=_tempUpgradePresetID;
@property(nonatomic) _Bool tableHasStrongOwnership; // @synthesize tableHasStrongOwnership=_tableHasStrongOwnership;
- (void).cxx_destruct;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableStylePresetArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(readonly, nonatomic) unsigned long long presetID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

