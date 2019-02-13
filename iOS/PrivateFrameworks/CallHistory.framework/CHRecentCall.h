//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHSynchronizable.h>

#import <CallHistory/NSCopying-Protocol.h>
#import <CallHistory/NSSecureCoding-Protocol.h>

@class CHHandle, CNContact, NSDate, NSMutableArray, NSNumber, NSSet, NSString, NSUUID, NSValue;
@protocol CHPhoneBookManagerProtocol;

@interface CHRecentCall : CHSynchronizable <NSSecureCoding, NSCopying>
{
    _Bool _read;
    _Bool _callerIdIsBlocked;
    _Bool _multiCall;
    _Bool _answered;
    _Bool _mobileOriginated;
    unsigned int _callerIdAvailability;
    unsigned int _callStatus;
    unsigned int _callCategory;
    unsigned int _callType;
    NSString *_callerNetworkName;
    long long _handleType;
    NSUUID *_localParticipantUUID;
    NSUUID *_outgoingLocalParticipantUUID;
    NSSet *_remoteParticipantHandles;
    CHHandle *_localParticipantHandle;
    NSString *_uniqueId;
    NSString *_serviceProvider;
    NSNumber *_bytesOfDataUsed;
    NSDate *_date;
    double _duration;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    unsigned long long _unreadCount;
    NSString *_clientAddressBookRecordId;
    NSString *_contactIdentifier;
    long long _mediaType;
    long long _ttyType;
    NSNumber *_timeToEstablish;
    NSValue *_addressBookRecordRef;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    NSString *_callerName;
    NSMutableArray *_callOccurrences;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    CNContact *_contactRef;
    NSString *_callerIdFormatted;
    id <CHPhoneBookManagerProtocol> _phoneBookManager;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned int)getCallTypeForCategory:(unsigned int)arg1 andServiceProvider:(id)arg2;
+ (id)serviceProviderForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2;
+ (long long)ttyTypeForCallCategory:(unsigned int)arg1;
+ (long long)mediaTypeForCallCategory:(unsigned int)arg1;
+ (id)callCategoryAsString:(unsigned int)arg1;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (id)callHandleTypeAsString:(long long)arg1;
+ (id)callTTYTypeAsString:(long long)arg1;
+ (id)callMediaTypeAsString:(long long)arg1;
+ (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
@property _Bool mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
@property _Bool answered; // @synthesize answered=_answered;
@property(retain) id <CHPhoneBookManagerProtocol> phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
@property(copy, nonatomic, getter=callerIdForDisplay) NSString *callerIdFormatted; // @synthesize callerIdFormatted=_callerIdFormatted;
@property(copy, nonatomic) CNContact *contactRef; // @synthesize contactRef=_contactRef;
@property _Bool multiCall; // @synthesize multiCall=_multiCall;
@property(copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property(copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
@property(retain, nonatomic) NSMutableArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(copy) NSString *callerId; // @synthesize callerId=_callerId;
@property(copy) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property(nonatomic) unsigned int callCategory; // @synthesize callCategory=_callCategory;
@property(copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
@property(copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
@property(copy) NSValue *addressBookRecordRef; // @synthesize addressBookRecordRef=_addressBookRecordRef;
@property(copy, nonatomic) NSNumber *timeToEstablish; // @synthesize timeToEstablish=_timeToEstablish;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy) NSString *clientAddressBookRecordId; // @synthesize clientAddressBookRecordId=_clientAddressBookRecordId;
@property unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property(copy) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property _Bool callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property(copy) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property(copy) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property(copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) CHHandle *localParticipantHandle; // @synthesize localParticipantHandle=_localParticipantHandle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)fixCallTypeInfo;
- (void)updateTTYAndMediaType;
- (id)callOccurrencesAsStringSync;
- (id)description;
- (id)descriptionInDepth;
- (_Bool)isAddressBookContactASuggestion;
- (_Bool)isAddressBookContactASuggestionSync;
- (_Bool)representsCallAtDate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)callerIdSubStringForDisplay;
- (id)callerIdLocationSync;
- (id)callerIdLabelSync;
- (id)callerIdForDisplaySync;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)callerNameSync;
@property(copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property(nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
- (_Bool)callerIdIsEmailAddress;
- (_Bool)callerIdIsEmailAddressSync;
@property(nonatomic) long long handleType; // @synthesize handleType=_handleType;
- (long long)handleTypeSync;
- (id)addressBookRecordRefSync;
- (id)addressBookRecordIdSync;
- (id)contactRefSync;
- (id)contactIdentifierSync;
- (void)fetchAndSetFullContactSync;
- (void)fetchAndSetContactIdentifierSync;
@property(nonatomic) _Bool read; // @synthesize read=_read;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSUUID *outgoingLocalParticipantUUID; // @synthesize outgoingLocalParticipantUUID=_outgoingLocalParticipantUUID;
@property(retain, nonatomic) NSUUID *localParticipantUUID; // @synthesize localParticipantUUID=_localParticipantUUID;
- (void)createOccurrenceArraySync;
- (id)callOccurrencesSync;
- (unsigned long long)numberOfOccurrences;
- (unsigned long long)numberOfOccurrencesSync;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (_Bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (_Bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (_Bool)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (_Bool)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (_Bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (void)addressBookChanged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;

@end

