//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookPreviewViewControllerFactory-Protocol.h>

@class NSString;
@protocol SXMediaSharingPolicyProvider;

@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory>
{
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
}

@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
- (void).cxx_destruct;
- (id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2;
- (id)initWithMediaSharingPolicyProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

