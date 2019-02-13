//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSCH3DGLStatisticsData;

__attribute__((visibility("hidden")))
@interface TSCH3DGLStatistics : NSObject
{
    unsigned long long mLifespan;
    NSMutableArray *mFrames;
}

- (void)drawGeometry:(id)arg1;
- (void)activateShader:(id)arg1;
- (void)endFrame;
- (void)beginFrame;
@property(readonly, nonatomic) TSCH3DGLStatisticsData *currentFrameStatistics;
@property(readonly, nonatomic) TSCH3DGLStatisticsData *allFramesStatistics;
- (void)pushStatistics;
- (id)description;
- (void)dealloc;
- (id)init;

@end

