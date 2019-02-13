//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition, NSString, NSValue, PXContextualNotificationCenter, PXContextualNotificationView, PXImageRequester, UIImage, UIView, UIWindow;
@protocol PXContextualNotificationDelegate;

@interface PXContextualNotification : NSObject
{
    struct {
        _Bool containingFrameInCoordinateSpace;
        _Bool preferredContainerView;
        _Bool preferredAnimation;
        _Bool shouldPassthroughPointInCoordinateSpace;
        _Bool wasTapped;
        _Bool wasDiscarded;
        _Bool didDisappear;
    } _delegateRespondsTo;
    id <PXContextualNotificationDelegate> _delegate;
    long long _style;
    NSString *_title;
    UIImage *_titleIcon;
    NSString *_message;
    UIImage *_image;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    PXImageRequester *_imageRequester;
    id _userInfo;
    long long _appearanceState;
    UIWindow *_window;
    PXContextualNotificationCenter *_contextualNotificationCenter;
    PXContextualNotificationView *_view;
    long long _animationCount;
    NSValue *_releaseVelocity;
    double _panInitialVerticalOffset;
    struct PXContextualNotificationVisualState _nextState;
    struct PXContextualNotificationVisualState _appliedState;
}

@property(nonatomic) double panInitialVerticalOffset; // @synthesize panInitialVerticalOffset=_panInitialVerticalOffset;
@property(retain, nonatomic) NSValue *releaseVelocity; // @synthesize releaseVelocity=_releaseVelocity;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) struct PXContextualNotificationVisualState appliedState; // @synthesize appliedState=_appliedState;
@property(nonatomic) struct PXContextualNotificationVisualState nextState; // @synthesize nextState=_nextState;
@property(retain, nonatomic) PXContextualNotificationView *view; // @synthesize view=_view;
@property(nonatomic) __weak PXContextualNotificationCenter *contextualNotificationCenter; // @synthesize contextualNotificationCenter=_contextualNotificationCenter;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(nonatomic) long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(copy, nonatomic) AVVideoComposition *loopingVideoComposition; // @synthesize loopingVideoComposition=_loopingVideoComposition;
@property(copy, nonatomic) AVAsset *loopingVideoAsset; // @synthesize loopingVideoAsset=_loopingVideoAsset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <PXContextualNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleDiscard;
- (void)handleTap:(id)arg1;
- (_Bool)shouldPassthroughPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) long long preferredAnimation;
@property(readonly, nonatomic) UIView *preferredContainerView;
- (struct CGRect)containingFrameInContainerView:(id)arg1;
- (void)_invalidate;
- (void)dismiss;
- (void)invalidateLayout;
- (void)present;
- (id)init;

@end

