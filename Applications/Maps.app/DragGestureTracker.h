//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DragGestureTracking-Protocol.h"

@class ContainerGestureManager, NSString;

__attribute__((visibility("hidden")))
@interface DragGestureTracker : NSObject <DragGestureTracking>
{
    ContainerGestureManager *_gestureManager;
    double _initialHeight;
    _Bool _tracking;
    double _minTranslationY;
    double _maxTranslationY;
}

@property(readonly) double maxTranslationY; // @synthesize maxTranslationY=_maxTranslationY;
@property(readonly) double minTranslationY; // @synthesize minTranslationY=_minTranslationY;
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
- (void).cxx_destruct;
- (double)_currentHeight;
- (void)updateDragForTranslationY:(double)arg1;
- (void)endDragActionWithAnimation:(id)arg1;
- (void)endDragAction;
- (void)beginDragAction;
- (id)initWithGestureController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

