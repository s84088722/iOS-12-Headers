//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFMerging-Protocol.h>

@class HAPAccessoryServer, NSArray, NSNumber, NSObject, NSString;
@protocol HAPAccessoryDelegate, OS_dispatch_queue;

@interface HAPAccessory : HMFObject <HMFMerging>
{
    _Bool _reachable;
    _Bool _primary;
    _Bool _supportsRelay;
    id <HAPAccessoryDelegate> _delegate;
    HAPAccessoryServer *_server;
    NSString *_identifier;
    NSNumber *_instanceID;
    NSArray *_services;
    NSString *_serverIdentifier;
    long long _linkType;
    NSString *_uniqueIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (_Bool)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1;
+ (id)instanceIDForUniqueIdentifier:(id)arg1;
+ (id)serverIdentifierWithUniqueIdentifier:(id)arg1;
+ (_Bool)isAccessoryPairedWithIdentifier:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) _Bool supportsRelay; // @synthesize supportsRelay=_supportsRelay;
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(nonatomic) __weak HAPAccessoryServer *server; // @synthesize server=_server;
@property(nonatomic) __weak id <HAPAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (id)characteristicOfType:(id)arg1 serviceType:(id)arg2;
- (id)characteristicsOfType:(id)arg1;
- (id)servicesOfType:(id)arg1;
- (_Bool)validateCharacteristicValues:(id *)arg1;
- (void)invalidate;
- (_Bool)_updateForAccessoryInformationService;
- (_Bool)_updateService:(id)arg1;
- (_Bool)_updateAndValidateServices;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSNumber *category;
- (void)_setReachable:(_Bool)arg1;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (_Bool)_isReachable;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

