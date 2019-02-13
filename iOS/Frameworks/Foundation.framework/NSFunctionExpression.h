//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSArray;

@interface NSFunctionExpression : NSExpression
{
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (_Bool)supportsSecureCoding;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)_shouldUseParensWithDescription;
- (id)predicateFormat;
- (id)binaryOperatorForSelector;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)arguments;
- (SEL)selector;
- (id)operand;
- (id)function;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
- (id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;
- (void)dealloc;

@end

