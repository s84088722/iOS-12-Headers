//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FROfflineTitleProvider : NSObject
{
}

+ (id)offlineIgnoreActionTitleWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2 withInfo:(id)arg3;
+ (id)offlineIgnoreActionTitleWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2;
+ (id)offlineAcceptActionTitleWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2 withInfo:(id)arg3;
+ (id)offlineAcceptActionTitleWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2;
+ (id)offlineMessageWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2 withInfo:(id)arg3;
+ (id)offlineMessageWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2;
+ (id)offlineTitleWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2 withInfo:(id)arg3;
+ (id)offlineTitleWithOfflineReason:(long long)arg1 offlineViewContext:(long long)arg2;
+ (id)errorMessageFactory;

@end
