//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureExportedInterface-Protocol.h>

@class NSString, PGPictureInPictureProxy;

__attribute__((visibility("hidden")))
@interface _PGPictureInPictureConnectionExportedObject : NSObject <PGPictureInPictureExportedInterface>
{
    PGPictureInPictureProxy *_pictureInPictureProxy;
}

- (void).cxx_destruct;
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureResumed;
- (oneway void)pictureInPictureSuspended;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPictureInPictureProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

