//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/FIDictionaryRepresentable-Protocol.h>

@class HKQuantity;

@interface FIIntervalDefinition : NSObject <FIDictionaryRepresentable>
{
    long long _type;
    HKQuantity *_quantity;
}

+ (id)definitionFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)intervalDefinitionWithTypeIdentifier:(long long)arg1 quantity:(id)arg2;
@property(readonly, nonatomic) HKQuantity *quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)byChangingType:(long long)arg1 quantity:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithTypeIdentifier:(long long)arg1 quantity:(id)arg2;

@end

