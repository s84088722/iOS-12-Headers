//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/TSUImage.h>

@class UIImage;

@interface TSUUIImage : TSUImage
{
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
- (long long)imageOrientation;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImage;
- (double)scale;
- (struct CGSize)size;
- (id)UIImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUIImage:(id)arg1;

@end

