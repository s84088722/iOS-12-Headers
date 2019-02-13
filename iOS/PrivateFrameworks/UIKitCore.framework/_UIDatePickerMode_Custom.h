//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIDatePickerMode.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Custom : _UIDatePickerMode
{
    NSString *_originalFormat;
    NSArray *_components;
    NSArray *_sortedComponents;
    long long _displayedUnits;
    long long _desiredUnits;
}

- (void).cxx_destruct;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (unsigned long long)numberOfComponents;
- (long long)displayedCalendarUnits;
- (unsigned long long)extractableCalendarUnits;
- (id)_componentForCalendarUnit:(unsigned long long)arg1;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (id)components;
- (void)resetComponentWidths;
- (void)noteCalendarChanged;
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;

@end

