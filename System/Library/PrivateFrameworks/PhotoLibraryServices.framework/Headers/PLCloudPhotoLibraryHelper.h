//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCloudPhotoLibraryHelper : NSObject
{
}

+ (void)pauseCloudPhotos:(_Bool)arg1 reason:(short)arg2;
+ (void)processCloudPhotosLibraryStateChange:(_Bool)arg1;
+ (void)performOnceLibraryIsReadyForCPLManager:(CDUnknownBlockType)arg1;
+ (void)_stopWaitingForLibraryToBeReadyForCPLManager;
+ (_Bool)_isAssetsdReadyForCPLManager;
+ (void)initializeCPLManager;
+ (void)setShouldSendOptimizeFeedbackOnce:(_Bool)arg1;
+ (_Bool)shouldSendOptimizeFeedbackOnce;
+ (void)disableCPL:(CDUnknownBlockType)arg1;
+ (void)enableCPL:(CDUnknownBlockType)arg1;

@end
