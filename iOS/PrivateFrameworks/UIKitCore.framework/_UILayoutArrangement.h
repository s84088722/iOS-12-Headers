//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UILAPropertySource-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, UIView, _UILAConfigurationHistory, _UILayoutSpacer;
@protocol _UILAPropertySource;

__attribute__((visibility("hidden")))
@interface _UILayoutArrangement : NSObject <_UILAPropertySource>
{
    NSMutableSet *_incomingItems;
    NSMutableSet *_outgoingItems;
    NSMutableSet *_hiddenItems;
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableArray *_canvasConnectionConstraints;
    _Bool _awaitingAnimationLayoutPass;
    _Bool _layoutFillsCanvas;
    _Bool _layoutUsesCanvasMarginsWhenFilling;
    _UILAConfigurationHistory *_unanimatedConfigurationTarget;
    NSMutableArray *_mutableItems;
    _UILayoutSpacer *_spanningLayoutGuide;
    _UILAConfigurationHistory *_configurationHistory;
    UIView *_canvas;
    long long _axis;
}

+ (Class)_configurationHistoryClass;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) __weak UIView *canvas; // @synthesize canvas=_canvas;
@property(readonly, retain, nonatomic) _UILayoutSpacer *_spanningLayoutGuide; // @synthesize _spanningLayoutGuide;
@property(retain, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems; // @synthesize _mutableItems;
@property(readonly, nonatomic) _Bool _awaitingAnimationLayoutPass; // @synthesize _awaitingAnimationLayoutPass;
@property(retain, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget; // @synthesize _unanimatedConfigurationTarget;
- (void).cxx_destruct;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (_Bool)_usesCenteringConnectionConstraint;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (void)_removeSpanningLayoutGuide;
- (_Bool)_spanningGuideConstraintsNeedUpdate;
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (id)_viewOrGuideForLocationAttribute:(long long)arg1;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)_updateArrangementConstraints;
- (void)_clearAllConstraintsArrays;
- (void)_clearCanvasConnectionConstraints;
- (void)_updateConfigurationHistory;
- (_Bool)_hasStaleConfiguration;
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (long long)_centerAttributeForCanvasConnections;
- (long long)_minAttributeForCanvasConnections;
- (long long)_dimensionAttributeForCurrentAxis;
- (_Bool)_itemWantsLayoutAsIfVisible:(id)arg1;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_hiddenItems;
@property(readonly, nonatomic) NSSet *_outgoingItems;
@property(readonly, nonatomic) NSSet *_incomingItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(_Bool)arg1 notify:(_Bool)arg2;
- (void)_setLayoutFillsCanvas:(_Bool)arg1 notify:(_Bool)arg2;
- (void)_setAxis:(long long)arg1 notify:(_Bool)arg2;
@property(readonly, nonatomic) id <_UILAPropertySource> _propertySource;
- (void)_trackChangesWithConfigBlock:(CDUnknownBlockType)arg1;
- (void)_registerAnimationRequest;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
@property(readonly, retain, nonatomic) _UILAConfigurationHistory *_configurationHistory; // @synthesize _configurationHistory;
- (long long)_axisForSpanningLayoutGuide;
- (_Bool)_spanningLayoutGuideAlwaysUsesFittingConstraint;
- (float)_spanningLayoutGuideFittingPriority;
- (id)_identifierForSpanningLayoutGuide;
- (_Bool)_allItemsHidden;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (void)_createSpanningLayoutGuide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

