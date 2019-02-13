//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray, NSSet, NSString, TDSchemaDefinition;

@interface TDSchemaPartDefinition : NSManagedObject
{
    CUIImage *previewImage;
    NSArray *renditions;
    NSArray *renditionGroups;
    unsigned long long partFeatures;
}

@property(nonatomic) unsigned long long partFeatures; // @synthesize partFeatures;
@property(retain, nonatomic) NSArray *renditionGroups; // @synthesize renditionGroups;
@property(copy, nonatomic) NSArray *renditions; // @synthesize renditions;
@property(retain, nonatomic) CUIImage *previewImage; // @synthesize previewImage;
- (void)didTurnIntoFault;
- (const CDStruct_26b2aa83 *)cuiPartDefinition;
- (id)displayName;
- (long long)partID;
- (long long)elementID;
- (long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;
- (id)validStatesWithDocument:(id)arg1;
- (void)updateDerivedRenditionData;
- (id)_schema;
- (id)bestPreviewRendition;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TDSchemaDefinition *element; // @dynamic element;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *productions; // @dynamic productions;
@property(retain, nonatomic) NSString *widgetID; // @dynamic widgetID;

@end

