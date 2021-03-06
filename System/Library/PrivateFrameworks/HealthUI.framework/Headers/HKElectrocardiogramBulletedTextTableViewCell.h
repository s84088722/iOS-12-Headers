/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSMutableArray, NSLayoutConstraint, NSString;

@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSMutableArray* _bodyFirstBaselineConstraints;
	NSLayoutConstraint* _detailLabelLastBaselineConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyFirstBaselineConstraints;                       //@synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailLabelLastBaselineConstraint;              //@synthesize detailLabelLastBaselineConstraint=_detailLabelLastBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
+(id)defaultReuseIdentifier;
-(NSString *)titleText;
-(void)_setupConstraints;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setDetailLabelLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)detailLabelLastBaselineConstraint;
-(void)setDetailTextWithBullets:(id)arg1 ;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
@end

