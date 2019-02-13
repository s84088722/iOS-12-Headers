//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecord, CKRecordID, CKShare, CKShareParticipant, CKUserIdentity, NSArray, NSData, NSString;

@interface CKShareMetadata : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _acceptedInProcess;
    NSString *_containerIdentifier;
    CKShare *_share;
    CKRecordID *_rootRecordID;
    long long _participantRole;
    long long _participantStatus;
    long long _participantPermission;
    CKUserIdentity *_ownerIdentity;
    CKRecord *_rootRecord;
    long long _environment;
    NSData *_protectedFullToken;
    NSData *_publicToken;
    NSData *_privateToken;
    CKShareParticipant *_callingParticipant;
    NSArray *_outOfNetworkMatches;
    NSArray *_sharedItemHierarchy;
    NSString *_rootRecordType;
    NSData *_encryptedData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(retain, nonatomic) NSString *rootRecordType; // @synthesize rootRecordType=_rootRecordType;
@property(copy, nonatomic) NSArray *sharedItemHierarchy; // @synthesize sharedItemHierarchy=_sharedItemHierarchy;
@property(retain, nonatomic) NSArray *outOfNetworkMatches; // @synthesize outOfNetworkMatches=_outOfNetworkMatches;
@property(copy, nonatomic) CKShareParticipant *callingParticipant; // @synthesize callingParticipant=_callingParticipant;
@property(copy, nonatomic) NSData *privateToken; // @synthesize privateToken=_privateToken;
@property(copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(copy, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CKRecord *rootRecord; // @synthesize rootRecord=_rootRecord;
@property(retain, nonatomic) CKUserIdentity *ownerIdentity; // @synthesize ownerIdentity=_ownerIdentity;
@property(nonatomic) long long participantPermission; // @synthesize participantPermission=_participantPermission;
@property(nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(nonatomic) long long participantRole; // @synthesize participantRole=_participantRole;
@property(copy, nonatomic) CKRecordID *rootRecordID; // @synthesize rootRecordID=_rootRecordID;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long participantType;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)ckShortDescription;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
@property(readonly, nonatomic, getter=baseToken) NSString *baseToken;
- (id)init;

@end

