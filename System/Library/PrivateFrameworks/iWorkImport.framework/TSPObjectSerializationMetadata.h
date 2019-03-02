//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray, TSPDataMetadataMap;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationMetadata : TSPObject
{
    struct ObjectSerializationMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
    NSArray *_dataReferences;
}

@property(copy, nonatomic) NSArray *dataReferences; // @synthesize dataReferences=_dataReferences;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (struct ObjectSerializationMetadata *)message;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (id)initWithContext:(id)arg1;

@end
