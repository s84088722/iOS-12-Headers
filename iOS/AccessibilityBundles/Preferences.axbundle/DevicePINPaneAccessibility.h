//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__DevicePINPaneAccessibility_super.h"

@interface DevicePINPaneAccessibility : __DevicePINPaneAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (_Bool)_accessibilitySupportsHandwriting;
- (void)slideToNewPasscodeField:(_Bool)arg1 withKeyboard:(_Bool)arg2;
- (void)setPINPolicyString:(id)arg1 visible:(_Bool)arg2;

@end

