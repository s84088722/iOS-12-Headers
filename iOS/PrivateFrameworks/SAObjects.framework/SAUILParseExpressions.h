//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUILParseExpressions : SABaseClientBoundCommand
{
}

+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parseExpressions;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *expressions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

