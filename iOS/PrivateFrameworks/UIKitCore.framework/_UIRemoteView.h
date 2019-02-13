//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UILayerHostView.h>

#import <UIKitCore/UIStatusBarTinting-Protocol.h>

@class NSString, UIColor, _UIHostedWindowHostingHandle;

@interface _UIRemoteView : _UILayerHostView <UIStatusBarTinting>
{
    _Bool _actsAsTintView;
    UIColor *_statusBarTintColor;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    CDUnknownBlockType _tintColorDidChangeHandler;
}

+ (id)viewWithRemoteContextID:(unsigned int)arg1;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (_Bool)_requiresWindowTouches;
+ (Class)layerClass;
@property(copy, nonatomic) CDUnknownBlockType tintColorDidChangeHandler; // @synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler;
@property(retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property(nonatomic, setter=_setActsAsTintView:) _Bool _actsAsTintView; // @synthesize _actsAsTintView;
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;
@property(nonatomic, setter=_setInheritsSecurity:) _Bool _inheritsSecurity;
- (void)tintColorDidChange;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

