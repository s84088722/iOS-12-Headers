//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HKGraphSeriesSecondaryRenderContext : NSObject
{
    NSMutableArray *_aboveScreenRegions;
    NSMutableArray *_belowScreenRegions;
}

- (void).cxx_destruct;
- (void)drawInAxisRect:(struct CGRect)arg1 backgroundColor:(id)arg2 renderContext:(struct CGContext *)arg3;
- (void)addOffScreenRegionAtLocation:(double)arg1 color:(id)arg2 aboveScreen:(_Bool)arg3;
- (void)addOffScreenRegionWithStartLocation:(double)arg1 endLocation:(double)arg2 color:(id)arg3 aboveScreen:(_Bool)arg4;
- (id)init;

@end

