/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIButton;

@interface MiroShareOrientationSelectionView : UIView {

	UIImageView* _posterImageView;
	UIButton* _orientationButton;

}

@property (nonatomic,retain) UIImageView * posterImageView;              //@synthesize posterImageView=_posterImageView - In the implementation block
@property (nonatomic,retain) UIButton * orientationButton;               //@synthesize orientationButton=_orientationButton - In the implementation block
-(void)setPosterImageView:(UIImageView *)arg1 ;
-(UIImageView *)posterImageView;
-(void)setOrientationButton:(UIButton *)arg1 ;
-(UIButton *)orientationButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

