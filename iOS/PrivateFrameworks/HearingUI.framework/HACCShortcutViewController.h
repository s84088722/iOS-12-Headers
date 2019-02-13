//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HearingUI/HACCContentModuleDelegate-Protocol.h>
#import <HearingUI/UIGestureRecognizerDelegate-Protocol.h>

@class AXRemoteHearingAidDevice, CCUIContentModuleContext, HACCChevronView, HACCContentViewController, MTMaterialView, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;
@protocol AXHAShortcutUpdateProtocol;

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCContentModuleDelegate>
{
    double _dismissalGestureYOffset;
    struct CGPoint _backgroundViewDismissalOrigin;
    _Bool _expanded;
    _Bool _bluetoothAvailable;
    id <AXHAShortcutUpdateProtocol> _delegate;
    HACCContentViewController *_expandedController;
    CCUIContentModuleContext *_contentModuleContext;
    NSMutableDictionary *_moduleToViewControllerMap;
    NSMutableDictionary *_gridToModuleMap;
    NSMutableDictionary *_moduleToPointMap;
    UIScrollView *_scrollView;
    MTMaterialView *_backgroundView;
    UIView *_platterView;
    NSMutableArray *_separatorViews;
    AXRemoteHearingAidDevice *_currentHearingDevice;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    HACCChevronView *_headerChevronView;
}

@property(retain, nonatomic) HACCChevronView *headerChevronView; // @synthesize headerChevronView=_headerChevronView;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) _Bool bluetoothAvailable; // @synthesize bluetoothAvailable=_bluetoothAvailable;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) AXRemoteHearingAidDevice *currentHearingDevice; // @synthesize currentHearingDevice=_currentHearingDevice;
@property(retain, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableDictionary *moduleToPointMap; // @synthesize moduleToPointMap=_moduleToPointMap;
@property(retain, nonatomic) NSMutableDictionary *gridToModuleMap; // @synthesize gridToModuleMap=_gridToModuleMap;
@property(retain, nonatomic) NSMutableDictionary *moduleToViewControllerMap; // @synthesize moduleToViewControllerMap=_moduleToViewControllerMap;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property(nonatomic) __weak HACCContentViewController *expandedController; // @synthesize expandedController=_expandedController;
@property(nonatomic) __weak id <AXHAShortcutUpdateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)content:(id)arg1 shouldPreview:(_Bool)arg2 withController:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAlpha:(double)arg1 forAllModulesExcept:(id)arg2;
- (void)controlDidActivate:(id)arg1;
- (void)updateViewForProperties:(id)arg1;
- (void)updateView;
- (_Bool)shouldDrawBackground;
- (double)preferredContentWidth;
- (double)preferredExpandedContentHeight;
- (void)updateAvailableControlsForSize:(struct CGSize)arg1;
- (unsigned long long)numberOfColumnsForSize:(struct CGSize)arg1;
- (_Bool)shouldDisplayControlForModule:(unsigned long long)arg1;
- (void)contentCategoryDidChange:(id)arg1;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_cancelDismissalWithPanGesture:(id)arg1;
- (void)_endDismissalWithPanGesture:(id)arg1;
- (void)_updateViewForDismissalPercentage:(double)arg1;
- (void)_updateDismissalWithPanGesture:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

