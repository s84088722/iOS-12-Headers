//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSWPCharacterStyle, TSWPListStyle, TSWPParagraphStyle;
@protocol TSWPCoreTextPropertiesFilterDelegate;

@protocol TSWPStyleProvider <NSObject>
- (TSWPParagraphStyle *)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool supportsBoldItalicUnderlineShortcuts;
- (id <TSWPCoreTextPropertiesFilterDelegate>)coreTextPropertiesFilterDelegateAtParIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
- (TSWPParagraphStyle *)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1;
- (unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(CDStruct_b9fbe577 *)arg2;
- (TSWPListStyle *)listStyleAtParIndex:(unsigned long long)arg1;
- (TSWPCharacterStyle *)modifiedCharacterStyle:(TSWPCharacterStyle *)arg1 atCharIndex:(unsigned long long)arg2;
@end

