//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@interface ARFaceTrackingConfiguration : ARConfiguration
{
}

+ (id)supportedVideoFormats;
+ (_Bool)isSupported;
+ (id)new;
- (id)renderingTechnique;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (void)setMirroredFrameOutput:(_Bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(_Bool)arg1;
- (id)init;

@end

