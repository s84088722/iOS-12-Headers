//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, AKAppleIDServerUIDataHarvester, NSString;
@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitRecoveryHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;
    AAUIServerHookResponse *_serverHookResponse;
    AKAppleIDServerUIDataHarvester *_serverDataHarvester;
}

@property(retain, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester; // @synthesize serverDataHarvester=_serverDataHarvester;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse; // @synthesize serverHookResponse=_serverHookResponse;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)harvestDataFromResponse:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (_Bool)shouldMatchElement:(id)arg1;
- (id)_cdpStateUIProvider;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

