//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;

@interface ARSCNPlaneGeometry : SCNGeometry
{
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _textureCoordinateBuffer;
}

+ (id)planeGeometryWithDevice:(id)arg1;
- (void).cxx_destruct;
- (void)updateFromPlaneGeometry:(id)arg1;

@end
