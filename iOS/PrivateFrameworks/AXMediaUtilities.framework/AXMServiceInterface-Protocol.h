//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/NSObject-Protocol.h>

@class AXMSourceNode, AXMVisionEngine, AXMVisionPipelineContext;

@protocol AXMServiceInterface <NSObject>
- (void)visionEngine:(AXMVisionEngine *)arg1 evaluateSource:(AXMSourceNode *)arg2 context:(AXMVisionPipelineContext *)arg3 options:(long long)arg4 result:(void (^)(AXMVisionResult *, NSError *))arg5;
- (void)prewarmVisionEngineService;
@end

