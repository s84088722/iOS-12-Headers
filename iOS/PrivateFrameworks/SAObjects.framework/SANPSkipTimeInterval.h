//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SANPSkipTimeInterval : SADomainCommand
{
}

+ (id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2;
+ (id)skipTimeInterval;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSNumber *adjustmentInMilliseconds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

