//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TTYUtilities : NSObject
{
    _Bool _inUnitTestMode;
    _Bool _headphoneJackSupportsTTY;
    NSObject<OS_dispatch_queue> *_callCenterQueue;
}

+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (_Bool)ttyShouldBeRealtimeForCall:(id)arg1;
+ (id)phoneNumberStringFromString:(id)arg1;
+ (id)ASCIINumericStringFromString:(struct __CFString *)arg1;
+ (id)relayPhoneNumber;
+ (_Bool)relayIsSupported;
+ (_Bool)softwareTTYIsSupported;
+ (_Bool)shouldUseRTT;
+ (_Bool)isOnlyRTTSupported;
+ (_Bool)isRTTSupported;
+ (_Bool)hardwareTTYIsSupported;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (_Bool)contactIsTTYContact:(id)arg1;
+ (_Bool)isAppleInternalBuild;
+ (void)performCallCenterTask:(CDUnknownBlockType)arg1;
+ (id)sharedCallCenter;
+ (id)sharedUtilityProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue; // @synthesize callCenterQueue=_callCenterQueue;
@property(nonatomic) _Bool headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(nonatomic) _Bool inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
- (void).cxx_destruct;
- (void)setTTYDictionaryAvailability:(_Bool)arg1;
- (_Bool)contactIsTTYContact:(id)arg1;
- (_Bool)deleteConversationWithCallUID:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (id)bubbleFillForMe:(_Bool)arg1;
- (id)tintedTTYIcon;
- (id)ttyIconWithTint:(id)arg1;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)bubbleColorForMe:(_Bool)arg1;
- (struct UIEdgeInsets)bubbleInsetForMe:(_Bool)arg1;
- (struct UIEdgeInsets)textInsetForMe:(_Bool)arg1;
- (long long)textAlignmentForMe:(_Bool)arg1;
- (id)ttyMeContact;
- (id)contactPathForCall:(id)arg1;
- (id)myPhoneNumber;
- (id)init;
- (unsigned long long)currentPreferredTransportMethod;

@end

