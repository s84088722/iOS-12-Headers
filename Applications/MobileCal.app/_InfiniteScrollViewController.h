//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol _InfiniteScrollViewControllerDelegate;

@interface _InfiniteScrollViewController : UIViewController
{
    id <_InfiniteScrollViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_InfiniteScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;

@end

