//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WLKNotificationCenterDelegate, WLKNotificationsImpl;

@interface WLKNotificationCenter : NSObject
{
    id <WLKNotificationsImpl> _impl;
    id <WLKNotificationCenterDelegate> _delegate;
}

@property(nonatomic) __weak id <WLKNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (id)init;

@end
