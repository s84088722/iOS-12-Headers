/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint;

@interface MiroDurationPickerCell : UIView {

	UILabel* _textLabel;
	NSLayoutConstraint* _textLabelLeadingConstraint;
	NSLayoutConstraint* _textLabelTrailingConstraint;

}

@property (nonatomic,retain) UILabel * textLabel;                                           //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelLeadingConstraint;               //@synthesize textLabelLeadingConstraint=_textLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelTrailingConstraint;              //@synthesize textLabelTrailingConstraint=_textLabelTrailingConstraint - In the implementation block
-(void)setTextLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelLeadingConstraint;
-(NSLayoutConstraint *)textLabelTrailingConstraint;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

