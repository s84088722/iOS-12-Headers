//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFPImage.h>

@class NSData, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPBitmapImage : MFPImage
{
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize mPixelSize;
    struct CGSize mPointSize;
}

- (struct CGSize)pointSize;
- (struct CGSize)pixelSize;
- (id)phoneImage;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (void)dealloc;
- (id)initWithBitmapData:(id)arg1;

@end

