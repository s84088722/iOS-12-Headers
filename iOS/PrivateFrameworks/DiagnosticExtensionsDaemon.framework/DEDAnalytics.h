//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEDAnalytics : NSObject
{
}

+ (void)didCompleteBugSessionWithState:(long long)arg1;
+ (void)finisherDidCompleteWithDuration:(unsigned long long)arg1 uploadedByteCount:(unsigned long long)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4;
+ (void)finisherDidStartWithFileCount:(unsigned long long)arg1 expectedByteUploadCount:(unsigned long long)arg2 finishingMove:(long long)arg3;
+ (void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(unsigned long long)arg2 bytesCollected:(unsigned long long)arg3 duration:(unsigned long long)arg4 errorCode:(long long)arg5;
+ (void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(unsigned long long)arg2;
+ (void)didStartExtensionWithIdentifier:(id)arg1;
+ (void)didCreateBugSessionForApp:(id)arg1;
+ (void)didCheckInDeferredExtensionsWithCount:(unsigned long long)arg1;
+ (void)didStartDaemon;
+ (id)log;

@end

