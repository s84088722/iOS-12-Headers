//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemKeyboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowPredictiveKeyboard;
    NSNumber *_payloadAllowAutoCorrection;
    NSNumber *_payloadAllowSpellCheck;
    NSNumber *_payloadAllowKeyboardShortcuts;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowPredictiveKeyboard:(id)arg2 withAllowAutoCorrection:(id)arg3 withAllowSpellCheck:(id)arg4 withAllowKeyboardShortcuts:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowKeyboardShortcuts; // @synthesize payloadAllowKeyboardShortcuts=_payloadAllowKeyboardShortcuts;
@property(copy, nonatomic) NSNumber *payloadAllowSpellCheck; // @synthesize payloadAllowSpellCheck=_payloadAllowSpellCheck;
@property(copy, nonatomic) NSNumber *payloadAllowAutoCorrection; // @synthesize payloadAllowAutoCorrection=_payloadAllowAutoCorrection;
@property(copy, nonatomic) NSNumber *payloadAllowPredictiveKeyboard; // @synthesize payloadAllowPredictiveKeyboard=_payloadAllowPredictiveKeyboard;
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

