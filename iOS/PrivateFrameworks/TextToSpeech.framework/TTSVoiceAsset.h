//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextToSpeech/TTSAssetBase.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding>
{
    _Bool _isInstalled;
    _Bool _isBuiltInVoice;
    NSString *_name;
    NSString *_identifier;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    NSString *_voicePath;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *voicePath; // @synthesize voicePath=_voicePath;
@property(readonly, nonatomic) _Bool isBuiltInVoice; // @synthesize isBuiltInVoice=_isBuiltInVoice;
@property(readonly, nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(_Bool)arg5 isBuiltIn:(_Bool)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8;

@end

