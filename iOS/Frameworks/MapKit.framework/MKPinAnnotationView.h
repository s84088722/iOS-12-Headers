//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class UIColor, UIImageView;
@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView
{
    UIImageView *_shadowView;
    UIColor *_pinTintColor;
    id <_MKPinAnnotationViewDelegate> _delegate;
    int _state;
    _Bool _animatesDrop;
}

+ (struct CGPoint)_rightCalloutOffset;
+ (struct CGPoint)_leftCalloutOffset;
+ (struct CGPoint)_calloutOffset;
+ (struct CGPoint)_shadowAnchorPoint;
+ (struct CGPoint)_perceivedAnchorPoint;
+ (id)_shadowImage;
+ (id)_reuseIdentifier;
+ (id)_pinsWithMapType:(unsigned long long)arg1 mapDisplayStyle:(CDStruct_80aa614a)arg2 pinColor:(id)arg3 traits:(id)arg4;
+ (id)_imageCache;
+ (id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3 pinColor:(id)arg4 traits:(id)arg5;
+ (id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4;
+ (id)_dropBounceAnimation;
+ (id)_bounceAnimation;
+ (struct CGRect)_pinFrameForPosition:(struct CGPoint)arg1;
+ (id)purplePinColor;
+ (id)greenPinColor;
+ (id)redPinColor;
+ (struct CGSize)_perceivedSize;
+ (Class)layerClass;
@property(nonatomic, setter=_setDelegate:) __weak id <_MKPinAnnotationViewDelegate> _delegate; // @synthesize _delegate;
- (void).cxx_destruct;
- (int)_state;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(_Bool)arg1;
- (void)_liftForDraggingAnimated:(_Bool)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_dropAfterDraggingAndRevertPosition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3;
- (id)_bounceAnimation:(_Bool)arg1 withDelay:(double)arg2 addToLayer:(_Bool)arg3;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_cleanupAfterPinDropAnimation;
- (void)_stopDrop;
- (void)_removeAllAnimations;
- (void)_didUpdatePosition;
- (void)setCenter:(struct CGPoint)arg1;
- (void)_updateShadowLayer;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_invalidateImage;
- (id)_pinJumpImages;
- (id)_pinBounceImages;
- (id)_floatingImage;
- (id)_highlightedImage;
- (id)_image;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_pins;
- (id)description;
- (void)_setMapDisplayStyle:(CDStruct_80aa614a)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGRect)_significantBounds;
@property(nonatomic) _Bool animatesDrop;
@property(retain, nonatomic) UIColor *pinTintColor;
@property(nonatomic) unsigned long long pinColor;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (struct CGPoint)_draggingDropOffset;

@end

