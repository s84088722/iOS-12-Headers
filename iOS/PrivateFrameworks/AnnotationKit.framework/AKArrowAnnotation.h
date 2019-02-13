//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKShapeAnnotation.h>

#import <AnnotationKit/AKTextAnnotationProtocol-Protocol.h>

@class NSDictionary, NSString, NSTextStorage;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol>
{
    unsigned long long _arrowHeadStyle;
    NSTextStorage *_annotationText;
    NSDictionary *_typingAttributes;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    struct CGPoint _midPoint;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property(copy) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(retain) NSTextStorage *annotationText; // @synthesize annotationText=_annotationText;
@property unsigned long long arrowHeadStyle; // @synthesize arrowHeadStyle=_arrowHeadStyle;
@property struct CGPoint midPoint; // @synthesize midPoint=_midPoint;
@property struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool isEditingText;
@property _Bool shouldUsePlaceholderText;
@property(readonly) Class superclass;
@property _Bool textIsClipped;
@property _Bool textIsFixedHeight;
@property _Bool textIsFixedWidth;

@end

