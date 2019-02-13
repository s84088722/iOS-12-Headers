//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManager/DOCLocation-Protocol.h>
#import <DocumentManager/NSSecureCoding-Protocol.h>

@class FPItem, NSArray, NSString;

@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding>
{
    _Bool _needsToResolveHierarchy;
    _Bool _isFPV2;
    FPItem *_fileProviderItem;
    NSString *_promptText;
    NSString *_sourceIdentifier;
    NSString *_title;
    NSArray *_tags;
}

+ (_Bool)supportsSecureCoding;
+ (id)emptyLocation;
+ (id)defaultSaveLocation;
+ (id)defaultLocation;
+ (id)trashedItemsLocation;
+ (id)sharedItemsLocation;
+ (id)recentDocumentsLocation;
+ (id)recentsLocation;
+ (id)searchLocation;
@property _Bool isFPV2; // @synthesize isFPV2=_isFPV2;
@property(readonly, copy) NSArray *tags; // @synthesize tags=_tags;
@property _Bool needsToResolveHierarchy; // @synthesize needsToResolveHierarchy=_needsToResolveHierarchy;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy) NSString *promptText; // @synthesize promptText=_promptText;
@property(retain) FPItem *fileProviderItem; // @synthesize fileProviderItem=_fileProviderItem;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTags:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 fileProviderItem:(id)arg2;

@end

