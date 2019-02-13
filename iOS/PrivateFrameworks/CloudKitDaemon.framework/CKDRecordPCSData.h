//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKDChainPCSData, CKDSharePCSData, CKDZonePCSData, CKEncryptedData, CKRecordID, CKRecordZoneID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDRecordPCSData : CKDPCSData
{
    CKRecordID *_recordID;
    NSString *_recordType;
    CKRecordID *_parentID;
    CKDRecordPCSData *_parentPCSData;
    NSData *_chainParentPublicKeyID;
    CKDZonePCSData *_zonePCSData;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPublicKeyID;
    CKDSharePCSData *_sharePCSData;
    CKRecordID *_shareID;
    CKDChainPCSData *_chainPCSData;
    CKEncryptedData *_encryptedPublicSharingKey;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataWithRecord:(id)arg1;
@property(retain, nonatomic) CKEncryptedData *encryptedPublicSharingKey; // @synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey;
@property(retain, nonatomic) CKDChainPCSData *chainPCSData; // @synthesize chainPCSData=_chainPCSData;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) NSData *zoneishPublicKeyID; // @synthesize zoneishPublicKeyID=_zoneishPublicKeyID;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKDZonePCSData *zonePCSData; // @synthesize zonePCSData=_zonePCSData;
@property(retain, nonatomic) NSData *chainParentPublicKeyID; // @synthesize chainParentPublicKeyID=_chainParentPublicKeyID;
@property(retain, nonatomic) CKDRecordPCSData *parentPCSData; // @synthesize parentPCSData=_parentPCSData;
@property(retain, nonatomic) CKRecordID *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (_Bool)shouldEncodePCSData;
- (id)itemID;
- (id)initWithRecord:(id)arg1;
- (id)initWithPCSData:(id)arg1 recordID:(id)arg2;

@end

