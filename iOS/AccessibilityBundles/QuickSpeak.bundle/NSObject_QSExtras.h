//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickSpeak/__NSObject_QSExtras_super.h>

@interface NSObject_QSExtras : __NSObject_QSExtras_super
{
}

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityHandleFinishSpeaking;
- (_Bool)_accessibilityQuickSpeakContentIsSpeakable;
- (_Bool)_accessibilityQScanPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)_accessibilitySystemShouldShowPauseBubble;
- (_Bool)_accessibilitySystemShouldShowSpeakLanguageBubble;
- (_Bool)_accessibilitySystemShouldShowSpeakBubble;
- (_Bool)_accessibilitySystemShouldShowSpeakSentence;
- (_Bool)_accessibilitySystemShouldShowSpeakSpellOut;
- (_Bool)_accessibilityShouldShowSpeakSpellOut;
- (void)_accessibilityCacheContentIfNecessary;
- (_Bool)_accessibilitySystemShouldShowSpeakBubbleCommon;
- (void)_accessibilitySpeakLanguageSelection:(id)arg1;
- (void)_accessibilityPauseSpeaking:(id)arg1;
- (void)_accessibilitySpeakSentence:(id)arg1;
- (void)_accessibilitySpeakSpellOut:(id)arg1;
- (void)_accessibilitySpeakWithLanguage:(id)arg1;
- (void)_accessibilitySpeak:(id)arg1;
- (_Bool)_accessibilityShouldUpdateQuickSpeakContent;
- (void)_accessibilityQuickSpeakTextRectsWithRange:(struct _NSRange)arg1 string:(id)arg2 highlightRects:(id)arg3 sentenceRects:(id)arg4 singleTextRect:(struct CGRect *)arg5;
- (_Bool)_accessibilityShouldShowPauseBubble;
- (_Bool)_accessibilityShouldShowSpeakLanguageBubble;
- (_Bool)_accessibilityShouldShowSpeakBubble;
- (id)_accessibilitySpeakSelectionTextInputResponder;

@end

