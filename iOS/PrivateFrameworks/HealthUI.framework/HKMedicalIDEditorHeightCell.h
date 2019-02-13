//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorCell.h>

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    _Bool _usesImperialUnits;
    NSNumber *_centimeterValue;
}

+ (double)defaultCentimeterValue;
@property(retain, nonatomic) NSNumber *centimeterValue; // @synthesize centimeterValue=_centimeterValue;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)_hidePicker;
- (void)dealloc;
- (void)_showPicker;
- (id)formattedValue;
- (void)_localeDidChange:(id)arg1;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

