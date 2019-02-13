//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMNetworkCellularDeclaration_AttachAPN : CEMPayloadBase
{
    NSString *_payloadName;
    NSString *_payloadAuthenticationType;
    NSString *_payloadUsername;
    NSString *_payloadPassword;
    NSNumber *_payloadAllowedProtocolMask;
}

+ (id)buildRequiredOnlyWithName:(id)arg1;
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withAllowedProtocolMask:(id)arg5;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadAllowedProtocolMask; // @synthesize payloadAllowedProtocolMask=_payloadAllowedProtocolMask;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUsername; // @synthesize payloadUsername=_payloadUsername;
@property(copy, nonatomic) NSString *payloadAuthenticationType; // @synthesize payloadAuthenticationType=_payloadAuthenticationType;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

