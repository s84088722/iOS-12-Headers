//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CGRenderer.h>

__attribute__((visibility("hidden")))
@interface PNGRenderer : CGRenderer
{
    struct __CFURL *fullURL;
    struct CGColor *background;
    struct CGColorSpace *colorSpace;
}

- (struct CGImage *)cgimage;
- (void)flushRender;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

