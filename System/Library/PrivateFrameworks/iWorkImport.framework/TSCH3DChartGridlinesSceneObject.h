//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

@class TSCH3DPrefilteredLineRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject
{
    TSCH3DPrefilteredLineRenderer *mRenderer;
}

+ (struct TSCH3DScenePart)partWithAxes:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)render:(id)arg1;
- (void)p_render:(id)arg1;
- (_Bool)p_shouldRenderInFrontForPipeline:(id)arg1;
- (tmat4x4_3074befe)p_gridlineTransformForPipeline:(id)arg1;
- (id)effects;
- (void)dealloc;
- (id)init;

@end

