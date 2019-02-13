//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Presenter.h"

#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class NSString, UIPopoverPresentationController;

__attribute__((visibility("hidden")))
@interface PopoverPresenter : Presenter <UIPopoverPresentationControllerDelegate>
{
    _Bool _hasSeenFirstAdaptivityCall;
    _Bool _wasAdaptive;
    UIPopoverPresentationController *_presentationController;
    _Bool _presentsViewControllerInNavigationController;
    CDUnknownBlockType _navigationControllerCreationBlock;
    long long _adaptivePresentationStyle;
    CDUnknownBlockType _willAdaptToNewPresentationStyle;
    unsigned long long _permittedArrowDirections;
}

@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(copy, nonatomic) CDUnknownBlockType willAdaptToNewPresentationStyle; // @synthesize willAdaptToNewPresentationStyle=_willAdaptToNewPresentationStyle;
@property(nonatomic) long long adaptivePresentationStyle; // @synthesize adaptivePresentationStyle=_adaptivePresentationStyle;
@property(copy, nonatomic) CDUnknownBlockType navigationControllerCreationBlock; // @synthesize navigationControllerCreationBlock=_navigationControllerCreationBlock;
@property(nonatomic) _Bool presentsViewControllerInNavigationController; // @synthesize presentsViewControllerInNavigationController=_presentsViewControllerInNavigationController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool usingAdaptivePresentation;
- (void)_setAdaptive:(_Bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
@property(nonatomic) struct CGSize popoverContentSize;
- (void)willPresentPopoverAnimated:(_Bool)arg1;
- (void)_didDismiss;
- (void)_performDismissalAnimated:(_Bool)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)_performPresentationOfViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

