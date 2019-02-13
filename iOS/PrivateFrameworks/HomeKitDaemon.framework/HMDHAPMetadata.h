//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMProtoBufEncode-Protocol.h>

@class HAPMetadata, NSDictionary, NSNumber, NSSet, NSString;

@interface HMDHAPMetadata : HMFObject <HMProtoBufEncode>
{
    _Bool _incomplete;
    NSNumber *_version;
    NSNumber *_schemaVersion;
    NSDictionary *_rawPlist;
    HAPMetadata *_hapMetadata;
    NSSet *_hmRequiresDeviceUnlockTuples;
    NSDictionary *_hmAllowableSecuringWrites;
    NSDictionary *_hmAccessoryCategories;
    NSSet *_hmBlacklistedServices;
    NSSet *_hmBlacklistedCharacteristics;
    NSSet *_hmBlacklistedServicesFromApp;
    NSSet *_hmBlacklistedCharacteristicsFromApp;
    NSSet *_hmNotificationAutoEnabledTuples;
    NSSet *_hmBulletinBoardEnabledTuples;
    NSSet *_hmCoalesceNotificationsTuples;
    NSDictionary *_assistantServiceNameHAPTypeMap;
    NSDictionary *_assistantServiceHAPTypeNameMap;
    NSDictionary *_assistantCharacteristics;
    NSDictionary *_assistantChrHAPTypeNameMap;
    NSDictionary *_assistantUnits;
}

+ (_Bool)isHomedVersionSupported:(id)arg1;
+ (void)resetShouldUploadToCloudAfterHomedReady;
+ (_Bool)shouldUploadToCloudAfterHomedReady;
+ (void)prepareMetadata;
+ (id)dataFromMetadataDictionaryWithKey:(id)arg1;
+ (id)legacyV3DataForCloud;
+ (id)legacyV3DataForIDS;
+ (_Bool)setSharedInstance:(id)arg1;
+ (id)getSharedInstance;
+ (id)getBuiltinInstance;
+ (id)initWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)initWithURL:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property(retain, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // @synthesize assistantChrHAPTypeNameMap=_assistantChrHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property(retain, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // @synthesize assistantServiceHAPTypeNameMap=_assistantServiceHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // @synthesize assistantServiceNameHAPTypeMap=_assistantServiceNameHAPTypeMap;
@property(retain, nonatomic) NSSet *hmCoalesceNotificationsTuples; // @synthesize hmCoalesceNotificationsTuples=_hmCoalesceNotificationsTuples;
@property(retain, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property(retain, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // @synthesize hmBlacklistedCharacteristicsFromApp=_hmBlacklistedCharacteristicsFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedServicesFromApp; // @synthesize hmBlacklistedServicesFromApp=_hmBlacklistedServicesFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property(retain, nonatomic) NSSet *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property(retain, nonatomic) NSDictionary *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property(retain, nonatomic) NSDictionary *hmAllowableSecuringWrites; // @synthesize hmAllowableSecuringWrites=_hmAllowableSecuringWrites;
@property(retain, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property(retain, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(nonatomic) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)protoBufObjectWithEncodingOption:(id)arg1;
- (id)statusHAPCharacteristicTypesForServiceType;
- (id)aliasedHAPServiceTypes;
- (id)aliasedHAPCharacteristicTypes;
- (_Bool)checkTupleExistsInSet:(id)arg1 forChrType:(id)arg2 svcType:(id)arg3;
- (_Bool)parseAndSetAssistantUnits:(id)arg1;
- (_Bool)parseAndSetAssistantCharacteristics:(id)arg1;
- (_Bool)parseAndSetAssistantServices:(id)arg1;
- (id)parseCharacteristicArray:(id)arg1;
- (id)parseServiceArray:(id)arg1;
- (void)parseAndSetHMCategories:(id)arg1;
- (void)parseAndSetAllowableSecuringWrites:(id)arg1;
- (id)parseMetadataTupleSetFromPlist:(id)arg1;
- (_Bool)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg1;
- (_Bool)parseAndSetHMMetadataWithHMPlist:(id)arg1;
- (id)parseAndSetRawPlist:(id)arg1;
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(_Bool)arg3;
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapFromAssistantUnitName:(id)arg1;
- (id)mapToAssistantUnitName:(id)arg1;
- (id)mapCharacteristicValueType:(id)arg1;
- (id)characteristicValueUnit:(id)arg1;
- (id)getStatusCharacteristicTypes:(id)arg1 forServiceType:(id)arg2;
- (id)getCharacteristicTypeAlias:(id)arg1;
- (id)getAliasedCharacteristicTypes:(id)arg1;
- (id)getServiceTypeAlias:(id)arg1;
- (id)getAliasedServiceType:(id)arg1;
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;
- (id)mapToAssistantCharacteristicName:(id)arg1;
- (id)mapToAssistantServiceSubtypeName:(id)arg1;
- (id)mapFromAssistantServiceName:(id)arg1;
- (id)mapToAssistantServiceName:(id)arg1;
- (_Bool)supportsLocalization:(id)arg1;
- (id)serviceSubtypeForValue:(id)arg1 forServiceType:(id)arg2;
- (id)categoryForType:(id)arg1;
- (id)categoryForIdentifier:(id)arg1;
- (id)audioAccessoryCategory;
- (id)categoryForOther;
- (_Bool)shouldFilterEnableNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (_Bool)shouldFilterChangeNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (_Bool)shouldHomeAppShowTileForServiceType:(id)arg1;
- (_Bool)shouldAllowHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (_Bool)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;
- (_Bool)isSecondsDownCounterCharacteristicType:(id)arg1;
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (_Bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;
- (_Bool)shouldFilterServiceOfTypeFromApp:(id)arg1;
- (_Bool)shouldFilterCharacteristicOfType:(id)arg1;
- (_Bool)shouldFilterServiceOfType:(id)arg1;
- (_Bool)shouldCoalesceCharacteristicNotifications:(id)arg1 forService:(id)arg2;
- (_Bool)requiresTimedWrite:(id)arg1 forService:(id)arg2;
- (_Bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;
- (_Bool)allowsSecuringWriteFor:(id)arg1 withValue:(id)arg2;
- (id)descriptionForCharacteristicType:(id)arg1;
- (id)descriptionForServiceType:(id)arg1;
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;
- (_Bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;
- (_Bool)isStandardServiceType:(id)arg1;
- (_Bool)isStandardCharacteristicType:(id)arg1;
- (id)serviceTypeFromName:(id)arg1;
- (id)serviceNameFromType:(id)arg1;
- (id)characteristicTypeFromName:(id)arg1;
- (id)characteristicNameFromType:(id)arg1;
- (id)xpcData:(_Bool)arg1;
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

