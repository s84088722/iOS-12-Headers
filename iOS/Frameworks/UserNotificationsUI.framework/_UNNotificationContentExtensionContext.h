//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class NSArray;
@protocol _UNNotificationExtensionHostInterface;

@interface _UNNotificationContentExtensionContext : NSExtensionContext
{
    id <_UNNotificationExtensionHostInterface> _hostService;
    NSArray *_notificationActions;
}

@property(copy, nonatomic) NSArray *notificationActions; // @synthesize notificationActions=_notificationActions;
@property(nonatomic) __weak id <_UNNotificationExtensionHostInterface> hostService; // @synthesize hostService=_hostService;
- (void).cxx_destruct;
- (void)requestDismiss;
- (void)dismissNotificationContentExtension;
- (void)performNotificationDefaultAction;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mediaPlayingPaused;
- (void)mediaPlayingStarted;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end

