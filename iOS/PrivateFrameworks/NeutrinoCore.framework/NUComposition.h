//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUIdentifiable-Protocol.h>

@class NSDictionary, NSString, NUCompositionSchema, NUIdentifier;

@interface NUComposition : NSObject <NUIdentifiable>
{
    NUIdentifier *_identifier;
    NUCompositionSchema *_schema;
    long long _mediaType;
}

@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NUCompositionSchema *schema; // @synthesize schema=_schema;
- (void).cxx_destruct;
- (_Bool)isEqualToComposition:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NUIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *contents;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCompositionSchema:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

