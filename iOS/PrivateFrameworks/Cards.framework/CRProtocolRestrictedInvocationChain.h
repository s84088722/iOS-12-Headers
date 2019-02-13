//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cards/CRInvocationChain.h>

#import <Cards/CRInvocationChainDelegate-Protocol.h>

@class NSString, Protocol;
@protocol CRInvocationChainDelegate;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate>
{
    Protocol *_restrictingProtocol;
}

@property(retain, nonatomic) Protocol *restrictingProtocol; // @synthesize restrictingProtocol=_restrictingProtocol;
- (void).cxx_destruct;
- (_Bool)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2;
- (_Bool)_selectorIsPartOfRestrictingProtocol:(SEL)arg1;
- (_Bool)isEligibleForSelector:(SEL)arg1;
- (_Bool)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CRInvocationChainDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
