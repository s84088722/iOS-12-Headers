//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/PDFPageDrawProgressCallback-Protocol.h>

@class PDFPageBackgroundManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback>
{
    PDFPageBackgroundManagerPrivate *_private;
}

- (void).cxx_destruct;
- (_Bool)drawProgressCallback;
- (void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;
- (void)_cleanup;
- (_Bool)_expectedQualityIndexForPageIndex:(unsigned long long)arg1 forQuality:(int *)arg2;
- (void)_drawPageImage:(unsigned long long)arg1 forQuality:(int)arg2;
- (_Bool)_findPageIndexNeedingUpdate:(unsigned long long *)arg1 forQuality:(int *)arg2;
- (void)_update;
- (void)cancel;
- (void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void)didRemovePageAtIndex:(unsigned long long)arg1;
- (void)didInsertPageAtIndex:(unsigned long long)arg1;
- (id)backgroundImageForPageIndex:(unsigned long long)arg1 withFoundQuality:(int *)arg2;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (void)willForceUpdate;
- (void)updateActivePageIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andRenderingProperties:(id)arg2;

@end
