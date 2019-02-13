//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject
{
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)availabilityForListenerID:(id)arg1 forService:(id)arg2;
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;
- (_Bool)addListenerID:(id)arg1 forService:(id)arg2;
- (_Bool)hasListenerID:(id)arg1 forService:(id)arg2;
- (id)containerForService:(id)arg1 create:(_Bool)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (void)_postNotificationForService:(id)arg1 availability:(long long)arg2;
- (_Bool)_isValidServiceType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

