//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class PDFView;

@interface AXPDFNodeElement : UIAccessibilityElement
{
    PDFView *_pdfView;
    _Bool _didDetermineLastNodeStatus;
    _Bool _isLastNodeInPage;
}

@property(nonatomic) _Bool isLastNodeInPage; // @synthesize isLastNodeInPage=_isLastNodeInPage;
@property(nonatomic) _Bool didDetermineLastNodeStatus; // @synthesize didDetermineLastNodeStatus=_didDetermineLastNodeStatus;
- (void).cxx_destruct;
- (_Bool)_accessibilityIncludeDuringContentReading;
- (_Bool)pdfViewRequiresPageTurning;
- (id)pdfView;

@end

