//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAKnowledgeGraphTriple : AceObject <SAAceSerializable>
{
}

+ (id)graphTripleWithDictionary:(id)arg1 context:(id)arg2;
+ (id)graphTriple;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *storeName;
@property(copy, nonatomic) NSString *predicate;
@property(copy, nonatomic) NSString *object;
@property(nonatomic) float confidence;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

