//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNPromise;
@protocol DonationAgentProtocol;

@interface _CNDonationAgentXPCMethodScope : NSObject
{
    id <DonationAgentProtocol> _proxy;
    CNPromise *_promise;
}

@property(readonly, nonatomic) CNPromise *promise; // @synthesize promise=_promise;
@property(readonly, nonatomic) id <DonationAgentProtocol> proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (id)initWithPromise:(id)arg1 proxy:(id)arg2;
- (id)initWithConnection:(id)arg1 promise:(id)arg2 proxy:(id)arg3;
- (id)init;

@end
