//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadRestrictWeb;
    NSNumber *_payloadUseContentFilter;
    NSNumber *_payloadWhiteListEnabled;
    NSArray *_payloadSiteWhiteList;
    NSArray *_payloadFilterWhiteList;
    NSArray *_payloadFilterBlackList;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 withUseContentFilter:(id)arg3 withWhiteListEnabled:(id)arg4 withSiteWhiteList:(id)arg5 withFilterWhiteList:(id)arg6 withFilterBlackList:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadFilterBlackList; // @synthesize payloadFilterBlackList=_payloadFilterBlackList;
@property(copy, nonatomic) NSArray *payloadFilterWhiteList; // @synthesize payloadFilterWhiteList=_payloadFilterWhiteList;
@property(copy, nonatomic) NSArray *payloadSiteWhiteList; // @synthesize payloadSiteWhiteList=_payloadSiteWhiteList;
@property(copy, nonatomic) NSNumber *payloadWhiteListEnabled; // @synthesize payloadWhiteListEnabled=_payloadWhiteListEnabled;
@property(copy, nonatomic) NSNumber *payloadUseContentFilter; // @synthesize payloadUseContentFilter=_payloadUseContentFilter;
@property(copy, nonatomic) NSNumber *payloadRestrictWeb; // @synthesize payloadRestrictWeb=_payloadRestrictWeb;
- (void).cxx_destruct;
- (id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;
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

