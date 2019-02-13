//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Presenter.h"

#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ModalPresenter : Presenter <UIAdaptivePresentationControllerDelegate>
{
    _Bool _presentsViewControllerInNavigationController;
    long long _adaptivePresentationStyle;
    long long _presentationStyle;
    CDUnknownBlockType _navigationControllerCreationBlock;
}

+ (_Bool)defaultPresentationIsOpaque;
@property(copy, nonatomic) CDUnknownBlockType navigationControllerCreationBlock; // @synthesize navigationControllerCreationBlock=_navigationControllerCreationBlock;
@property(nonatomic) _Bool presentsViewControllerInNavigationController; // @synthesize presentsViewControllerInNavigationController=_presentsViewControllerInNavigationController;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) long long adaptivePresentationStyle; // @synthesize adaptivePresentationStyle=_adaptivePresentationStyle;
- (void).cxx_destruct;
- (void)willPresentViewControllerAnimated:(_Bool)arg1;
- (void)_performDismissalAnimated:(_Bool)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)_performPresentationOfViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPresentedViewController:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

