//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase
{
    NSString *_payloadIdentifier;
    NSString *_payloadVPNUUID;
    NSString *_payloadDesignatedRequirement;
    NSString *_payloadSigningIdentifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadSigningIdentifier; // @synthesize payloadSigningIdentifier=_payloadSigningIdentifier;
@property(copy, nonatomic) NSString *payloadDesignatedRequirement; // @synthesize payloadDesignatedRequirement=_payloadDesignatedRequirement;
@property(copy, nonatomic) NSString *payloadVPNUUID; // @synthesize payloadVPNUUID=_payloadVPNUUID;
@property(copy, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

