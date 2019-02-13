//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextToSpeech/NSObject-Protocol.h>

@class NSObject, NSSet, NSString, TTSSpeechRequest, TTSSpeechVoice;
@protocol OS_dispatch_queue;

@protocol TTSSpeechService <NSObject>
@property(nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
- (_Bool)isVoiceValid:(TTSSpeechVoice *)arg1;
- (NSString *)speechMarkupStringForType:(long long)arg1 voice:(TTSSpeechVoice *)arg2 string:(NSString *)arg3;
- (NSSet *)supportedIPAPhonemeLanguages;
- (oneway void)getSpeechIsActiveForRequest:(TTSSpeechRequest *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)getSpeechIsActiveReply:(void (^)(_Bool))arg1;
- (oneway void)getVoicesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)stopSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (oneway void)continueSpeechRequest:(TTSSpeechRequest *)arg1;
- (oneway void)pauseSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (oneway void)startSpeechRequest:(TTSSpeechRequest *)arg1;

@optional
- (NSString *)embeddedVolumeMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 volume:(double)arg3;
- (NSString *)embeddedPitchMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 pitch:(double)arg3;
- (NSString *)embeddedRateMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 rate:(double)arg3;
- (NSString *)nashvilleVoiceName:(NSString *)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
- (NSString *)nashvilleVoiceIdentifier:(NSString *)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
- (NSString *)enclosedStringWithPhonemes:(NSString *)arg1;
- (NSString *)phonemesFromLHPhonemes:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)phonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)lhPhonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (_Bool)employSpeechMarkupForType:(long long)arg1 language:(NSString *)arg2;
@end

