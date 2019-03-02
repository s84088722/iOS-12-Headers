//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation
{
    _Bool _resultMoreComing;
    FCCKPrivateDatabaseServerChangeToken *_previousServerChangeToken;
    CDUnknownBlockType _fetchDatabaseChangesCompletionBlock;
    NSArray *_resultChangedZoneIDs;
    NSArray *_resultDeletedZoneIDs;
    FCCKPrivateDatabaseServerChangeToken *_resultServerChangeToken;
}

@property(nonatomic) _Bool resultMoreComing; // @synthesize resultMoreComing=_resultMoreComing;
@property(retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(retain, nonatomic) NSArray *resultDeletedZoneIDs; // @synthesize resultDeletedZoneIDs=_resultDeletedZoneIDs;
@property(retain, nonatomic) NSArray *resultChangedZoneIDs; // @synthesize resultChangedZoneIDs=_resultChangedZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType fetchDatabaseChangesCompletionBlock; // @synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock;
@property(copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
