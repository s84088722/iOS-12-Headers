//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryCell.h>

#import <HealthUI/UITextFieldDelegate-Protocol.h>

@class HKCaretOptionalTextField, NSArray, NSNumber, NSString, UILabel, UIView;
@protocol HKSimpleDataEntryCellDelegate;

@interface HKSimpleDataEntryPlainTextCell : HKSimpleDataEntryCell <UITextFieldDelegate>
{
    UIView *_horizontalSeparator;
    NSNumber *_characterCountLimit;
    _Bool _editDisabled;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    id <HKSimpleDataEntryCellDelegate> _delegate;
    UILabel *_titleLabel;
    HKCaretOptionalTextField *_inputTextField;
    NSString *_lastChangedText;
}

@property(retain, nonatomic) NSString *lastChangedText; // @synthesize lastChangedText=_lastChangedText;
@property(retain, nonatomic) HKCaretOptionalTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKSimpleDataEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_informDelegateForContentChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEditDisabled:(_Bool)arg1;
- (_Bool)editDisabled;
- (void)beginEditing;
- (void)_updateForCurrentSizeCategory;
- (void)_setupLayoutConstraints;
- (void)_setupLabels;
- (void)_setupInputTextFieldWithIntention:(long long)arg1;
- (id)initWithIntention:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

