//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

@class NSData;

@interface CKRecord (FCSentinelConvenience)
+ (id)secureSentinelRecordWithEncryptionKey:(id)arg1;
@property(nonatomic) unsigned long long fc_secureSentinel_version;
@property(retain, nonatomic) NSData *fc_secureSentinel_encryptionKey;
@property(nonatomic) unsigned long long fc_sentinel_version;
@property(nonatomic) _Bool fc_sentinel_finishedDeletion;
@property(nonatomic) _Bool fc_sentinel_finishedMigration;
@property(retain, nonatomic) NSData *fc_sentinel_encryptionKey;
@end

