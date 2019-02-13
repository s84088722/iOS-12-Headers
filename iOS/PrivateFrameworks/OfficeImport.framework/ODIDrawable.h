//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIDrawable : NSObject
{
}

+ (void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2;
+ (void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)addShapeWithBounds:(struct CGRect)arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4;
+ (struct CGSize)sizeOfDiagram:(id)arg1;
+ (id)shapeGeometryForBezierPath:(id)arg1 gSpace:(struct CGRect)arg2;
+ (id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int *)arg2;
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint)arg1;
+ (id)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint)arg1;
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1;
+ (id)shapeGeometryForEllipse;
+ (id)shapeGeometryForRectangle;
+ (void)addArrowHeadToShapeProperties:(id)arg1;
+ (void)mapShapeProperties:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapShapeProperties:(id)arg1 shapeStyle:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (id)styleForLabelName:(id)arg1 styleCount:(int)arg2 styleIndex:(int)arg3 state:(id)arg4;
+ (id)styleForPresentation:(id)arg1 point:(id)arg2 state:(id)arg3;
+ (id)presentationWithName:(id)arg1 point:(id)arg2;

@end

