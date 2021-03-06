/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentSetupIntroViewDelegate;
@class UIView, UITextView, NSArray, NSMutableArray, NSString;

@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentStateView <UITextViewDelegate> {

	UIView* _footerView;
	UITextView* _footerTextView;
	NSArray* _continueButtonsLanguages;
	id<VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
	NSMutableArray* _continueButtons;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * continueButtons;                                             //@synthesize continueButtons=_continueButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStateViewDelegate:(id<VTUIEnrollmentSetupIntroViewDelegate>)arg1 ;
-(NSMutableArray *)continueButtons;
-(id)languageSelectionOfContinueButton:(id)arg1 ;
-(void)setContinueButtonLanguages:(id)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(id)_createFooter;
-(BOOL)suppressFinishButton;
-(id<VTUIEnrollmentSetupIntroViewDelegate>)stateViewDelegate;
-(void)_addContinueButtonsToFooter;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)footerView;
@end

