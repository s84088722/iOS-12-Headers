//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class CKRecord, CKRecordID, CKRecordZone, CKRecordZoneID, FCCKPrivateDatabase, NSString;

@protocol FCCKDatabaseRecordMiddleware <NSObject>
- (NSString *)serverToClientRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id *)arg4;
- (NSString *)clientToServerRecordType:(NSString *)arg1 withRecordID:(CKRecordID *)arg2 inDatabase:(FCCKPrivateDatabase *)arg3 error:(id *)arg4;
- (CKRecordZone *)serverToClientRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecordZone *)clientToServerRecordZone:(CKRecordZone *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecord *)serverToClientRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecord *)clientToServerRecord:(CKRecord *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecordZoneID *)serverToClientRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecordZoneID *)clientToServerRecordZoneID:(CKRecordZoneID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecordID *)serverToClientRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (CKRecordID *)clientToServerRecordID:(CKRecordID *)arg1 inDatabase:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
@end

