//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactHeaderView.h>

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIReusableView-Protocol.h>

@class CNContactFormatter, CNContactGeminiView, CNGeminiPickerController, CNGeminiResult, NSDictionary, NSLayoutConstraint, NSString, UILabel, UIView;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNPickerControllerDelegate, CNUIReusableView>
{
    NSDictionary *_taglineTextAttributes;
    NSDictionary *_geminiTextAttributes;
    _Bool _shouldShowGemini;
    _Bool _allowsPickerActions;
    CNContactFormatter *_contactFormatter;
    NSString *_alternateName;
    NSString *_message;
    double _minHeight;
    double _maxHeight;
    UIView *_personHeaderView;
    UILabel *_taglineLabel;
    double _lastViewWidth;
    NSLayoutConstraint *_photoTopConstraint;
    NSLayoutConstraint *_photoHeightConstraint;
    NSLayoutConstraint *_avatarNameSpacingConstraint;
    CNContactGeminiView *_geminiView;
    CNGeminiResult *_geminiResult;
    CNGeminiPickerController *_geminiPicker;
    struct CGSize _maxNameSize;
}

+ (id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(_Bool)arg2 delegate:(id)arg3;
+ (id)contactHeaderViewWithContact:(id)arg1 delegate:(id)arg2;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 shouldAllowImageDrops:(_Bool)arg3;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(_Bool)arg2;
@property(retain, nonatomic) CNGeminiPickerController *geminiPicker; // @synthesize geminiPicker=_geminiPicker;
@property(retain) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
@property(retain) CNContactGeminiView *geminiView; // @synthesize geminiView=_geminiView;
@property(retain) NSLayoutConstraint *avatarNameSpacingConstraint; // @synthesize avatarNameSpacingConstraint=_avatarNameSpacingConstraint;
@property(retain) NSLayoutConstraint *photoHeightConstraint; // @synthesize photoHeightConstraint=_photoHeightConstraint;
@property(retain) NSLayoutConstraint *photoTopConstraint; // @synthesize photoTopConstraint=_photoTopConstraint;
@property(nonatomic) double lastViewWidth; // @synthesize lastViewWidth=_lastViewWidth;
@property(nonatomic) struct CGSize maxNameSize; // @synthesize maxNameSize=_maxNameSize;
@property(retain) UILabel *taglineLabel; // @synthesize taglineLabel=_taglineLabel;
@property(retain, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
@property(nonatomic) _Bool allowsPickerActions; // @synthesize allowsPickerActions=_allowsPickerActions;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(nonatomic) _Bool shouldShowGemini; // @synthesize shouldShowGemini=_shouldShowGemini;
- (void).cxx_destruct;
- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)handleGeminiViewTouch:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (id)_headerStringForContacts:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (void)updateGeminiResult:(id)arg1;
- (void)_updatePhotoView;
- (id)geminiTextAttributes;
- (void)setGeminiTextAttributes:(id)arg1;
@property(copy, nonatomic) NSDictionary *taglineTextAttributes;
- (void)setNameTextAttributes:(id)arg1;
- (void)updateSizeDependentAttributes;
- (void)layoutSubviews;
- (void)calculateLabelSizes;
- (void)calculateLabelSizesIfNeeded;
- (void)disablePhotoTapGesture;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)tintColorDidChange;
@property(nonatomic) unsigned long long avatarStyle;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowImageDrops:(_Bool)arg4 delegate:(id)arg5;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) double photoMinTopMargin;
@property(readonly, nonatomic) double photoLabelSpacing;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

