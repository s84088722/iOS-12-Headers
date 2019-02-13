//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase
{
    NSString *_payloadEncryptionAlgorithm;
    NSString *_payloadIntegrityAlgorithm;
    NSNumber *_payloadDiffieHellmanGroup;
    NSNumber *_payloadLifeTimeInMinutes;
}

+ (id)buildRequiredOnly;
+ (id)buildWithEncryptionAlgorithm:(id)arg1 withIntegrityAlgorithm:(id)arg2 withDiffieHellmanGroup:(id)arg3 withLifeTimeInMinutes:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadLifeTimeInMinutes; // @synthesize payloadLifeTimeInMinutes=_payloadLifeTimeInMinutes;
@property(copy, nonatomic) NSNumber *payloadDiffieHellmanGroup; // @synthesize payloadDiffieHellmanGroup=_payloadDiffieHellmanGroup;
@property(copy, nonatomic) NSString *payloadIntegrityAlgorithm; // @synthesize payloadIntegrityAlgorithm=_payloadIntegrityAlgorithm;
@property(copy, nonatomic) NSString *payloadEncryptionAlgorithm; // @synthesize payloadEncryptionAlgorithm=_payloadEncryptionAlgorithm;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

