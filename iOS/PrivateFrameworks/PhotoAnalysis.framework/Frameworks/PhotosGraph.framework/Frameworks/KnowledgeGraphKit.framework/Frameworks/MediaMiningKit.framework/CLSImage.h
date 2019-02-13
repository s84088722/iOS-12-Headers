//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSImage : NSObject
{
    struct CGImageSource *_sourceRef;
    unsigned long long _sourceCount;
    unsigned long long _orientation;
    struct CGSize _bitmapSize;
    struct CGSize _pixelSize;
}

@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize bitmapSize; // @synthesize bitmapSize=_bitmapSize;
- (struct CGImage *)createCGImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2;
@property(readonly, nonatomic) double pixelAspectRatio;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

