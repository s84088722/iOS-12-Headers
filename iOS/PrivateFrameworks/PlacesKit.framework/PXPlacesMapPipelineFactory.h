//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXPlacesMapPipelineFactory : NSObject
{
}

+ (id)smallCirclePipelineForDataSource:(id)arg1 geotaggableInfo:(id)arg2;
+ (id)smallCirclePipelineForDataSource:(id)arg1;
+ (id)thumbnailPipelineForDataSource:(id)arg1 extendedTraitCollection:(id)arg2 geotaggableInfo:(id)arg3 popoverImageType:(unsigned long long)arg4;
+ (id)thumbnailPipelineForDataSource:(id)arg1 extendedTraitCollection:(id)arg2 geotaggableInfo:(id)arg3;
+ (id)circlePipelineForDataSource:(id)arg1;
+ (id)dotsOverlayPipelineForDataSource:(id)arg1;
+ (id)pinPipelineForDataSource:(id)arg1;
+ (id)defaultPipelineForDataSource:(id)arg1;

@end

