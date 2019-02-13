//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class NSMutableArray, NSString, TSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    _Bool _currencyCodeComputed;
    int _formatType;
    TSUCustomFormatData *_defaultFormatData;
    NSString *_formatName;
    NSMutableArray *_conditionList;
}

@property(readonly, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=_conditionList;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property(readonly, nonatomic) TSUCustomFormatData *defaultFormatData; // @synthesize defaultFormatData=_defaultFormatData;
@property(readonly, nonatomic) int formatType; // @synthesize formatType=_formatType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *currencyCode;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;
- (id)conditionalFormatDataForValue:(double)arg1;
- (_Bool)isEqualWithStemNameMatching:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_isEqual:(id)arg1 matchingFullName:(_Bool)arg2;
@property(readonly, nonatomic) NSString *formatNameTag;
@property(readonly, nonatomic) NSString *formatNameStem;
- (void)p_makeFormatNameStemAndTag;
- (unsigned long long)hash;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (void)p_setFormatType:(int)arg1;
@property(readonly, nonatomic) _Bool conditionsAllowed;
@property(readonly, nonatomic) unsigned long long conditionCount;
- (id)customFormatWithNewName:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;
- (id)formattedBodyStringForDoubleValue:(double)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 locale:(id)arg4;

@end

