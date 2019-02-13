//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputViewAnimationStyle.h>

@class _UIKeyboardAnimator;
@protocol UIInputViewAnimationHost;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle
{
    _UIKeyboardAnimator *_animator;
    id <UIInputViewAnimationHost> _currentHost;
    _Bool _currentFromPosition;
}

+ (id)animationStyleWithAnimator:(id)arg1;
- (void).cxx_destruct;
- (void)defaultLaunchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;

@end

