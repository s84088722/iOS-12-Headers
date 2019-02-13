//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ClassroomKit/CRKUserNameEditorViewDelegate-Protocol.h>

@class CRKUserNameEditorView, NSLayoutConstraint, NSObject, NSString, UIStackView;
@protocol CRKFullNameEditorViewDelegate;

@interface CRKUserFullNameEditorView : UIView <CRKUserNameEditorViewDelegate>
{
    CRKUserNameEditorView *_familyNameEditorView;
    CRKUserNameEditorView *_givenNameEditorView;
    UIStackView *_nameEditorStackView;
    UIView *_separatorView;
    NSLayoutConstraint *mEqualNameEditorHeightConstraint;
    _Bool _showPhoneticName;
    _Bool _showFamilyNameFirst;
    NSObject<CRKFullNameEditorViewDelegate> *_delegate;
}

@property(nonatomic, getter=shouldShowFamilyNameFirst) _Bool showFamilyNameFirst; // @synthesize showFamilyNameFirst=_showFamilyNameFirst;
@property(nonatomic, getter=shouldShowPhoneticName) _Bool showPhoneticName; // @synthesize showPhoneticName=_showPhoneticName;
@property(nonatomic) __weak NSObject<CRKFullNameEditorViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)userNameEditorViewShouldReturn:(id)arg1;
- (void)userNameEditorViewDidEditPhoneticName:(id)arg1;
- (void)userNameEditorViewDidEditName:(id)arg1;
@property(readonly, nonatomic) UIView *separatorView;
@property(readonly, nonatomic) UIStackView *nameEditorsStackView;
@property(readonly, nonatomic) CRKUserNameEditorView *givenNameEditorView;
@property(readonly, nonatomic) CRKUserNameEditorView *familyNameEditorView;
@property(copy, nonatomic) NSString *phoneticGivenName;
@property(copy, nonatomic) NSString *givenName;
@property(copy, nonatomic) NSString *phoneticFamilyName;
@property(copy, nonatomic) NSString *familyName;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)_lastNameEditorView;
- (id)_firstNameEditorView;
- (void)_commonInit_UserFullNameEditorView;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

