//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VoiceShortcutsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;
@protocol VCUITypeToSiriFieldDelegate;

@interface VCUITypeToSiriField : UIView <UITextFieldDelegate>
{
    id <VCUITypeToSiriFieldDelegate> _delegate;
    UITextField *_typeToSiriTextField;
    UIView *_typeToSiriTextFieldTopBorder;
    UIView *_typeToSiriTextFieldBottomBorder;
}

@property(retain, nonatomic) UIView *typeToSiriTextFieldBottomBorder; // @synthesize typeToSiriTextFieldBottomBorder=_typeToSiriTextFieldBottomBorder;
@property(retain, nonatomic) UIView *typeToSiriTextFieldTopBorder; // @synthesize typeToSiriTextFieldTopBorder=_typeToSiriTextFieldTopBorder;
@property(retain, nonatomic) UITextField *typeToSiriTextField; // @synthesize typeToSiriTextField=_typeToSiriTextField;
@property(retain, nonatomic) id <VCUITypeToSiriFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)detach;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setSuggestedPhrase:(id)arg1;
@property(retain, nonatomic, getter=getText, setter=setText:) NSString *text;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

