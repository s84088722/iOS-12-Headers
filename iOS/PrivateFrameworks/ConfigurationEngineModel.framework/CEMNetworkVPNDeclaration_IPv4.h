//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase
{
    NSNumber *_payloadOverridePrimary;
}

+ (id)buildRequiredOnly;
+ (id)buildWithOverridePrimary:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadOverridePrimary; // @synthesize payloadOverridePrimary=_payloadOverridePrimary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

