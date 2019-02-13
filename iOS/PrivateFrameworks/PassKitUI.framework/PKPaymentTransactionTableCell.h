//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class CNAvatarView, NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface PKPaymentTransactionTableCell : PKTableViewCell
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_transactionValueLabel;
    _Bool _isTemplateLayout;
    _Bool _showsAvatarView;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tertiaryColor;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_tertiaryString;
    NSString *_transactionIdentifier;
    CNAvatarView *_avatarView;
}

+ (id)tertiaryLabelFont;
+ (id)defaultSecondaryLabelFont;
+ (id)defaultPrimaryLabelFont;
+ (double)rowHeightWithTransactionValueFont:(id)arg1 secondaryLabelFont:(id)arg2;
@property(readonly, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool showsAvatarView; // @synthesize showsAvatarView=_showsAvatarView;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *tertiaryString; // @synthesize tertiaryString=_tertiaryString;
@property(retain, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;
@property(retain, nonatomic) UIFont *secondaryFont; // @synthesize secondaryFont=_secondaryFont;
@property(retain, nonatomic) UIFont *primaryFont; // @synthesize primaryFont=_primaryFont;
@property(retain, nonatomic) UIColor *tertiaryColor; // @synthesize tertiaryColor=_tertiaryColor;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (_Bool)shouldShowTransactionPreviewForTouchAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_updateAvatarView;
@property(retain, nonatomic) NSAttributedString *transactionValueAttributedText; // @dynamic transactionValueAttributedText;
- (id)defaultTertiaryColor;
- (id)defaultSecondaryColor;
- (id)defaultPrimaryColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

