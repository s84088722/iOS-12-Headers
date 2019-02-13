//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FPDLifetimeExtender-Protocol.h"
#import "FPXEnumeratorObserver-Protocol.h"

@class FPDExtension, FPItem, NSData, NSString, NSURL;
@protocol FPXEnumerator, OS_dispatch_queue;

@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender>
{
    id <FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    FPDExtension *_provider;
    NSData *_changeToken;
    FPItem *_currentItem;
    _Bool _isFetchingChanges;
    _Bool _shouldRefetchChanges;
    _Bool _presenterWantsUbiqitousAttributes;
    _Bool _isEnumeratorActive;
    int _requestEffectivePID;
    int _presenterPid;
    NSURL *_presentedItemURL;
    id _filePresenterID;
    NSString *_observedItemIdentifierOrNil;
}

+ (id)presenter:(id)arg1 withURL:(id)arg2 pid:(int)arg3;
@property(nonatomic) int presenterPid; // @synthesize presenterPid=_presenterPid;
@property(readonly, nonatomic) NSString *observedItemIdentifierOrNil; // @synthesize observedItemIdentifierOrNil=_observedItemIdentifierOrNil;
@property(nonatomic) _Bool isEnumeratorActive; // @synthesize isEnumeratorActive=_isEnumeratorActive;
@property(copy, nonatomic) id filePresenterID; // @synthesize filePresenterID=_filePresenterID;
@property(copy, nonatomic) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(readonly) int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;
- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (void)_fetchUpdates;
- (void)_fetchChangeToken;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (id)_newCoordinator;
- (void)receiveUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)_destroyEnumerator;
- (void)_enumeratorRequestDidFailWithXPCError:(id)arg1 section:(unsigned long long)arg2;
- (void)stop;
- (void)start;
- (id)enumerator;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 url:(id)arg2 pid:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

