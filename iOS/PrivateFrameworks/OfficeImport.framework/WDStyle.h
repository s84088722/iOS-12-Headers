//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSString, WDCharacterProperties, WDParagraphProperties, WDStyleSheet, WDTableCellProperties, WDTableRowProperties, WDTableStyleOverride;

__attribute__((visibility("hidden")))
@interface WDStyle : NSObject <NSCopying>
{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    WDStyleSheet *mStyleSheet;
    WDStyle *mBaseStyle;
    WDStyle *mNextStyle;
    _Bool mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setNextStyle:(id)arg1;
- (id)nextStyle;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (id)id;
- (int)type;
- (void)setName:(id)arg1;
- (id)name;
- (id)tableStyleOverrideForPart:(int)arg1;
- (id)tableCellProperties;
- (id)tableRowProperties;
- (id)tableProperties;
- (_Bool)isAnythingOverridden;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (id)styleSheet;
- (id)characterProperties;
- (id)paragraphProperties;
- (void)dealloc;
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;

@end

