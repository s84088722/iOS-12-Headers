//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUGarageDoorStateTransition, HUShapeLayerView, HUVisualEffectContainerView, UIView, UIVisualEffectView;

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView
{
    _Bool _open;
    _Bool _clipBottomPanelShapesToBounds;
    HUShapeLayerView *_buildingView;
    HUVisualEffectContainerView *_buildingContainerView;
    HUShapeLayerView *_carView;
    UIVisualEffectView *_carContainerView;
    UIView *_doorContainerView;
    UIView *_doorHingeView;
    UIView *_doorView;
    UIVisualEffectView *_topPanelHingeView;
    HUShapeLayerView *_topPanelView;
    UIVisualEffectView *_middlePanelHingeView;
    HUShapeLayerView *_middlePanelView;
    UIVisualEffectView *_bottomPanelHingeView;
    HUShapeLayerView *_bottomPanelViewWithoutHandle;
    HUShapeLayerView *_bottomPanelViewWithHandle;
    HUGarageDoorStateTransition *_activeTransition;
}

+ (id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect)arg1;
+ (id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect)arg1;
+ (id)pathForPanelAtPosition:(unsigned long long)arg1 bounds:(struct CGRect)arg2 showHandle:(_Bool)arg3;
+ (id)carPathForBounds:(struct CGRect)arg1;
+ (id)buildingPathForBounds:(struct CGRect)arg1;
+ (double)_referenceHeightForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;
+ (double)_referenceOriginYForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;
+ (double)_scaleFactorForBounds:(struct CGRect)arg1 referenceSize:(struct CGSize)arg2;
@property(retain, nonatomic) HUGarageDoorStateTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(nonatomic) _Bool clipBottomPanelShapesToBounds; // @synthesize clipBottomPanelShapesToBounds=_clipBottomPanelShapesToBounds;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(retain, nonatomic) HUShapeLayerView *bottomPanelViewWithHandle; // @synthesize bottomPanelViewWithHandle=_bottomPanelViewWithHandle;
@property(retain, nonatomic) HUShapeLayerView *bottomPanelViewWithoutHandle; // @synthesize bottomPanelViewWithoutHandle=_bottomPanelViewWithoutHandle;
@property(retain, nonatomic) UIVisualEffectView *bottomPanelHingeView; // @synthesize bottomPanelHingeView=_bottomPanelHingeView;
@property(retain, nonatomic) HUShapeLayerView *middlePanelView; // @synthesize middlePanelView=_middlePanelView;
@property(retain, nonatomic) UIVisualEffectView *middlePanelHingeView; // @synthesize middlePanelHingeView=_middlePanelHingeView;
@property(retain, nonatomic) HUShapeLayerView *topPanelView; // @synthesize topPanelView=_topPanelView;
@property(retain, nonatomic) UIVisualEffectView *topPanelHingeView; // @synthesize topPanelHingeView=_topPanelHingeView;
@property(retain, nonatomic) UIView *doorView; // @synthesize doorView=_doorView;
@property(retain, nonatomic) UIView *doorHingeView; // @synthesize doorHingeView=_doorHingeView;
@property(retain, nonatomic) UIView *doorContainerView; // @synthesize doorContainerView=_doorContainerView;
@property(retain, nonatomic) UIVisualEffectView *carContainerView; // @synthesize carContainerView=_carContainerView;
@property(retain, nonatomic) HUShapeLayerView *carView; // @synthesize carView=_carView;
@property(retain, nonatomic) HUVisualEffectContainerView *buildingContainerView; // @synthesize buildingContainerView=_buildingContainerView;
@property(retain, nonatomic) HUShapeLayerView *buildingView; // @synthesize buildingView=_buildingView;
- (void).cxx_destruct;
- (struct CATransform3D)_panelHingeSublayerTransformWithOpenState:(_Bool)arg1;
- (struct CATransform3D)_doorHingeSublayerTransformForOpenState:(_Bool)arg1;
- (struct CGRect)_frameForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2 relativeToHinge:(_Bool)arg3;
- (struct CGRect)_frameForPanelHingeAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;
- (struct CGAffineTransform)_referenceScaleTransform;
- (double)_referenceScaleFactor;
- (void)layoutSubviews;
- (void)_updatePanelLayoutForOpenState:(_Bool)arg1;
- (void)_updateCarLayoutForOpenState:(_Bool)arg1;
- (void)_updateLayoutForOpenState:(_Bool)arg1 animated:(_Bool)arg2;
- (id)managedVisualEffectViews;
- (_Bool)wantsManagedVibrancyEffect;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)_enumeratePanelViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_panelViewsForPosition:(unsigned long long)arg1;
- (id)panelHingeViews;
- (id)_createPanelViewForPosition:(unsigned long long)arg1 showHandle:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

