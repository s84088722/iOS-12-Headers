//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@protocol _INPBSetClimateSettingsInCarIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTemperature;
@property(retain, nonatomic) _INPBTemperature *temperature;
@property(nonatomic) _Bool hasRelativeTemperatureSetting;
@property(nonatomic) int relativeTemperatureSetting;
@property(nonatomic) _Bool hasRelativeFanSpeedSetting;
@property(nonatomic) int relativeFanSpeedSetting;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasFanSpeedPercentage;
@property(retain, nonatomic) _INPBDouble *fanSpeedPercentage;
@property(readonly, nonatomic) _Bool hasFanSpeedIndex;
@property(retain, nonatomic) _INPBInteger *fanSpeedIndex;
@property(nonatomic) _Bool hasEnableFan;
@property(nonatomic) _Bool enableFan;
@property(nonatomic) _Bool hasEnableClimateControl;
@property(nonatomic) _Bool enableClimateControl;
@property(nonatomic) _Bool hasEnableAutoMode;
@property(nonatomic) _Bool enableAutoMode;
@property(nonatomic) _Bool hasEnableAirConditioner;
@property(nonatomic) _Bool enableAirConditioner;
@property(nonatomic) _Bool hasClimateZone;
@property(nonatomic) int climateZone;
@property(readonly, nonatomic) _Bool hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
@property(nonatomic) _Bool hasAirCirculationMode;
@property(nonatomic) int airCirculationMode;
- (int)StringAsRelativeTemperatureSetting:(NSString *)arg1;
- (NSString *)relativeTemperatureSettingAsString:(int)arg1;
- (int)StringAsRelativeFanSpeedSetting:(NSString *)arg1;
- (NSString *)relativeFanSpeedSettingAsString:(int)arg1;
- (int)StringAsClimateZone:(NSString *)arg1;
- (NSString *)climateZoneAsString:(int)arg1;
- (int)StringAsAirCirculationMode:(NSString *)arg1;
- (NSString *)airCirculationModeAsString:(int)arg1;
@end
