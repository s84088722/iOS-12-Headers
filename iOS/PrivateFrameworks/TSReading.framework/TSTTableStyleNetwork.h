//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/NSFastEnumeration-Protocol.h>

@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration>
{
    unsigned long long mPresetIndex;
    TSTTableStyle *mTableStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSTCellStyle *mBodyCellStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSWPShapeStyle *mTableNameShapeStyle;
}

+ (id)identifiersForPresetIndex:(unsigned long long)arg1;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)createStylesInStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkWithContext:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkFromTableModel:(id)arg1;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (_Bool)valid;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (id)styleArray;
- (void)setStylesFromTableModel:(id)arg1;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (id)textStyleForTableArea:(unsigned int)arg1;
- (id)cellStyleForTableArea:(unsigned int)arg1;
- (_Bool)stylesInStylesheet:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1;
@property(nonatomic) unsigned long long presetIndex;
@property(retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property(retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
- (void)setHeaderRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
- (void)setFooterRowTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
- (void)setHeaderColumnTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
- (void)setBodyTextStyle:(id)arg1;
@property(readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
- (void)setHeaderRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
- (void)setFooterRowCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
- (void)setHeaderColumnCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
- (void)setBodyCellStyle:(id)arg1;
@property(readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property(retain, nonatomic) TSTTableStyle *tableStyle;

@end

