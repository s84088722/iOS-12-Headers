//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICanvasMetricsUpdating-Protocol.h>

@class NSString, _UICanvas;

__attribute__((visibility("hidden")))
@interface _UICanvasMetricsLegacyCalculator : NSObject <_UICanvasMetricsUpdating>
{
    _UICanvas *_canvas;
}

@property(nonatomic) __weak _UICanvas *canvas; // @synthesize canvas=_canvas;
- (void).cxx_destruct;
- (void)updateMetricsOnWindows:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

