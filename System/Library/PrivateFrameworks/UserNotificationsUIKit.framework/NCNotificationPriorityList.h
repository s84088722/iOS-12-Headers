//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListSection.h>

@interface NCNotificationPriorityList : NCNotificationListSection
{
}

- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (id)allNonPersistentRequests;
- (id)clearRequestsPassingTest:(CDUnknownBlockType)arg1;
- (id)clearNonPersistentRequests;
- (id)clearAllRequests;

@end
