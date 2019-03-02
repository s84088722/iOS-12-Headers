/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface TSCardContainerController : UIViewController {

	 delegate;
	 transitionManager;
	 cardViewLayoutOptions;
	 rootViewController;
	 cardItemStack;
	 eventManager;

}

@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
-(BOOL)accessibilityPerformEscape;
-(void)collapseCards:(/*^block*/id)arg1 ;
-(void)expandCards:(/*^block*/id)arg1 ;
-(void)pushCardWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)popCards;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewLayoutMarginsDidChange;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
@end
