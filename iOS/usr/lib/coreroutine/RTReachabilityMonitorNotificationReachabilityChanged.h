//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTReachabilityMonitorNotificationReachabilityChanged : RTNotification
{
    long long _reachability;
}

@property(readonly, nonatomic) long long reachability; // @synthesize reachability=_reachability;
- (id)initWithReachability:(long long)arg1;

@end

