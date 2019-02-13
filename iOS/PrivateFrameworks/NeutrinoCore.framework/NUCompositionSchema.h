//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary, NSSet;

@interface NUCompositionSchema : NUSchema
{
    NSSet *_requiredContents;
    struct NSDictionary *_contents;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
@property(readonly, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (struct NSArray *)schemaDependencies;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (_Bool)deserializeContents:(id)arg1 fromDictionary:(id)arg2 error:(out id *)arg3;
- (_Bool)serializeContents:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (id)deserializeComposition:(id)arg1 error:(out id *)arg2;
- (id)serializeComposition:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)modelForProperty:(id)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)copyComposition:(id)arg1;
- (id)copy:(id)arg1;
- (_Bool)validateContents:(id)arg1 error:(out id *)arg2;
- (_Bool)validateComposition:(id)arg1 error:(out id *)arg2;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)validateContents:(out id *)arg1;
- (_Bool)validatePropertyArray:(id)arg1 error:(out id *)arg2;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)isValid:(out id *)arg1;
@property(readonly, nonatomic) NSSet *requiredContents;
- (id)initWithIdentifier:(id)arg1 contents:(struct NSDictionary *)arg2 attributes:(id)arg3;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (long long)type;

@end

