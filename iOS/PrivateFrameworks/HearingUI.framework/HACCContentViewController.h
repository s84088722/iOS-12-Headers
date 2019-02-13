//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HearingUI/CCUIContentModuleContentViewController-Protocol.h>
#import <HearingUI/UIGestureRecognizerDelegate-Protocol.h>
#import <HearingUI/UIPreviewInteractionDelegate-Protocol.h>

@class MTMaterialView, NSString, UIPreviewInteraction, UITapGestureRecognizer, UIView;
@protocol CCUIContentModuleContentViewController, HACCContentModule;

@interface HACCContentViewController : UIViewController <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, CCUIContentModuleContentViewController>
{
    unsigned long long _controlType;
    UIView<HACCContentModule> *_contentView;
    UIView *_expandedView;
    UIView *_materialView;
    _Bool _expanded;
    MTMaterialView *_backgroundView;
    UITapGestureRecognizer *_tapRecognizer;
    UIPreviewInteraction *_previewInteraction;
    UIViewController<CCUIContentModuleContentViewController> *_expandedViewController;
    struct CGRect _collapsedFrame;
}

@property(retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *expandedViewController; // @synthesize expandedViewController=_expandedViewController;
@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGRect collapsedFrame; // @synthesize collapsedFrame=_collapsedFrame;
- (void).cxx_destruct;
- (_Bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)supportsExpanding;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)transitionToExpanded:(_Bool)arg1;
- (id)viewControllerForExpandedView;
- (id)expandedViewControllerForProgramModule:(unsigned long long)arg1;
- (long long)layoutRequirement;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (struct CGSize)expandedContentSize;
- (struct CGSize)collapsedContentSize;
- (struct CGSize)expandedContentUnitSize;
- (struct CGSize)collapsedContentUnitSize;
- (unsigned long long)controlTypeForModule:(unsigned long long)arg1;
- (void)updateViewConstraints;
- (void)maskCornersForTop:(_Bool)arg1 bottom:(_Bool)arg2;
- (id)value;
- (void)updateValue;
- (id)initWithContentModule:(unsigned long long)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly) Class superclass;

@end

