//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDImageProvider.h>

@interface TSDPDFImageProvider : TSDImageProvider
{
    struct CGPDFDocument *mPDFDocument;
    struct CGSize mNaturalSize;
}

- (struct CGPDFDocument *)p_load;
- (void)p_loadIfNecessary;
- (void)flush;
- (_Bool)hasFlushableContent;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isValid;
- (struct CGSize)naturalSize;
- (long long)pageAngle;
- (struct CGPDFDocument *)CGPDFDocument;
- (void)dealloc;

@end

