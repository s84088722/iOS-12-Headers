//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol MediaSocialAuthenticationDelegate, OS_dispatch_queue;

@interface MediaSocialAuthenticationCoordinator : NSObject
{
    id <MediaSocialAuthenticationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISOperationQueue *_operationQueue;
    NSMutableArray *_pendingResponses;
}

@property(nonatomic) __weak id <MediaSocialAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_newAuthenticateOperationWithAccountIdentifier:(id)arg1;
- (void)_finishResponse:(id)arg1;
- (id)_enqueueOperationIfNecessaryWithAccountIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (void)authenticateForUploadWithIdentifier:(long long)arg1 accountIdentifier:(id)arg2;
- (void)authenticateForPostWithIdentifier:(long long)arg1 accountIdentifier:(id)arg2;
- (id)initWithDispatchQueue:(id)arg1;

@end

