//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>
#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface XCTAggregateSuiteRunStatistics : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_lastTestIdentifier;
    NSMutableDictionary *_recordMap;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSMutableDictionary *recordMap; // @synthesize recordMap=_recordMap;
@property(copy) NSString *lastTestIdentifier; // @synthesize lastTestIdentifier=_lastTestIdentifier;
- (void).cxx_destruct;
- (id)recordForSuiteNamed:(id)arg1;
- (void)addSuiteRecord:(id)arg1;
@property(readonly) NSArray *suiteRecords;
@property(readonly) unsigned long long suiteRecordCount;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToStatistics:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

