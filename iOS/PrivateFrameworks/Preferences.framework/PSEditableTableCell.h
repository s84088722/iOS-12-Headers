//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

#import <Preferences/UITextFieldDelegate-Protocol.h>
#import <Preferences/UITextViewDelegate-Protocol.h>

@class NSString, PSListController, UIColor;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate>
{
    UIColor *_textColor;
    id _delegate;
    _Bool _forceFirstResponder;
    _Bool _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    _Bool _valueChanged;
    _Bool _returnKeyTapped;
    PSListController *_controllerDelegate;
}

+ (long long)cellStyle;
@property(nonatomic) __weak PSListController *controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(readonly, nonatomic) _Bool returnKeyTapped; // @synthesize returnKeyTapped=_returnKeyTapped;
- (void).cxx_destruct;
- (id)textField;
- (void)setPlaceholderText:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (_Bool)_cellIsEditing;
- (_Bool)isEditing;
- (_Bool)isTextFieldEditing;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setCellEnabled:(_Bool)arg1;
- (id)_defaultTextColor;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_saveForExit;
- (void)_setValueChanged;
- (void)cellRemovedFromView;
- (void)endEditingAndSave;
- (void)controlChanged:(id)arg1;
- (_Bool)canReload;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

