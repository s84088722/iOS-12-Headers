/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@interface NewsArticles.TextSizeControlViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	 styler;
	 eventHandler;
	 divider;
	 stackView;
	 increaseButton;
	 increaseAction;
	 decreaseButton;
	 decreaseAction;

}

@property (assign,nonatomic) CGSize preferredContentSize; 
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
