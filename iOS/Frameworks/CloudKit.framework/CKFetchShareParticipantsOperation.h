//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareParticipantsOperation : CKOperation
{
    CDUnknownBlockType _shareParticipantFetchedBlock;
    CDUnknownBlockType _fetchShareParticipantsCompletionBlock;
    NSArray *_userIdentityLookupInfos;
    NSMutableSet *_discoveredUserIdentities;
    NSMutableDictionary *_lookupErrors;
}

@property(retain, nonatomic) NSMutableDictionary *lookupErrors; // @synthesize lookupErrors=_lookupErrors;
@property(retain, nonatomic) NSMutableSet *discoveredUserIdentities; // @synthesize discoveredUserIdentities=_discoveredUserIdentities;
@property(copy, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType fetchShareParticipantsCompletionBlock; // @synthesize fetchShareParticipantsCompletionBlock=_fetchShareParticipantsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantFetchedBlock; // @synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (id)init;

@end

