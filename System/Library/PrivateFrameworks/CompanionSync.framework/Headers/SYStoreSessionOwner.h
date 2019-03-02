//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYSessionDelegate-Protocol.h>

@class NSDictionary, NSString, SYSession, SYStore;

__attribute__((visibility("hidden")))
@interface SYStoreSessionOwner : NSObject <SYSessionDelegate>
{
    NSDictionary *_context;
    NSDictionary *_idsOptions;
    SYStore *_store;
    CDUnknownBlockType _errorCallback;
    CDUnknownBlockType _onComplete;
    SYSession *_session;
}

@property(retain, nonatomic) SYSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(nonatomic) __weak SYStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (void)syncSession:(id)arg1 applyChanges:(struct NSArray *)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)syncSession:(id)arg1 rollbackChangesWithError:(id *)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isResetSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
