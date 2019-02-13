//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice;
@protocol NTKUtilityComplicationFactoryDelegate;

@interface NTKUtilityComplicationFactory : NSObject
{
    _Bool _accommodatesTwoTopComplications;
    CLKDevice *_device;
    id <NTKUtilityComplicationFactoryDelegate> _delegate;
    double _normalSidePadding;
    double _normalVerticalPadding;
    double _deselectedKeylineSideInnerPadding;
    double _deselectedKeylineVerticalInnerPadding;
    double _deselectedKeylineCircularInnerPadding;
    double _selectedKeylineSideInnerPadding;
    double _selectedKeylineHeight;
    double _foregroundAlpha;
    double _foregroundImageAlpha;
    double _maxNormalLongWidth;
    double _crownIndicatorGap;
    double _dateKeylineMaxWidth;
    double _dateHorizontalCenterOffset;
    double _dateVerticalCenterOffset;
    long long _bottomCenterLayout;
    struct CGSize _normalCircularPadding;
    struct UIEdgeInsets _screenEdgeInsets;
}

+ (void)curvedCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(long long)arg6 forDevice:(id)arg7;
+ (unsigned long long)placementForSlot:(long long)arg1;
@property(nonatomic) long long bottomCenterLayout; // @synthesize bottomCenterLayout=_bottomCenterLayout;
@property(nonatomic) double dateVerticalCenterOffset; // @synthesize dateVerticalCenterOffset=_dateVerticalCenterOffset;
@property(nonatomic) double dateHorizontalCenterOffset; // @synthesize dateHorizontalCenterOffset=_dateHorizontalCenterOffset;
@property(nonatomic) double dateKeylineMaxWidth; // @synthesize dateKeylineMaxWidth=_dateKeylineMaxWidth;
@property(nonatomic) double crownIndicatorGap; // @synthesize crownIndicatorGap=_crownIndicatorGap;
@property(nonatomic) struct UIEdgeInsets screenEdgeInsets; // @synthesize screenEdgeInsets=_screenEdgeInsets;
@property(nonatomic) double maxNormalLongWidth; // @synthesize maxNormalLongWidth=_maxNormalLongWidth;
@property(nonatomic) double foregroundImageAlpha; // @synthesize foregroundImageAlpha=_foregroundImageAlpha;
@property(nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(nonatomic) double selectedKeylineHeight; // @synthesize selectedKeylineHeight=_selectedKeylineHeight;
@property(nonatomic) double selectedKeylineSideInnerPadding; // @synthesize selectedKeylineSideInnerPadding=_selectedKeylineSideInnerPadding;
@property(nonatomic) double deselectedKeylineCircularInnerPadding; // @synthesize deselectedKeylineCircularInnerPadding=_deselectedKeylineCircularInnerPadding;
@property(nonatomic) double deselectedKeylineVerticalInnerPadding; // @synthesize deselectedKeylineVerticalInnerPadding=_deselectedKeylineVerticalInnerPadding;
@property(nonatomic) double deselectedKeylineSideInnerPadding; // @synthesize deselectedKeylineSideInnerPadding=_deselectedKeylineSideInnerPadding;
@property(nonatomic) struct CGSize normalCircularPadding; // @synthesize normalCircularPadding=_normalCircularPadding;
@property(nonatomic) double normalVerticalPadding; // @synthesize normalVerticalPadding=_normalVerticalPadding;
@property(nonatomic) double normalSidePadding; // @synthesize normalSidePadding=_normalSidePadding;
@property(nonatomic) _Bool accommodatesTwoTopComplications; // @synthesize accommodatesTwoTopComplications=_accommodatesTwoTopComplications;
@property(nonatomic) __weak id <NTKUtilityComplicationFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (double)_maxWidthForKeylineAndPadding;
- (double)_maxDateWidthLeavingRoomForKeylines;
- (double)_maxBottomCenterWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxBottomCornerWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxTopCornerWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (void)_configureLayout:(id)arg1 withNormalSize:(struct CGSize)arg2 editingSize:(struct CGSize)arg3 variant:(_Bool)arg4 addCircleOverrides:(_Bool)arg5 makeRuleBlock:(CDUnknownBlockType)arg6;
- (void)_configureUpNextTopRightLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightLongLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightBelowLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightAboveLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureTopRightBelowLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureTopRightAboveLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureDateLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomCenterLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureBottomRightLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureBottomLeftLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureTopRightLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (void)_configureTopLeftLayout:(id)arg1 withBounds:(struct CGRect)arg2 variant:(_Bool)arg3;
- (id)_viewForDateComplication:(id)arg1;
- (double)foregroundImageAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)foregroundImageAlphaForEditing:(_Bool)arg1;
- (double)foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)foregroundAlphaForEditing:(_Bool)arg1;
- (id)curvedMaskForSlot:(long long)arg1;
- (unsigned long long)keylineLabelAlignmentForSlot:(long long)arg1;
- (double)keylineCornerRadiusForSlot:(long long)arg1;
- (id)keylineViewForSlot:(long long)arg1;
- (id)_curvedImageForSlot:(long long)arg1 filled:(_Bool)arg2;
- (id)_curvedMaskImageForSlot:(long long)arg1;
- (id)_curvedKeylineImageForSlot:(long long)arg1;
- (void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 withBounds:(struct CGRect)arg3;
- (id)newViewForComplication:(id)arg1 family:(long long)arg2 forSlot:(long long)arg3;
- (long long)layoutOverrideForComplicationType:(unsigned long long)arg1 inSlot:(long long)arg2;
- (id)initForDevice:(id)arg1;

@end

