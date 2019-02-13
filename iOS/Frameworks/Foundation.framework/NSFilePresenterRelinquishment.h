//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject
{
    NSCountedSet *_blockingAccessClaimIDs;
    NSMutableArray *_relinquishReplies;
    CDUnknownBlockType _reacquirer;
    _Bool _prerelinquishInProgress;
    NSMutableArray *_blockingPrerelinquishReplies;
}

- (void)didRelinquish;
- (void)addPrerelinquishReply:(CDUnknownBlockType)arg1;
- (void)addRelinquishReply:(CDUnknownBlockType)arg1;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)setReacquirer:(CDUnknownBlockType)arg1;
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

