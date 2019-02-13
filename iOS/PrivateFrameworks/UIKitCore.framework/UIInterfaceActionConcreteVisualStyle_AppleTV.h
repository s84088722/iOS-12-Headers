//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>

#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImpl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>
{
}

- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingLabelStyling;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (_Bool)selectByPressGestureRequired;
- (struct CGSize)minimumActionContentSize;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (double)actionSectionSpacing;
- (double)verticalImageContentSpacing;
- (double)horizontalImageContentSpacing;
- (struct UIEdgeInsets)contentMargin;
- (double)contentCornerRadius;
- (id)defaultScreen;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

