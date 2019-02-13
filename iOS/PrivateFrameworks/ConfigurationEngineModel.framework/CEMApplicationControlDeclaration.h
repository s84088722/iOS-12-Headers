//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMApplicationControlDeclaration_InstallSchedule, CEMApplicationControlDeclaration_UpdateSchedule, NSString;

@interface CEMApplicationControlDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    CEMApplicationControlDeclaration_InstallSchedule *_payloadInstallSchedule;
    NSString *_payloadUpdatePolicy;
    CEMApplicationControlDeclaration_UpdateSchedule *_payloadUpdateSchedule;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withInstallSchedule:(id)arg2 withUpdatePolicy:(id)arg3 withUpdateSchedule:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMApplicationControlDeclaration_UpdateSchedule *payloadUpdateSchedule; // @synthesize payloadUpdateSchedule=_payloadUpdateSchedule;
@property(copy, nonatomic) NSString *payloadUpdatePolicy; // @synthesize payloadUpdatePolicy=_payloadUpdatePolicy;
@property(copy, nonatomic) CEMApplicationControlDeclaration_InstallSchedule *payloadInstallSchedule; // @synthesize payloadInstallSchedule=_payloadInstallSchedule;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

