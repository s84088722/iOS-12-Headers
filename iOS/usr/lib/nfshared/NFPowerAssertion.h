//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NFPowerAssertion : NSObject
{
    unsigned int _powerNotificationConnection;
    struct IONotificationPort *_powerNotificationPort;
    unsigned int _powerNotificationNotifier;
    unsigned int _assertionID;
    NSMutableArray *_assertionHolders;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_powerAssertTransaction;
}

+ (id)sharedPowerAssertion;
- (void)releasePowerAssertion:(id)arg1;
- (void)holdPowerAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

