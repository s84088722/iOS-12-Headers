//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKCharacterFrameBuffer : NSObject
{
    unsigned int _defaultFBOName;
    unsigned int _colorRenderbuffer;
    int _width;
    int _height;
}

- (void)present;
- (_Bool)resizeWithLayer:(id)arg1;
- (void)setupWithLayer:(id)arg1;
- (_Bool)validWithLayer:(id)arg1;
- (void)invalidate;
- (id)initWithLayer:(id)arg1;

@end

