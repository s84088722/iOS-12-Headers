//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HearingUtilities/AXHearingAidDevice.h>

@class CBPeripheral, NSArray, NSDate, NSMutableArray, NSString;

@interface AXFakeHearingAidDevice : AXHearingAidDevice
{
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    CDUnknownBlockType _writeBlock;
    _Bool _isConnecting;
    _Bool _connected;
    short _leftMicrophoneVolumeSteps;
    short _rightMicrophoneVolumeSteps;
    int _type;
    NSString *_name;
    NSArray *_manufacturer;
    NSArray *_model;
    NSString *_leftUUID;
    NSString *_rightUUID;
    double _rightBatteryLevel;
    double _leftBatteryLevel;
    NSString *_leftFirmwareVersion;
    NSString *_rightFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_rightHardwareVersion;
    NSDate *_leftBatteryLowDate;
    NSDate *_rightBatteryLowDate;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    unsigned long long _excludedProperties;
}

@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) unsigned long long excludedProperties; // @synthesize excludedProperties=_excludedProperties;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) CBPeripheral *rightPeripheral; // @synthesize rightPeripheral;
@property(retain, nonatomic) CBPeripheral *leftPeripheral; // @synthesize leftPeripheral;
@property(nonatomic) short rightMicrophoneVolumeSteps; // @synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps;
@property(nonatomic) short leftMicrophoneVolumeSteps; // @synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps;
@property(retain, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property(retain, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion=_rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion=_leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion=_rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion=_leftFirmwareVersion;
@property(nonatomic) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) double leftBatteryLevel; // @synthesize leftBatteryLevel=_leftBatteryLevel;
@property(nonatomic) double rightBatteryLevel; // @synthesize rightBatteryLevel=_rightBatteryLevel;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID=_rightUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID=_leftUUID;
@property(retain, nonatomic) NSArray *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setNewName:(id)arg1;
- (void)registerWriteBlock:(CDUnknownBlockType)arg1;
- (void)persist;
- (_Bool)didLoadRequiredProperties;
- (_Bool)didLoadBasicProperties;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (id)valueForProperty:(unsigned long long)arg1;
- (id)persistentRepresentation;
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (_Bool)programsListsAreEqual;
- (_Bool)showCombinedPrograms;
- (_Bool)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (_Bool)deviceSupportsProperty:(unsigned long long)arg1;
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;
- (id)rightPrograms;
- (id)leftPrograms;
- (void)createPrograms;
- (_Bool)isPersistent;
- (_Bool)hasConnection;
- (_Bool)isRightConnected;
- (_Bool)isLeftConnected;
- (_Bool)isConnected;
- (_Bool)rightAvailable;
- (_Bool)leftAvailable;
- (void)disconnect;
- (void)connect;
- (id)modelForType;
- (id)manufacturerForType;
- (void)dealloc;
- (id)initWithDeviceType:(int)arg1;

@end

