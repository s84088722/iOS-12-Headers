//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseManager : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)checkPreflightForItemIdentifier:(id)arg1 atURL:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)startPurchase:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)adoptableBundleIdentifiers;
- (id)adopt:(id)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

