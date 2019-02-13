//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactAugmentation-Protocol.h>
#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/CNSuggested-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSItemProviderReading-Protocol.h>
#import <Contacts/NSItemProviderWriting-Protocol.h>
#import <Contacts/NSMutableCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNActivityAlert, CNContactKeyVector, NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSSet, NSString, SGRecordId;
@protocol CNKeyDescriptor;

@interface CNContact : NSObject <NSItemProviderReading, NSItemProviderWriting, CNSuggested, CNContactAugmentation, CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_internalIdentifier;
    int _iOSLegacyIdentifier;
    NSString *_namePrefix;
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nameSuffix;
    NSString *_previousFamilyName;
    NSString *_nickname;
    NSString *_phoneticGivenName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticFamilyName;
    NSString *_phoneticOrganizationName;
    NSString *_pronunciationGivenName;
    NSString *_pronunciationFamilyName;
    NSString *_sortingGivenName;
    NSString *_sortingFamilyName;
    NSString *_sectionForSortingByGivenName;
    NSString *_sectionForSortingByFamilyName;
    NSString *_organizationName;
    NSString *_departmentName;
    NSString *_jobTitle;
    NSDateComponents *_birthday;
    NSDateComponents *_nonGregorianBirthday;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_note;
    NSData *_imageData;
    struct CGRect _cropRect;
    NSData *_thumbnailImageData;
    NSData *_fullscreenImageData;
    _Bool _imageDataAvailable;
    NSString *_linkIdentifier;
    _Bool _preferredForName;
    _Bool _preferredForImage;
    NSString *_phonemeData;
    long long _contactType;
    long long _displayNameOrder;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
    NSArray *_urlAddresses;
    NSArray *_dates;
    NSArray *_instantMessageAddresses;
    NSArray *_contactRelations;
    NSArray *_socialProfiles;
    NSArray *_postalAddresses;
    NSArray *_calendarURIs;
    NSString *_cardDAVUID;
    CNActivityAlert *_callAlert;
    CNActivityAlert *_textAlert;
    NSString *_storeIdentifier;
    NSDictionary *_storeInfo;
    CNContact *_snapshot;
    NSArray *_linkedContacts;
    NSString *_accountIdentifier;
    CNContactKeyVector *_availableKeyDescriptor;
    NSString *_mapsData;
    NSString *_searchIndex;
    NSString *_preferredLikenessSource;
    NSString *_preferredApplePersonaIdentifier;
    NSString *_preferredChannel;
}

+ (id)unifyContacts:(id)arg1;
+ (CDUnknownBlockType)preferredImageComparator;
+ (CDUnknownBlockType)comparatorForNameSortOrder:(long long)arg1;
+ (id)descriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorForAllComparatorKeys;
+ (_Bool)supportsSecureCoding;
+ (id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3;
+ (id)makeContactAndMergeValuesFromAvailableKeysInContact:(id)arg1;
+ (id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2;
+ (id)contactWithContact:(id)arg1;
+ (id)_contactWithContact:(id)arg1 createNewInstance:(_Bool)arg2 propertyDescriptions:(id)arg3;
+ (id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)contact;
+ (id)contactWithIdentifier:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)alwaysFetchedKeys;
+ (id)descriptorForRequiredKeysForSearchableItem;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsWithIdentifiers:(id)arg1;
+ (id)predicateForMeContact;
+ (id)predicateForFaultFulfillmentForLegacyIdentifier:(unsigned int)arg1 identifier:(id)arg2;
+ (id)predicateForContactsWithNonUnifiedIdentifiers:(id)arg1;
+ (id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(_Bool)arg2;
+ (id)predicateForContactsMatchingInstantMessageAddress:(id)arg1;
+ (id)predicateForContactsMatchingSocialProfile:(id)arg1;
+ (id)predicateForLegacyIdentifier:(unsigned int)arg1;
+ (id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4;
+ (id)predicateForContactMatchingURLString:(id)arg1;
+ (id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;
+ (id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2;
+ (id)predicateForPreferredNameInRange:(struct _NSRange)arg1;
+ (id)predicateForContactMatchingPhoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactMatchingMapString:(id)arg1;
+ (id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
+ (id)predicateForContactsLinkedToContact:(id)arg1;
+ (id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingPostalAddress:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsWithOrganizationName:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForAllContacts;
+ (int)abPropertyIDfromContactPropertyKey:(id)arg1;
+ (id)contactPropertyKeyFromABPropertyID:(int)arg1;
+ (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;
+ (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2;
+ (int)publicABPropertyIDFromContactPropertyKey:(id)arg1;
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)arg1;
+ (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(_Bool)arg3;
+ (id)contactFromPublicABPerson:(void *)arg1 keysToFetch:(id)arg2;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)contactWithArchivedData:(id)arg1 error:(id *)arg2;
+ (id)contactWithVCardData:(id)arg1 error:(id *)arg2;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)suggestionIDFromContactIdentifier:(id)arg1;
+ (id)contactIdentifierFromSuggestionID:(id)arg1;
+ (id)contactFromSuggestion:(id)arg1;
+ (id)predicateForSuggestionIdentifier:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *preferredChannel; // @synthesize preferredChannel=_preferredChannel;
@property(readonly, nonatomic) long long displayNameOrder; // @synthesize displayNameOrder=_displayNameOrder;
@property(readonly, copy, nonatomic) NSString *sortingFamilyName; // @synthesize sortingFamilyName=_sortingFamilyName;
@property(readonly, copy, nonatomic) NSString *sortingGivenName; // @synthesize sortingGivenName=_sortingGivenName;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(readonly, copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, copy, nonatomic) NSString *internalIdentifier; // @synthesize internalIdentifier=_internalIdentifier;
- (void).cxx_destruct;
- (id)linkedIdentifierMap;
- (_Bool)isValid:(id *)arg1;
- (_Bool)isEqualIgnoringIdentifiers:(id)arg1;
- (_Bool)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1;
- (_Bool)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1;
- (_Bool)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)shortDebugDescription;
@property(readonly, copy) NSString *description;
- (id)diffToSnapshotAndReturnError:(id *)arg1;
- (_Bool)hasChanges;
- (id)snapshot;
@property(readonly, copy, nonatomic) NSString *phoneticCompanyName;
@property(readonly, copy, nonatomic) NSString *phoneticFullName;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *stringForIndexing;
@property(readonly, copy, nonatomic) NSArray *mainStoreLinkedContacts;
- (id)linkedContactsFromStoreWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *linkedContacts;
- (_Bool)areKeysAvailable:(id)arg1;
- (_Bool)isKeyAvailable:(id)arg1;
@property(readonly, nonatomic) _Bool hasBeenPersisted;
- (_Bool)isUnifiedWithContactWithIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isUnified) _Bool unified;
@property(readonly, nonatomic) NSSet *availableKeys;
- (id)keyVector;
@property(readonly, nonatomic) id <CNKeyDescriptor> availableKeyDescriptor;
- (void)assertKeysAreAvailable:(id)arg1;
- (void)assertKeyIsAvailable:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithPropertyKeys:(id)arg1;
- (id)initWithIdentifier:(id)arg1 availableKeyDescriptor:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSDictionary *activityAlerts;
@property(readonly, copy, nonatomic) NSString *cardDAVUID;
@property(readonly, copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property(readonly, copy, nonatomic) NSString *preferredLikenessSource;
@property(readonly, copy, nonatomic) NSString *searchIndex;
@property(readonly, copy, nonatomic) NSString *mapsData;
@property(readonly, copy, nonatomic) CNActivityAlert *textAlert;
@property(readonly, copy, nonatomic) CNActivityAlert *callAlert;
@property(readonly, copy, nonatomic) NSString *phonemeData;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) NSArray *calendarURIs;
@property(readonly, copy, nonatomic) NSArray *postalAddresses;
@property(readonly, copy, nonatomic) NSArray *socialProfiles;
@property(readonly, copy, nonatomic) NSArray *contactRelations;
@property(readonly, copy, nonatomic) NSArray *instantMessageAddresses;
@property(readonly, copy, nonatomic) NSArray *dates;
@property(readonly, copy, nonatomic) NSArray *urlAddresses;
@property(readonly, copy, nonatomic) NSArray *emailAddresses;
@property(readonly, copy, nonatomic) NSArray *phoneNumbers;
@property(readonly, nonatomic) long long contactType;
@property(readonly, nonatomic, getter=isPreferredForImage) _Bool preferredForImage;
- (_Bool)preferredForImage;
@property(readonly, nonatomic, getter=isPreferredForName) _Bool preferredForName;
- (_Bool)preferredForName;
@property(readonly, copy, nonatomic) NSString *linkIdentifier;
@property(readonly, copy, nonatomic) NSData *fullscreenImageData;
@property(readonly, nonatomic) _Bool imageDataAvailable;
@property(readonly, copy, nonatomic) NSData *thumbnailImageData;
@property(readonly, nonatomic) struct CGRect cropRect;
@property(readonly, copy, nonatomic) NSData *imageData;
@property(readonly, copy, nonatomic) NSString *note;
@property(readonly, copy, nonatomic) NSDateComponents *nonGregorianBirthday;
@property(readonly, copy, nonatomic) NSDateComponents *birthday;
@property(readonly, copy, nonatomic) NSString *jobTitle;
@property(readonly, copy, nonatomic) NSString *departmentName;
@property(readonly, copy, nonatomic) NSString *organizationName;
@property(readonly, copy, nonatomic) NSString *sectionForSortingByGivenName;
@property(readonly, copy, nonatomic) NSString *sectionForSortingByFamilyName;
@property(readonly, copy, nonatomic) NSString *pronunciationFamilyName;
@property(readonly, copy, nonatomic) NSString *pronunciationGivenName;
@property(readonly, copy, nonatomic) NSString *phoneticOrganizationName;
@property(readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property(readonly, copy, nonatomic) NSString *phoneticMiddleName;
@property(readonly, copy, nonatomic) NSString *phoneticGivenName;
@property(readonly, copy, nonatomic) NSString *nickname;
@property(readonly, copy, nonatomic) NSString *previousFamilyName;
@property(readonly, copy, nonatomic) NSString *nameSuffix;
@property(readonly, copy, nonatomic) NSString *familyName;
@property(readonly, copy, nonatomic) NSString *middleName;
@property(readonly, copy, nonatomic) NSString *givenName;
@property(readonly, copy, nonatomic) NSString *namePrefix;
@property(readonly, nonatomic) int iOSLegacyIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_filteredArrayForValidValues:(id)arg1;
- (id)_searchableItemIncludingInternalAttributes:(_Bool)arg1;
- (id)searchableItemAttributeSetForUserActivity;
- (id)searchableItemForDragging;
- (id)searchableItemForIndexing;
- (_Bool)overwritePerson:(void *)arg1 error:(id *)arg2;
- (_Bool)overwritePerson:(void *)arg1;
- (void *)detachedPersonWithError:(id *)arg1;
- (void *)detachedPerson;
- (_Bool)updateNewPublicABPerson:(void *)arg1 inAddressBook:(void *)arg2;
- (_Bool)overwritePublicABPerson:(void *)arg1;
@property(readonly, copy, nonatomic) NSArray *relatedNames;
@property(readonly, copy) NSString *companyName;
@property(readonly, copy) NSString *phoneticLastName;
@property(readonly, copy) NSString *phoneticFirstName;
@property(readonly, copy) NSString *maidenName;
@property(readonly, copy) NSString *lastName;
@property(readonly, copy) NSString *firstName;
@property(readonly, copy) NSString *nameTitle;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property(readonly, nonatomic) _Bool hasSuggestedProperties;
- (id)copyWithNoSuggestion;
@property(readonly, nonatomic) NSString *suggestionFoundInBundleId;
@property(readonly, nonatomic) SGRecordId *suggestionRecordId;
@property(readonly, nonatomic, getter=isSuggestedMe) _Bool suggestedMe;
@property(readonly, nonatomic, getter=isSuggested) _Bool suggested;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

