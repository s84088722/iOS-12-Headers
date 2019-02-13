//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

#import "COSAppInstallationDelegate-Protocol.h"

@class COSAppInstallButton, COSAppInstallationController, NSString, UIImageView, UILabel;

@interface COSVictoryAppCell : PSTableCell <COSAppInstallationDelegate>
{
    COSAppInstallationController *_installController;
    UIImageView *_iconView;
    UILabel *_appTitleLabel;
    UILabel *_companyLabel;
    COSAppInstallButton *_getButton;
}

@property(retain, nonatomic) COSAppInstallButton *getButton; // @synthesize getButton=_getButton;
@property(retain, nonatomic) UILabel *companyLabel; // @synthesize companyLabel=_companyLabel;
@property(retain, nonatomic) UILabel *appTitleLabel; // @synthesize appTitleLabel=_appTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) COSAppInstallationController *installController; // @synthesize installController=_installController;
- (void).cxx_destruct;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1;
- (void)appIsAvailableStateDidChange:(unsigned long long)arg1;
- (void)didCompleteInstallationWithSuccess:(_Bool)arg1;
- (void)didBeginInstallationWithSuccess:(_Bool)arg1;
- (void)didInitiatePurchase;
- (void)pressedGet:(id)arg1;
- (id)productParameters;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
