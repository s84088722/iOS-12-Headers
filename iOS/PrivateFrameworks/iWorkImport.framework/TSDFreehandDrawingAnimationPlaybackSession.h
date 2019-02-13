//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDRepDynamicOverrideProvider-Protocol.h>

@class NSString, TSDFreehandDrawingAnimationPlaybackTiming, TSDFreehandDrawingInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingAnimationPlaybackSession : NSObject <TSDRepDynamicOverrideProvider>
{
    TSDFreehandDrawingInfo *_drawingInfo;
    TSDFreehandDrawingAnimationPlaybackTiming *_timing;
    _Bool _shouldParameterizeStrokes;
    double _progress;
    double _framesPerSecond;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool shouldParameterizeStrokes; // @synthesize shouldParameterizeStrokes=_shouldParameterizeStrokes;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)dynamicOverrideForRep:(id)arg1;
- (void)p_updateShouldParameterizeStrokes;
- (double)visibilityOfChild:(id)arg1;
- (id)initWithFreehandDrawingInfo:(id)arg1 duration:(double)arg2 framesPerSecond:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

