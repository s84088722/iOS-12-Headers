//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SAHAAttributeValue, SAHAEntity;

@interface SAHAActionResult : SADomainObject
{
}

+ (id)actionResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)actionResult;
@property(retain, nonatomic) SAHAAttributeValue *resultValue;
@property(copy, nonatomic) NSString *resultAttribute;
@property(copy, nonatomic) NSString *outcome;
@property(retain, nonatomic) SAHAEntity *entity;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

