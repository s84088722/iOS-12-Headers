//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UIStackView;
@protocol LUIPrivacyViewDelegate;

@interface LUIPrivacyView : UIView
{
    UILabel *_privacyTextLabel;
    UIButton *_moreInfoButton;
    UILabel *_ifFoundTextLabel;
    UILabel *_assetTagTextLabel;
    UIStackView *_privacyLineStackView;
    UIStackView *_allContentStackView;
    _Bool mLayoutInitialized;
    id _profileObserver;
    _Bool _dynamicHeightEnabled;
    id <LUIPrivacyViewDelegate> _delegate;
    NSString *_privacyText;
    NSString *_buttonTitle;
    NSString *_ifFoundText;
    NSString *_assetTagText;
}

+ (id)bottomCenterConstraintsForPrivacyView:(id)arg1 inView:(id)arg2;
+ (id)dynamicHeightPrivacyView;
+ (id)defaultPrivacyView;
@property(readonly, nonatomic, getter=isDynamicHeightEnabled) _Bool dynamicHeightEnabled; // @synthesize dynamicHeightEnabled=_dynamicHeightEnabled;
@property(retain, nonatomic) NSString *assetTagText; // @synthesize assetTagText=_assetTagText;
@property(retain, nonatomic) NSString *ifFoundText; // @synthesize ifFoundText=_ifFoundText;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *privacyText; // @synthesize privacyText=_privacyText;
@property(nonatomic) __weak id <LUIPrivacyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreInfoButtonPressed:(id)arg1;
- (id)assetTagTextLabel;
- (id)ifFoundTextLabel;
- (id)_createFooterNoteLabel;
- (void)_updateFooterText;
- (void)_updateOrganizationName;
- (id)_organizationName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)activateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dynamicHeight:(_Bool)arg2;

@end

