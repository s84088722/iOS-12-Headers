//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableSet, NSString, NSThread, PDFAKPageAdaptor, PDFDocument, PDFView, UIImage;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject
{
    PDFDocument *document;
    struct CGPDFPage *page;
    PDFView *view;
    NSString *label;
    UIImage *image;
    struct CGImage *cgImage;
    unsigned int cgImageOrientation;
    struct CGPDFLayout *layout;
    _Bool enqueuedForLayout;
    struct _opaque_pthread_t *threadFetchingLayout;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } layoutThreadCondition;
    NSLock *lock_accessLayout;
    NSLock *lock_dataEnqueuedForDataDetection;
    _Bool enqueuedForDataDetection;
    NSThread *layoutThread;
    NSMutableAttributedString *attributedString;
    NSLock *lock_text;
    long long numChars;
    _Bool textCharsLoaded;
    struct __CFString *text;
    _Bool displaysAnnotations;
    _Bool displaysMarkups;
    NSMutableArray *annotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *unsupportedElements;
    _Bool ranDataDetectors;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    struct CGRect mediaBox;
    struct CGRect cropBox;
    struct CGRect bleedBox;
    struct CGRect trimBox;
    struct CGRect artBox;
    _Bool bookmarked;
    _Bool isFullyConstructed;
    _Bool colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    _Bool akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    _Bool didChangeBounds;
}

- (void).cxx_destruct;

@end

