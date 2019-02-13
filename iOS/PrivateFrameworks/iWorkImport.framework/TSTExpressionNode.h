//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSTFormulaToken-Protocol.h>

@class NSArray, NSString, TSTWPTokenAttachment, UIViewController;

__attribute__((visibility("hidden")))
@interface TSTExpressionNode : TSPObject <TSTFormulaToken>
{
    NSArray *_children;
    struct TSCEFunctionArgSpec *_argumentSpec;
    TSTWPTokenAttachment *_tokenAttachment;
    unsigned long long _firstIndex;
    unsigned long long _lastIndex;
    NSString *_whitespaceBefore;
    NSString *_whitespaceAfter;
}

@property(retain, nonatomic) NSString *whitespaceAfter; // @synthesize whitespaceAfter=_whitespaceAfter;
@property(retain, nonatomic) NSString *whitespaceBefore; // @synthesize whitespaceBefore=_whitespaceBefore;
@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) unsigned long long firstIndex; // @synthesize firstIndex=_firstIndex;
@property(nonatomic) TSTWPTokenAttachment *tokenAttachment; // @synthesize tokenAttachment=_tokenAttachment;
- (void).cxx_destruct;
- (id)description;
- (void)saveToArchive:(struct ExpressionNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ExpressionNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)eliminateLargestCommonSubexpression:(id)arg1 withSymbolTable:(struct TSCESymbolTable *)arg2 newIdentifierOut:(id *)arg3;
- (id)p_eliminateLargestCommonSubexpressionWithLCA:(id)arg1 expressions:(id)arg2 withSymbolTable:(struct TSCESymbolTable *)arg3 newIdentifierOut:(id *)arg4;
- (id)lowestCommonAncestor:(id)arg1;
- (id)eliminateLargestCommonSubexpressionWithSymbolTable:(struct TSCESymbolTable *)arg1 newIdentifierOut:(id *)arg2;
- (_Bool)canEliminateLargestCommonSubexpressionWithSymbolTable:(struct TSCESymbolTable *)arg1;
- (void)replaceOccurrencesOfChildrenInSet:(id)arg1 withIdentifier:(id)arg2 symbol:(unsigned int)arg3;
- (void)addAllIdentifiersToSymbolTable:(struct TSCESymbolTable *)arg1;
- (id)largestCommonSubexpressionExcludingExisting:(id)arg1 cseData:(id)arg2;
- (id)largestCommonSubexpression;
- (void)addVariablesMatchingPrefix:(id)arg1 forFormulaIndex:(unsigned long long)arg2 toDictionary:(id)arg3 symbolTable:(struct TSCESymbolTable *)arg4;
- (unsigned int)symbol;
- (_Bool)isFunctionNode;
- (id)mostSpecificNodeContainingIndex:(unsigned long long)arg1 correspondingIndex:(unsigned long long)arg2;
- (_Bool)subtreeContainsIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeEncompassingExpressionNodesInRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (unsigned long long)lastIndexOfSubtree;
- (unsigned long long)firstIndexOfSubtree;
- (long long)compareFirstLastIndices:(id)arg1;
- (void)enumerateExpressionNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(unsigned char)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (_Bool)hasMenu;
@property(readonly, retain, nonatomic) UIViewController *popover;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2;
- (void)fixStorageLanguage:(id)arg1;
- (id)detokenizedText;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
@property(retain, nonatomic) NSArray *children;
@property(nonatomic) struct TSCEFunctionArgSpec *argumentSpec;
- (id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 baseHostCell:(struct TSUCellCoord)arg3 forceReferenceInterpretation:(_Bool)arg4 symbolTable:(struct TSCESymbolTable *)arg5 oldToNewNodeMap:(id)arg6;
- (_Bool)forceReferenceInterpretationOfChildren;
@property(readonly, nonatomic) _Bool isOptional;
- (id)deepCopyIntoContext:(id)arg1 bakeModes:(_Bool)arg2 withTokenDict:(id)arg3;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *string; // @dynamic string;
@property(readonly, nonatomic) int tokenType; // @dynamic tokenType;

@end

