//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListCoalescingControlsView, UIView;

@protocol NCNotificationListCoalescingControlsViewDelegate <NSObject>

@optional
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 didTransitionToClearState:(_Bool)arg2;
- (void)notificationListCoalescingControlsViewRequestsRestack:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(NCNotificationListCoalescingControlsView *)arg1;
- (UIView *)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(NCNotificationListCoalescingControlsView *)arg1;
@end

