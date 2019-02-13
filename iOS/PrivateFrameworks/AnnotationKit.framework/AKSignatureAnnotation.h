//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>

@class AKSignature, NSString, UIColor;

@interface AKSignatureAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol>
{
    AKSignature *_signature;
    UIColor *_strokeColor;
    double _rotationAngle;
    struct CGRect _rectangle;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain) AKSignature *signature; // @synthesize signature=_signature;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (_Bool)shouldBurnIn;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

