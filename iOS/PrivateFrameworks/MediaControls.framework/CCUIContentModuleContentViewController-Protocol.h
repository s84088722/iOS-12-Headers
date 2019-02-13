//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@protocol CCUIContentModuleContentViewController <NSObject>
@property(readonly, nonatomic) double preferredExpandedContentHeight;

@optional
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dismissPresentedContentAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (_Bool)canDismissPresentedContent;
- (void)didTransitionToExpandedContentMode:(_Bool)arg1;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
- (_Bool)shouldFinishTransitionToExpandedContentModule;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (void)willResignActive;
- (void)willBecomeActive;
@end

