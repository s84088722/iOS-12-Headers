//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentBehaviorHandler.h>

@class UIAttachmentBehavior, UIDynamicAnimator;

@interface SXSpringyComponentBehaviorHandler : SXComponentBehaviorHandler
{
    double _lastYOffset;
    UIAttachmentBehavior *_dynamicBehavior;
    UIDynamicAnimator *_dynamicAnimator;
    double _frequency;
    double _damping;
    double _delta;
    struct CGPoint _originalCenter;
}

@property(readonly, nonatomic) double delta; // @synthesize delta=_delta;
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(retain, nonatomic) UIDynamicAnimator *dynamicAnimator; // @synthesize dynamicAnimator=_dynamicAnimator;
@property(retain, nonatomic) UIAttachmentBehavior *dynamicBehavior; // @synthesize dynamicBehavior=_dynamicBehavior;
@property(nonatomic) double lastYOffset; // @synthesize lastYOffset=_lastYOffset;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;

@end

