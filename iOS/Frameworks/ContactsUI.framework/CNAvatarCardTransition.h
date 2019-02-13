//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIView;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _reversed;
    _Bool _interactive;
    UIPanGestureRecognizer *_gestureRecognizer;
    id <UIViewControllerContextTransitioning> _context;
    UIView *_presentedView;
}

@property(readonly, nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(retain, nonatomic) UIView *presentedView; // @synthesize presentedView=_presentedView;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> context; // @synthesize context=_context;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property _Bool reversed; // @synthesize reversed=_reversed;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
