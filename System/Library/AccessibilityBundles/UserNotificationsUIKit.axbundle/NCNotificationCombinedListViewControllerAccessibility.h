//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__NCNotificationCombinedListViewControllerAccessibility_super.h"

@interface NCNotificationCombinedListViewControllerAccessibility : __NCNotificationCombinedListViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axNonPersistentRequests;
- (unsigned long long)_accessibilityNotificationCount;
- (id)_accessibilityNotificationSummary:(unsigned long long)arg1;
- (void)_axSetShowingRecentNotifications:(_Bool)arg1;
- (void)notificationListCoalescingControlsHandler:(id)arg1 requestsRestackingNotificationsWithCoalescingIdentifier:(id)arg2 inSection:(unsigned long long)arg3;
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;
- (void)setShowingNotificationsHistory:(_Bool)arg1;
- (_Bool)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityPerformEscape;

@end

