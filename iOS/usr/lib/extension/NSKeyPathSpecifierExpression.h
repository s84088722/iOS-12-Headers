//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression
{
    NSString *_value;
}

+ (_Bool)supportsSecureCoding;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)keyPath;
- (id)constantValue;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (void)dealloc;

@end

