//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/UIPageViewControllerDataSource-Protocol.h>
#import <StoreKitUI/UIPageViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIScrollViewDelegate-Protocol.h>

@class NSMapTable, NSObject, NSString, SKUIGalleryPageComponent, SKUIMediaComponent, SKUIResourceLoader, UIPageControl, UIPageViewController, UITapGestureRecognizer;
@protocol OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;

@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_componentArtworkRequests;
    NSObject<OS_dispatch_source> *_cycleTimer;
    id <SKUIEmbeddedMediaViewDelegate> _embeddedMediaDelegate;
    SKUIGalleryPageComponent *_galleryComponent;
    UIPageControl *_pageIndicator;
    UIPageViewController *_pageViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(readonly, nonatomic) SKUIGalleryPageComponent *galleryComponent; // @synthesize galleryComponent=_galleryComponent;
@property(nonatomic) __weak id <SKUIEmbeddedMediaViewDelegate> embeddedMediaDelegate; // @synthesize embeddedMediaDelegate=_embeddedMediaDelegate;
- (void).cxx_destruct;
- (void)_stopCycleTimer;
- (void)_startCycleTimer;
- (void)_showNextPaneAnimated:(_Bool)arg1;
- (id)_selectedViewController;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)_newViewControllerWithIndex:(long long)arg1;
- (void)_finishPaneAnimation;
- (void)_tapAction:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) SKUIMediaComponent *selectedMediaComponent;
- (void)performActionForSelectedComponentAnimated:(_Bool)arg1;
- (void)loadArtworkForChildComponent:(id)arg1 reason:(long long)arg2 constraintWidth:(double)arg3;
- (void)dealloc;
- (id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

