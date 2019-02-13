//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RapportUI/UIKeyInput-Protocol.h>
#import <RapportUI/UITextInputTraits-Protocol.h>

@class NSArray, NSMutableString, NSString, UIColor, UILabel, UITextInputPasswordRules;

@interface RPPINEntryView : UIView <UIKeyInput, UITextInputTraits>
{
    NSMutableString *_text;
    _Bool _alphaNumeric;
    _Bool _disabled;
    NSArray *_labels;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UILabel *_label4;
    UILabel *_label5;
    UILabel *_label6;
    UILabel *_label7;
    UILabel *_label8;
    CDUnknownBlockType _textChangedHandler;
    NSArray *_wells;
    UIView *_well1;
    UIView *_well2;
    UIView *_well3;
    UIView *_well4;
    UIView *_well5;
    UIView *_well6;
    UIView *_well7;
    UIView *_well8;
    UIColor *_wellFocusColor;
}

@property(retain, nonatomic) UIColor *wellFocusColor; // @synthesize wellFocusColor=_wellFocusColor;
@property(retain, nonatomic) UIView *well8; // @synthesize well8=_well8;
@property(retain, nonatomic) UIView *well7; // @synthesize well7=_well7;
@property(retain, nonatomic) UIView *well6; // @synthesize well6=_well6;
@property(retain, nonatomic) UIView *well5; // @synthesize well5=_well5;
@property(retain, nonatomic) UIView *well4; // @synthesize well4=_well4;
@property(retain, nonatomic) UIView *well3; // @synthesize well3=_well3;
@property(retain, nonatomic) UIView *well2; // @synthesize well2=_well2;
@property(retain, nonatomic) UIView *well1; // @synthesize well1=_well1;
@property(retain, nonatomic) NSArray *wells; // @synthesize wells=_wells;
@property(copy, nonatomic) CDUnknownBlockType textChangedHandler; // @synthesize textChangedHandler=_textChangedHandler;
@property(retain, nonatomic) UILabel *label8; // @synthesize label8=_label8;
@property(retain, nonatomic) UILabel *label7; // @synthesize label7=_label7;
@property(retain, nonatomic) UILabel *label6; // @synthesize label6=_label6;
@property(retain, nonatomic) UILabel *label5; // @synthesize label5=_label5;
@property(retain, nonatomic) UILabel *label4; // @synthesize label4=_label4;
@property(retain, nonatomic) UILabel *label3; // @synthesize label3=_label3;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool alphaNumeric; // @synthesize alphaNumeric=_alphaNumeric;
- (void).cxx_destruct;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long keyboardAppearance;
@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (_Bool)canBecomeFirstResponder;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
- (void)_updateFields;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *text;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

