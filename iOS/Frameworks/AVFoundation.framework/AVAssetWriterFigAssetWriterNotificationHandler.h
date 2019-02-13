//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToDelegate;
    int _notificationHandlersAreRegistered;
}

@property(retain, getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:) AVWeakReference *weakReferenceToDelegate; // @synthesize weakReferenceToDelegate=_weakReferenceToDelegate;
- (void)_handleFailedNotificationWithError:(id)arg1;
- (void)_handleCompletedWritingNotification;
- (void)_teardownNotificationHandlers;
- (void)_callDelegateIfNotCalledWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
@property __weak id <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate;

@end

