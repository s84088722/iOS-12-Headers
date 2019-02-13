//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase
{
    NSString *_payloadType;
    NSString *_payloadFirst;
    NSString *_payloadLast;
}

+ (id)buildRequiredOnlyWithFirst:(id)arg1 withLast:(id)arg2;
+ (id)buildWithType:(id)arg1 withFirst:(id)arg2 withLast:(id)arg3;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadLast; // @synthesize payloadLast=_payloadLast;
@property(copy, nonatomic) NSString *payloadFirst; // @synthesize payloadFirst=_payloadFirst;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

