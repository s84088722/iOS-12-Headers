//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDRecordPCSData, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation
{
    _Bool _serverRecordHasNoProtectionData;
    NSString *_serverRecordType;
}

@property(retain, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;
@property(nonatomic) _Bool serverRecordHasNoProtectionData; // @synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData;
- (void).cxx_destruct;
- (_Bool)_savePCSDataToCache;
- (_Bool)_decryptPCS;
- (_Bool)_decryptRecordPCSInSharedDatabase;
- (_Bool)_decryptRecordPCSInPrivateDatabase;
- (_Bool)_fetchDependentPCS;
- (_Bool)_fetchDependentPCSInSharedDatabase;
- (_Bool)_fetchPCSForPrivateZone;
- (_Bool)_createAdditionalPCS;
- (_Bool)_fetchPCSDataFromServer;
- (_Bool)_fetchPCSDataFromDatabase;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (_Bool)hasAllPCSData;
- (_Bool)needsChainPCSCreation;
- (id)itemTypeName;
@property(retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property(readonly, nonatomic) CKRecordID *recordID;

@end

