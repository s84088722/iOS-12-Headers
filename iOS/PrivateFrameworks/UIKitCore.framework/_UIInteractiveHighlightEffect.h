//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIVisualEffectView, _UIInteractiveHighlightEnvironment, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightEffect : NSObject
{
    UIView *_view;
    UIVisualEffectView *_effectView;
    _UIInteractiveHighlightEnvironment *_environment;
    UIView *_superview;
    _UIPortalView *_portalView;
    struct UIEdgeInsets _preferredContentInsets;
}

@property(nonatomic) __weak _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(nonatomic) __weak UIView *superview; // @synthesize superview=_superview;
@property(retain, nonatomic) _UIInteractiveHighlightEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) struct UIEdgeInsets preferredContentInsets; // @synthesize preferredContentInsets=_preferredContentInsets;
@property(nonatomic) __weak UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finalizeEffect;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

