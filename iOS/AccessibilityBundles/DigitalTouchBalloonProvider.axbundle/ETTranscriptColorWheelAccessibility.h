//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__ETTranscriptColorWheelAccessibility_super.h"

@interface ETTranscriptColorWheelAccessibility : __ETTranscriptColorWheelAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilitySpeakPickerColor;
- (double)_accessibilityDifferenceBetweenAngle:(double)arg1 andAngle:(double)arg2;
- (void)_accessibilityAdjustColorPickerBy:(double)arg1;
- (void)_accessibilityDecrementColorPicker;
- (void)_accessibilityIncrementColorPicker;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updatePickerPositionForPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySetOriginalPickerRotation:(double)arg1;
- (double)_accessibilityOriginalPickerRotation;

@end

