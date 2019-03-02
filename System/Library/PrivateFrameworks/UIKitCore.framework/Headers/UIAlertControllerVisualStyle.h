/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	long long _forcedInterfaceIdiom;
	UIInterfaceActionVisualStyle* _interfaceActionVisualStyle;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) long long forcedInterfaceIdiom;                                           //@synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * interfaceActionVisualStyle;              //@synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                      //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;                                 //@synthesize descriptor=_descriptor - In the implementation block
+(void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5 ;
+(long long)interfaceActionPresentationStyle;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(UITraitCollection *)traitCollection;
-(UIEdgeInsets)textFieldContentInset;
-(double)textFieldHorizontalMargin;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(BOOL)shouldOccludeDuringPresentation;
-(BOOL)_shouldReverseActions;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2 ;
-(void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
-(UIInterfaceActionVisualStyle *)interfaceActionVisualStyle;
-(id)_keyCommandInputForCancelAction;
-(id)textFieldContainingViewWithTextField:(id)arg1 ;
-(BOOL)placementAvoidsKeyboard;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(UIAlertControllerDescriptor *)descriptor;
-(id)titleLabelFont;
-(double)marginBelowMessageLabelLastBaseline;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowTitleLabelLastBaseline;
-(id)titleLabelColor;
-(double)_spacingBetweenDismissButtonAndContent;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(double)maximumWidth;
-(long long)permittedActionLayoutDirection;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(long long)maximumNumberOfLinesInTitleLabel;
-(long long)maximumNumberOfLinesInMessageLabel;
-(double)minimumWidth;
-(id)tintColorForAlertController:(id)arg1 ;
-(id)_detailMessageFont;
-(double)_marginAboveDetailMessageFirstBaseline;
-(double)maximumWidthForTitleAndMessageContentView;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
-(void)_reloadInterfaceActionVisualStyle;
-(Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
-(id)preferredActionFont;
-(id)regularActionFont;
-(double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1 ;
-(double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2 ;
-(void)setForcedInterfaceIdiom:(long long)arg1 ;
-(double)maximumHeightForDisplayOnScreen:(id)arg1 ;
-(id)defaultActionFont;
-(CGSize)collectionViewOutsetSize;
-(double)contentHorizontalMargin;
-(double)contentVerticalMargin;
-(UIEdgeInsets)actionImageMarginForAction;
-(double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1 ;
-(double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1 ;
-(double)_scaledMarginBelowTitleLabelLastBaseline;
-(double)_scaledMarginAboveMessageLabelFirstBaseline;
-(double)_scaledMarginBelowMessageLabelLastBaseline;
-(double)_scaledMarginBelowLastLabelLastBaseline;
-(double)_scaledMarginAboveDetailMessageFirstBaseline;
-(long long)forcedInterfaceIdiom;
@end
