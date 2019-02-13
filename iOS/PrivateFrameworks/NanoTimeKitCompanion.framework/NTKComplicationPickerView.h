//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOptionPickerView.h>

@class NSMutableDictionary, NSMutableSet, NSString, NTKComplication, NTKComplicationDisplayWrapperView, UIImage;
@protocol NTKComplicationPickerViewDataSource;

@interface NTKComplicationPickerView : NTKEditOptionPickerView
{
    NSMutableSet *_loadedComplications;
    NSMutableDictionary *_displaysByComplication;
    NSMutableDictionary *_controllersByComplication;
    NSMutableDictionary *_layoutRulesByComplication;
    _Bool _needsReload;
    _Bool _curvedInterior;
    long long _style;
    id <NTKComplicationPickerViewDataSource> _dataSource;
    double _curvedRadius;
    double _curvedAngle;
    NSString *_complicationSlot;
    struct CGPoint _curvedCenter;
}

@property(readonly, nonatomic) NSString *complicationSlot; // @synthesize complicationSlot=_complicationSlot;
@property(readonly, nonatomic) struct CGPoint curvedCenter; // @synthesize curvedCenter=_curvedCenter;
@property(readonly, nonatomic) _Bool curvedInterior; // @synthesize curvedInterior=_curvedInterior;
@property(readonly, nonatomic) double curvedAngle; // @synthesize curvedAngle=_curvedAngle;
@property(readonly, nonatomic) double curvedRadius; // @synthesize curvedRadius=_curvedRadius;
@property(nonatomic) __weak id <NTKComplicationPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_detachComplicationDisplays;
- (void)_reloadLayoutForComplication:(id)arg1;
- (void)_loadComplication:(id)arg1;
- (id)_displayByLoadingComplication:(id)arg1;
- (void)_configureSideView:(id)arg1 forOption:(id)arg2;
- (void)_willDisplaySideView:(id)arg1;
- (Class)_sideViewClass;
- (id)_newContainerView;
- (void)stealSelectedComplicationDisplay:(id *)arg1 controller:(id *)arg2;
@property(readonly, nonatomic) NTKComplicationDisplayWrapperView *selectedComplicationDisplay;
- (id)complicationAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NTKComplication *selectedComplication;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
@property(retain, nonatomic) UIImage *curvedMask;
- (void)setCurvedRadius:(double)arg1 curvedAngle:(double)arg2 curvedCenter:(struct CGPoint)arg3 curvedInterior:(_Bool)arg4;
- (void)dealloc;
- (id)initWithAllowedComplications:(id)arg1 selectedComplication:(id)arg2 complicationSlot:(id)arg3;

@end

