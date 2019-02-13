//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIKeyboardAnimatorState-Protocol.h>

@class NSString, UIInputViewSetPlacement, UIView;
@protocol UIInputViewAnimationHost;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState>
{
    id <UIInputViewAnimationHost> _host;
    UIInputViewSetPlacement *_start;
    UIInputViewSetPlacement *_end;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    _Bool _hidden;
}

@property(nonatomic) _Bool inputViewsHidden; // @synthesize inputViewsHidden=_hidden;
@property(readonly, nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(readonly, nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
- (void).cxx_destruct;
- (void)complete;
@property(readonly, retain, nonatomic) UIView *animatingView;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

