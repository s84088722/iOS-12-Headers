//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString, TSCECalculationEngine, TSTExpressionNode, TSTInfo;

__attribute__((visibility("hidden")))
@interface TSTFormula : NSObject <NSCopying>
{
    TSTExpressionNode *_expressionTree;
    TSCECalculationEngine *_calculationEngine;
    TSTInfo *_hostInfo;
    NSString *_initialWhitespace;
    struct TSUModelCellCoord _hostCell;
    _Bool _syntaxError;
    _Bool _fixupFormulas;
    _Bool _formulaWasFixable;
    _Bool _formulaFixupsShouldStick;
    _Bool _empty;
}

+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 unmatchedParenCount:(unsigned long long)arg2 quoteContext:(int)arg3 inStorage:(id)arg4;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;
+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;
+ (int)quoteContextAtCharIndex:(unsigned long long)arg1 previousContext:(int)arg2 inStorage:(id)arg3;
+ (id)equalsCharacters;
+ (id)rightParenCharacters;
+ (id)leftParenCharacters;
+ (id)doubleQuoteCharacters;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)singleQuoteCharacters;
+ (_Bool)storageExceedsMaxFormulaLength:(id)arg1;
+ (id)formulaForCell:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2 inTable:(id)arg3;
@property(copy, nonatomic) NSString *initialWhitespace; // @synthesize initialWhitespace=_initialWhitespace;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(readonly, nonatomic) _Bool formulaFixupsShouldStick; // @synthesize formulaFixupsShouldStick=_formulaFixupsShouldStick;
@property(readonly, nonatomic) _Bool formulaWasFixable; // @synthesize formulaWasFixable=_formulaWasFixable;
@property(nonatomic) _Bool fixupFormulas; // @synthesize fixupFormulas=_fixupFormulas;
@property(nonatomic, getter=isSyntaxError) _Bool syntaxError; // @synthesize syntaxError=_syntaxError;
@property(nonatomic) TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property(retain, nonatomic) TSTExpressionNode *expressionTree; // @synthesize expressionTree=_expressionTree;
- (void).cxx_destruct;
- (id)simplify;
- (_Bool)canSimplify;
- (id)p_formulaAsTextReturningTokenValues:(_Bool)arg1;
- (id)description;
- (id)formulaDetokenizedText;
- (id)formulaPlainText;
- (id)p_fixFormula:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)reparseWithStorage:(id)arg1;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (_Bool)hasBareArgumentPlaceholders;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
@property(readonly, nonatomic) struct TSCEFormula formula;
@property(readonly, nonatomic) struct TSCEFormula geometricFormula;
- (void)reset;
- (id)initWithCalculationEngine:(id)arg1 viewHostCell:(struct TSUViewCellCoord)arg2 hostTable:(id)arg3;
- (id)initWithCalculationEngine:(id)arg1 baseHostCell:(struct TSUModelCellCoord)arg2 hostTable:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseHostCell:(struct TSUModelCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerUID:(const UUIDData_5fbc143e *)arg5;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewHostCell:(struct TSUViewCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerUID:(const UUIDData_5fbc143e *)arg5;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseHostCell:(struct TSUModelCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerUID:(const UUIDData_5fbc143e *)arg5 suppressAutomaticNamedReferenceInvalidation:(_Bool)arg6;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewHostCell:(struct TSUViewCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerUID:(const UUIDData_5fbc143e *)arg5 suppressAutomaticNamedReferenceInvalidation:(_Bool)arg6;
- (id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 baseHostCell:(struct TSUModelCellCoord)arg3 hostTable:(id)arg4;

@end

