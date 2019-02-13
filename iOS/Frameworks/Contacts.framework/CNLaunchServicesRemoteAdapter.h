//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNLaunchServicesAdapter-Protocol.h>

@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>
{
}

+ (id)createConnectionWithInterface:(id)arg1;
+ (id)launchServicesAdapterInterface;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end
