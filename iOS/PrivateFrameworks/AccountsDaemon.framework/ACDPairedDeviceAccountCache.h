//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACDPairedDeviceAccountCache : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    _Bool _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_didFetchAccounts:(id)arg1 error:(id)arg2;
- (void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

