//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UIPageViewControllerDataSource-Protocol.h>
#import <PhotosUICore/UIPageViewControllerDelegate-Protocol.h>

@class NSArray, NSString, UIPageViewController;

@interface PXPeoplePageWrapperViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    long long _presentationPageIndex;
}

@property(nonatomic) long long presentationPageIndex; // @synthesize presentationPageIndex=_presentationPageIndex;
@property(retain) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;
- (void)_updateNavigationItemForCurrentViewController:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (long long)presentationIndexForPageViewController:(id)arg1;
- (long long)presentationCountForPageViewController:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)updateForSelectionChanged:(id)arg1;
- (void)updateForExitingSelectMode:(id)arg1;
- (void)updateForEnteringSelectMode:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)_showViewControllerAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewControllers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

