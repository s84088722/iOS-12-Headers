//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSString, UNNotificationAttachment;
@protocol NCNotificationCustomContentDelegate;

@interface NCAttachmentViewController : UIViewController <NCNotificationCustomContent>
{
    id <NCNotificationCustomContentDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    UNNotificationAttachment *_attachment;
}

+ (id)attachmentViewControllerForAttachment:(id)arg1 notificationRequest:(id)arg2;
@property(retain, nonatomic) UNNotificationAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)_preferredContentSizeForContainerSize:(struct CGSize)arg1 contentSize:(struct CGSize)arg2;
- (unsigned long long)customContentLocation;
- (_Bool)userInteractionEnabled;
- (_Bool)allowManualDismiss;
- (_Bool)overridesDefaultTitle;
- (_Bool)defaultContentHidden;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)updatePreferredContentSize;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *contentExtensionIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak NCNotificationAction *presentationSourceAction;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

