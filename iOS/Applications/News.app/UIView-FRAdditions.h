//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (FRAdditions)
+ (id)fr_adjacentSiblingViewsFromViews:(id)arg1;
+ (void)fr_animateWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) _Bool visible;
- (void)fr_recolorLabelSubviewsWithColor:(id)arg1;
- (void)fr_setBlurred:(_Bool)arg1 radius:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (struct CGRect)fr_adjustedWidthAndXOriginFromFrame:(struct CGRect)arg1;
- (id)fr_subviewsOfType:(Class)arg1;
- (id)fr_selfOrFirstAncestorOfType:(Class)arg1;
- (id)fr_firstAncestorOfType:(Class)arg1;
- (_Bool)fr_hasAncestorOfType:(Class)arg1;
- (void)fr_accessibilityWorkaroundFor20458918ByClearingParentTableCellsChildCache;
- (void)fr_setHeight:(double)arg1;
@property(nonatomic) double fr_height;
@property(nonatomic) double fr_width;
- (void)fr_setMaxY:(double)arg1;
- (void)fr_setMinY:(double)arg1;
- (void)fr_setMaxX:(double)arg1;
- (void)fr_setMinX:(double)arg1;
- (void)roundOrigin;
@end

