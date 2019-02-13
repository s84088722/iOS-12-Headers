//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataContextInternal-Protocol.h>

@class FCCKPrivateDatabase, FCCKRecordZone, FCCKRecordZoneManager, NSString;
@protocol FCAppActivityMonitor;

@interface FCPrivateDataContextInternal : NSObject <FCPrivateDataContextInternal>
{
    FCCKPrivateDatabase *_privateDatabase;
    id <FCAppActivityMonitor> _appActivityMonitor;
    FCCKRecordZoneManager *_recordZoneManager;
}

@property(retain, nonatomic) FCCKRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(retain, nonatomic) id <FCAppActivityMonitor> appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
@property(retain, nonatomic) FCCKPrivateDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
- (void).cxx_destruct;
- (void)prepareRecordZonesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)recordZoneWithName:(id)arg1;
@property(readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

