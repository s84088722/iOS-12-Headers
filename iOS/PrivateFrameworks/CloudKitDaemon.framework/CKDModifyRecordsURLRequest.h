//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordsURLRequest : CKDURLRequest
{
    _Bool _atomic;
    _Bool _oplock;
    _Bool _sendAllFields;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    CDUnknownBlockType _recordPostedBlock;
    NSArray *_records;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    NSMutableDictionary *_recordIDByRequestID;
    NSMutableDictionary *_recordByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *recordByRequestID; // @synthesize recordByRequestID=_recordByRequestID;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(nonatomic) _Bool sendAllFields; // @synthesize sendAllFields=_sendAllFields;
@property(nonatomic) _Bool oplock; // @synthesize oplock=_oplock;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(copy, nonatomic) CDUnknownBlockType recordPostedBlock; // @synthesize recordPostedBlock=_recordPostedBlock;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (int)isolationLevel;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (_Bool)allowsAnonymousAccount;
- (int)operationType;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(_Bool)arg3 sendAllFields:(_Bool)arg4 clientChangeTokenData:(id)arg5;

@end

