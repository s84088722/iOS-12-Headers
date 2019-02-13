//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageMedian : MPSUnaryImageKernel
{
    unsigned long long _filterDiameter;
}

+ (unsigned long long)maxKernelDiameter;
+ (unsigned long long)minKernelDiameter;
+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long kernelDiameter; // @synthesize kernelDiameter=_filterDiameter;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2;
- (void)initEncoder;

@end

