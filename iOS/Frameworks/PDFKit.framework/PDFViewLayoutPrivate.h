//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFViewLayoutPrivate : NSObject
{
    id delegate;
    _Bool delegateKnowsMargins;
    _Bool delegateKnowsDisplayMode;
    _Bool delegateKnowsDisplayAsBook;
    _Bool delegateKnowsDisplayBox;
    _Bool delegateKnowsDisplayRTL;
    _Bool delegateKnowsDisplaysDirection;
    _Bool delegateKnowsDocumentMargins;
    _Bool delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct CGRect *pageLayoutBounds;
    struct CGSize singlePageContinuousSize;
    struct CGSize twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

- (void).cxx_destruct;

@end

