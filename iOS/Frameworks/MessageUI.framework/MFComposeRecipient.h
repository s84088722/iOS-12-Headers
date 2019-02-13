//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/NSCopying-Protocol.h>
#import <MessageUI/NSSecureCoding-Protocol.h>
#import <MessageUI/UIItemProviderReading-Protocol.h>
#import <MessageUI/UIItemProviderWriting-Protocol.h>

@class CNAutocompleteResult, CNContact, MFComposeRecipientOriginContext, NSArray, NSString;

@interface MFComposeRecipient : NSObject <UIItemProviderReading, UIItemProviderWriting, NSCopying, NSSecureCoding>
{
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
    NSString *_countryCode;
    NSString *_displayString;
    unsigned long long _sourceType;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    CNAutocompleteResult *_autocompleteResult;
    CNContact *_contact;
    NSString *_contactIdentifier;
    NSString *_valueIdentifier;
    NSString *_compositeName;
    NSString *_unlocalizedLabel;
    MFComposeRecipientOriginContext *_originContext;
    unsigned long long _kind;
}

+ (id)_requiredKeyDescriptors;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)recipientWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)composeRecipientWithAutocompleteResult:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)mf_recipientWithGALResult:(id)arg1;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) CNAutocompleteResult *autocompleteResult; // @synthesize autocompleteResult=_autocompleteResult;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *valueIdentifier; // @synthesize valueIdentifier=_valueIdentifier;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain, nonatomic) NSString *unlocalizedLabel; // @synthesize unlocalizedLabel=_unlocalizedLabel;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) MFComposeRecipientOriginContext *originContext; // @synthesize originContext=_originContext;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)labeledValueIdentifier;
- (id)_unformattedAddress;
- (void)setOriginContext:(id)arg1;
@property(readonly, nonatomic) NSString *uncommentedAddress; // @dynamic uncommentedAddress;
@property(readonly, nonatomic) NSString *placeholderName; // @dynamic placeholderName;
@property(readonly, nonatomic) NSString *shortName; // @dynamic shortName;
@property(readonly, nonatomic) NSString *compositeName; // @dynamic compositeName;
@property(readonly, nonatomic) NSString *commentedAddress; // @dynamic commentedAddress;
@property(readonly, nonatomic) NSString *normalizedAddress; // @dynamic normalizedAddress;
@property(copy, nonatomic) NSString *address; // @dynamic address;
- (id)preferredSendingAddress;
- (id)completelyMatchedAttributedStrings;
@property(readonly, nonatomic) _Bool isDirectoryServerResult;
@property(readonly, nonatomic) _Bool isSuggestedRecipient;
- (_Bool)wasCompleteMatch;
@property(readonly, nonatomic) _Bool showsAccessoryButton;
@property(readonly, nonatomic, getter=isRemovableFromSearchResults) _Bool removableFromSearchResults;
@property(readonly, nonatomic) _Bool isGroup;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
- (id)children;
- (void)setIdentifier:(int)arg1;
- (int)identifier;
- (int)recordID;
- (void)setRecord:(void *)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (void *)record;
- (int)property;
- (id)initWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;
- (id)init;
- (void)dealloc;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

