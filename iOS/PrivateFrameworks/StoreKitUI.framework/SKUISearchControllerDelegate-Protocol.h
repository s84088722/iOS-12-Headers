//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>
#import <StoreKitUI/UISearchControllerDelegate-Protocol.h>

@class SKUIClientContext, SKUISearchController;
@protocol UIViewControllerTransitionCoordinator;

@protocol SKUISearchControllerDelegate <NSObject, UISearchControllerDelegate>
- (SKUIClientContext *)searchControllerClientContext:(SKUISearchController *)arg1;
- (void)searchControllerWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
@end

