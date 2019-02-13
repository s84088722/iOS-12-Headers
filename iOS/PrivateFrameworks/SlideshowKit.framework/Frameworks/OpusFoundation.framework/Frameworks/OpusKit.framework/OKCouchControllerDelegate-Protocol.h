//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class OKCouchController, OKPageViewController, OKPresentationCouchStep;

@protocol OKCouchControllerDelegate <NSObject>
@property(readonly) OKPageViewController *currentPageViewController;

@optional
- (void)couchControllerPlaybackCompleted:(OKCouchController *)arg1;
- (void)couchControllerPlaybackLooped:(OKCouchController *)arg1;
- (void)couchControllerStopsWaitingForReadiness:(OKCouchController *)arg1;
- (void)couchControllerWaitingForReadiness:(OKCouchController *)arg1 withProgress:(double)arg2;
- (void)couchControllerStartsWaitingForReadiness:(OKCouchController *)arg1;
- (_Bool)couchController:(OKCouchController *)arg1 thingsAreReadyForNextStep:(OKPresentationCouchStep *)arg2 withProgress:(double *)arg3;
- (_Bool)thingsAreReadyInCurrentPageForCouchController:(OKCouchController *)arg1;
- (void)couchControllerDidStopPlayback:(OKCouchController *)arg1;
- (void)couchControllerWillStartPlayback:(OKCouchController *)arg1;
- (_Bool)couchControllerCanStartPlayback:(OKCouchController *)arg1;
@end

