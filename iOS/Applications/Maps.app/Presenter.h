//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView, UIViewController;
@protocol PresenterPresentationSource;

__attribute__((visibility("hidden")))
@interface Presenter : NSObject
{
    id _dismissalSelfReference;
    CDUnknownBlockType _dismissal;
    NSMutableArray *_completions;
    long long _dismissalCause;
    NSMutableArray *_willDismissBlocks;
    UIView *_positioningView;
    struct CGRect _positioningRect;
    CDUnknownBlockType _positioning;
    id <PresenterPresentationSource> _usedPresentationSource;
    _Bool _presenting;
    _Bool _dismissed;
    _Bool _dismissing;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
}

+ (_Bool)defaultPresentationIsOpaque;
+ (void)dismissPresenterIfNeeded:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) __weak UIViewController *_presentingViewController; // @synthesize _presentingViewController;
- (void).cxx_destruct;
- (_Bool)isPresentingUsingPresenterOfClass:(Class)arg1;
- (void)_presentUsingPresenter:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performDismissalAnimated:(_Bool)arg1;
- (void)_performPresentationOfViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didDismiss;
- (void)_addWillDismissBlock:(CDUnknownBlockType)arg1;
- (void)_willDismiss;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentationBarButtonItem;
- (void)_setUsedPresentationSource:(id)arg1;
- (_Bool)_getPresentationView:(out id *)arg1 rect:(out struct CGRect *)arg2;
- (void)presentFromViewController:(id)arg1 usingPositioningBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentFromRect:(struct CGRect)arg1 ofView:(id)arg2 inViewController:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;

@end

