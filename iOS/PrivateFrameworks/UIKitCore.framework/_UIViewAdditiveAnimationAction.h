//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/CAAction-Protocol.h>

@class CAAnimation, UIView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIViewAdditiveAnimationAction : NSObject <CAAction>
{
    CAAnimation *_pendingAnimation;
    UIViewPropertyAnimator *_animationObject;
    UIView *_view;
}

@property(readonly, retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, retain, nonatomic) UIViewPropertyAnimator *animationObject; // @synthesize animationObject=_animationObject;
@property(readonly, retain, nonatomic) CAAnimation *pendingAnimation; // @synthesize pendingAnimation=_pendingAnimation;
- (void).cxx_destruct;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3;

@end

