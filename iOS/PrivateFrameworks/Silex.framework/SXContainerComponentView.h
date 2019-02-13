//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXComponentHosting-Protocol.h>
#import <Silex/SXDragManagerDataSource-Protocol.h>

@class NSArray, NSString, SXDragManager;
@protocol SXMediaSharingPolicyProvider;

@interface SXContainerComponentView : SXComponentView <SXDragManagerDataSource, SXComponentHosting>
{
    NSArray *_componentViews;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    SXDragManager *_dragManager;
}

@property(retain, nonatomic) SXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
@property(retain, nonatomic) NSArray *componentViews; // @synthesize componentViews=_componentViews;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)allowHierarchyRemoval;
- (_Bool)userInteractable;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (id)viewForDragManager:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (_Bool)isTransitionable;
- (_Bool)transitionViewShouldFadeInContent;
- (id)transitionContentView;
- (_Bool)transitionViewUsesThumbnail;
- (struct CGRect)transitionContentFrame;
- (void)removeComponentView:(id)arg1;
- (void)addComponentView:(id)arg1;
- (id)componentViewsForRole:(int)arg1 recursive:(_Bool)arg2;
- (double)suggestedContainerHeightForWidth:(double)arg1;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)contentViewForBehavior:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 mediaSharingPolicyProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
