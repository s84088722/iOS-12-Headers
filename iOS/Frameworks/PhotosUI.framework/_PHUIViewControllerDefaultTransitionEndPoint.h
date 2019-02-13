//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXUIViewControllerTransitionEndPoint-Protocol.h>
#import <PhotosUI/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _PHUIViewControllerDefaultTransitionEndPoint : NSObject <PXUIViewControllerTransitionEndPoint, PXUIViewControllerZoomTransitionEndPoint>
{
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
- (id)removeBackgroundColorForTransition:(id)arg1;
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

