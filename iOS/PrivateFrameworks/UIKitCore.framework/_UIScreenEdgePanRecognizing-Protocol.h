//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizingDelegate;

@protocol _UIScreenEdgePanRecognizing <NSObject>
@property(readonly, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property(nonatomic) unsigned long long targetEdges;
@property(nonatomic) struct CGRect screenBounds;
@property(nonatomic) _Bool shouldUseGrapeFlags;
@property(nonatomic) _Bool recognizeAlongEdge;
@property(nonatomic) _Bool recognizeImmediatelyFromEdgeLocked;
@property(readonly, nonatomic) long long state;
@property(nonatomic) __weak id <_UIScreenEdgePanRecognizingDelegate> delegate;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
- (_Bool)isRequiringLongPress;
- (void)reset;
- (void)giveTouchIdentifiersToIgnore:(void (^)(NSIndexSet *))arg1;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned int)arg7;
- (unsigned long long)maxInitialTouches;
- (id)initWithType:(long long)arg1;
@end

