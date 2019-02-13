//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@class MTAlarmStorage, NSString;
@protocol MTSyncService;

@interface MTSyncCommandListener : NSObject <MTAgentNotificationListener>
{
    id <MTSyncService> _service;
    MTAlarmStorage *_alarmStorage;
}

@property(retain, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) id <MTSyncService> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (id)_supportedNotificationNames;
- (id)initWithService:(id)arg1 alarmStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

