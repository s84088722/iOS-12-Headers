//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class BKSProcessAssertion, CLInUseAssertion, HDXPCClient;

@interface _HDBackgroundRunningAssertion : HDAssertion
{
    _Bool _shouldAcquireCLAssertion;
    HDXPCClient *_client;
    BKSProcessAssertion *_bksAssertion;
    CLInUseAssertion *_coreLocationAssertion;
}

@property(retain, nonatomic) CLInUseAssertion *coreLocationAssertion; // @synthesize coreLocationAssertion=_coreLocationAssertion;
@property(retain, nonatomic) BKSProcessAssertion *bksAssertion; // @synthesize bksAssertion=_bksAssertion;
@property(readonly, nonatomic) _Bool shouldAcquireCLAssertion; // @synthesize shouldAcquireCLAssertion=_shouldAcquireCLAssertion;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 client:(id)arg2 shouldAcquireCLAssertion:(_Bool)arg3;

@end
