//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRCarKitServiceClient;

@interface CRPairedVehicleManager : NSObject
{
    CRCarKitServiceClient *_serviceClient;
}

@property(retain, nonatomic) CRCarKitServiceClient *serviceClient; // @synthesize serviceClient=_serviceClient;
- (void).cxx_destruct;
- (id)vehicleForCertificateSerial:(id)arg1;
- (id)vehicleNameForWiFiUUID:(id)arg1;
- (id)vehicleForBluetoothAddress:(id)arg1;
- (id)pairedVehicles;
- (id)allVehicles;
- (_Bool)removeVehicle:(id)arg1;
- (id)saveVehicle:(id)arg1;
- (id)init;

@end

