//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPPositionSignpost-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MSPPosition : NSObject <NSSecureCoding, NSCopying, MSPPositionSignpost>
{
    NSArray *_pathComponents;
}

+ (id)positionBetweenSignpost:(id)arg1 andSignpost:(id)arg2 clientIdentifier:(id)arg3;
+ (id)positionBetweenPosition:(id)arg1 andPosition:(id)arg2 clientIdentifier:(id)arg3;
+ (_Bool)_hasSpaceForInsertionAtDepth:(unsigned long long)arg1 betweenEarlierPosition:(id)arg2 andLaterPosition:(id)arg3 clientIdentifier:(id)arg4;
+ (long long)_strategyForAllocationAtDepth:(unsigned long long)arg1;
+ (id)finalSignpostWithClientIdentifier:(id)arg1;
+ (id)initialSignpostWithClientIdentifier:(id)arg1;
+ (id)finalPositionWithClientIdentifier:(id)arg1;
+ (id)initialPositionWithClientIdentifier:(id)arg1;
+ (id)_pathComponentsForSignpost:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, getter=_pathComponents) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (_Bool)_isFinal;
- (_Bool)_isInitial;
- (id)_positionByTruncatingOrExtendingToDepth:(unsigned long long)arg1 clientIdentifier:(id)arg2;
- (id)_addingDistanceAtEqualDepth:(long long)arg1 clientIdentifier:(id)arg2;
- (id)_initWithIndexes:(id)arg1 originIdentifier:(id)arg2;
- (id)_initWithPathComponents:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) NSData *serializedRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

