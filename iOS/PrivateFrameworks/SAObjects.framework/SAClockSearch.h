//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *unlocalizedCountryName;
@property(copy, nonatomic) NSString *unlocalizedCityName;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSNumber *alCityId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

