//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class CADisplayLink, NSMutableSet, NSString, SXViewport;

@interface SXComponentAnimationController : NSObject <SXViewportChangeListener>
{
    NSMutableSet *_registeredComponents;
    NSMutableSet *_animatingComponents;
    SXViewport *_viewport;
    CADisplayLink *_displayLink;
    NSMutableSet *_animationHandlersToFinish;
}

@property(readonly, nonatomic) NSMutableSet *animationHandlersToFinish; // @synthesize animationHandlersToFinish=_animationHandlersToFinish;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) NSMutableSet *animatingComponents; // @synthesize animatingComponents=_animatingComponents;
@property(retain, nonatomic) NSMutableSet *registeredComponents; // @synthesize registeredComponents=_registeredComponents;
- (void).cxx_destruct;
- (void)displayLinkTick:(id)arg1;
- (void)startOrStopDisplayLink;
- (void)finishAnimationHandlerAnimated:(id)arg1;
- (id)animatingHandlerForComponent:(id)arg1;
- (id)registeredHandlerForComponent:(id)arg1;
- (struct CGRect)convertRectForComponent:(id)arg1;
- (void)updateVisibleBounds:(struct CGRect)arg1;
- (void)updateVisibleBoundsIfNeeded;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)stopUpdatingAnimationForComponentView:(id)arg1 finishAnimation:(_Bool)arg2;
- (void)stopUpdatingAnimationForComponentView:(id)arg1;
- (void)startUpdatingAnimationForComponentView:(id)arg1;
- (void)unregisterComponentView:(id)arg1;
- (void)registerComponentView:(id)arg1 animation:(id)arg2;
- (id)initWithViewport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

