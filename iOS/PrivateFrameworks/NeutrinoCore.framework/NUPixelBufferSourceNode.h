//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode
{
    struct __CVBuffer *_pixelBuffer;
}

- (CDStruct_912cb5d2)pixelSize;
- (id)_evaluateImage:(out id *)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 settings:(id)arg2 orientation:(long long)arg3;

@end

