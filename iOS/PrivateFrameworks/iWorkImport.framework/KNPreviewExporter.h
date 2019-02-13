//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNSlideExporter.h>

#import <iWorkImport/TSKImageExporter-Protocol.h>

@class NSString, TSUProgress;

__attribute__((visibility("hidden")))
@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>
{
}

- (void)setup;
@property(nonatomic) _Bool scaleToFit;
@property(nonatomic) unsigned long long height;
@property(nonatomic) unsigned long long width;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, nonatomic) struct CGRect boundsRect;
@property(readonly, nonatomic) _Bool canExportInBackground;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) _Bool isExportSupported;
@property(readonly, nonatomic) _Bool needsSupplementalFiles;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(nonatomic) _Bool paginate;
@property(readonly, nonatomic) TSUProgress *progress;
@property(readonly, nonatomic) double progressForCurrentPage;
@property(readonly, nonatomic) NSString *savePanelMessage;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *typeUTI;
@property(readonly, nonatomic) struct CGRect unscaledClipRect;

@end

