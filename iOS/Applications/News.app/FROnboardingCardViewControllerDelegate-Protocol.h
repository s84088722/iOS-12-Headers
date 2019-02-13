//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FROnboardingCardViewController, FROnboardingSubscribableItem;

@protocol FROnboardingCardViewControllerDelegate <NSObject>
- (_Bool)cardViewControllerPermittedToSelectAnotherItem:(FROnboardingCardViewController *)arg1;
- (void)cardViewControllerApproachingBottomOfScrollView:(FROnboardingCardViewController *)arg1;
- (void)cardViewController:(FROnboardingCardViewController *)arg1 didTapOnItem:(FROnboardingSubscribableItem *)arg2 selected:(_Bool)arg3 index:(unsigned long long)arg4;

@optional
- (void)cardViewControllerWillBeginScrolling:(FROnboardingCardViewController *)arg1;
- (void)cardViewControllerDidEndScrolling:(FROnboardingCardViewController *)arg1;
@end
