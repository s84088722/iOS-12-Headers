//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTrainingProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface PMLTrainingMock : NSObject <PMLTrainingProtocol>
{
    NSMutableArray *_internalCollectedSessions;
    NSArray *_collectedSessions;
}

@property(readonly) NSArray *collectedSessions; // @synthesize collectedSessions=_collectedSessions;
- (void).cxx_destruct;
- (void)clearCollectedSessions;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)planReceivedWithPayload:(id)arg1 error:(id *)arg2;
- (_Bool)modelServerUpdateWithPayload:(id)arg1 error:(id *)arg2;
- (void)trimDb;
- (void)trainWhile:(CDUnknownBlockType)arg1;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(_Bool)arg6;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

