//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__PDFPageViewAccessibility_super.h"

@interface PDFPageViewAccessibility : __PDFPageViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)removeActiveWidgetAnnotation;
- (struct CGPDFSelection *)_lineSelectionForSelection:(struct CGPDFSelection *)arg1;
- (id)_axLineSelections;
- (id)accessibilityElements;
- (id)_axGetPDFView;
- (id)_axGetPage;
- (struct CGPDFPage *)_axPageRef;
- (_Bool)isAccessibilityElement;
- (void)_axSetPageViewElements:(id)arg1;
- (id)_axPageViewElements;

@end

