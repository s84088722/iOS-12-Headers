/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BKUIPearlAudioSession, BKUIPearlVideoCaptureSession;

@interface BKUIPearlEnrollControllerPreloadedState : NSObject {

	NSArray* _cachedEntryAnimationImages;
	BKUIPearlAudioSession* _cachedAudioSession;
	BKUIPearlVideoCaptureSession* _cachedVideoCaptureSession;

}
-(void)cacheEntryAnimationImages:(id)arg1 ;
-(void)cacheAudioSession:(id)arg1 ;
-(void)cacheVideoCaptureSession:(id)arg1 ;
-(id)acquireCachedVideoCaptureSession;
-(id)acquireCachedEntryAnimationImages;
-(id)acquireCachedAudioSession;
@end

