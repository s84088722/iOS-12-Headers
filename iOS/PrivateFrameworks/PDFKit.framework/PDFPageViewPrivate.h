//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableArray, PDFAnnotation, PDFPage, PDFPageLayer, PDFPageLayerEffect, PDFRenderingProperties, UIImage, UITextView, UIView;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageViewPrivate : NSObject
{
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    PDFPageLayer *pageLayer;
    PDFPageLayerEffect *searchLayer;
    PDFPageLayerEffect *selectionLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeWidgetAnnotation;
    UIView *activeWidgetControl;
    NSMutableArray *pageSignatures;
    CALayer *backgroundLayer;
    UIImage *backgroundImage;
    int backgroundQuality;
    unsigned long long visibilityDelegateIndex;
    _Bool isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize bookmarkSize;
    UITextView *activeTextView;
}

- (void).cxx_destruct;

@end

