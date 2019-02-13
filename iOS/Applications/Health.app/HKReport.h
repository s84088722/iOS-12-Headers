//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableData;

@interface HKReport : NSObject
{
    _Bool _isDrawing;
    _Bool _currentlyGenerating;
    NSDictionary *_documentInfo;
    NSMutableArray *_contents;
    NSMutableArray *_headerContents;
    NSMutableArray *_footerContents;
    long long _currentPage;
    NSMutableData *_pdfData;
    CDUnknownBlockType _completionHandler;
    long long _totalPages;
    struct CGSize _pageSize;
    struct CGPoint _cursor;
}

+ (id)reportWithLetterPageSize;
@property(nonatomic) _Bool currentlyGenerating; // @synthesize currentlyGenerating=_currentlyGenerating;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(nonatomic) long long totalPages; // @synthesize totalPages=_totalPages;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableData *pdfData; // @synthesize pdfData=_pdfData;
@property(nonatomic) struct CGPoint cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, nonatomic) NSMutableArray *footerContents; // @synthesize footerContents=_footerContents;
@property(readonly, nonatomic) NSMutableArray *headerContents; // @synthesize headerContents=_headerContents;
@property(readonly, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSDictionary *documentInfo; // @synthesize documentInfo=_documentInfo;
- (void).cxx_destruct;
- (void)drawView:(id)arg1;
- (void)prepareToDrawView:(id)arg1;
- (void)prepareToDrawHeight:(double)arg1;
- (void)moveCursorRight:(double)arg1;
- (void)moveCursorDown:(double)arg1;
- (_Bool)isCursorValid;
- (unsigned long long)locationOfPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double remainingPageContentHeight;
@property(readonly, nonatomic) double pageContentHeight;
@property(readonly, nonatomic) double footerContentHeight;
@property(readonly, nonatomic) double headerContentHeight;
- (void)_endPage;
- (void)_beginPage;
- (void)beginNextPage;
@property(readonly, nonatomic) struct CGContext *context;
- (void)_endDocument;
- (void)_beginDocument;
- (void)_determineTotalPages;
- (void)createReportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addContent:(id)arg1;
- (void)shiftFooterContent;
- (void)unshiftFooterContent:(id)arg1;
- (void)popHeaderContent;
- (void)pushHeaderContent:(id)arg1;
- (id)initWithPageSize:(struct CGSize)arg1;

@end

