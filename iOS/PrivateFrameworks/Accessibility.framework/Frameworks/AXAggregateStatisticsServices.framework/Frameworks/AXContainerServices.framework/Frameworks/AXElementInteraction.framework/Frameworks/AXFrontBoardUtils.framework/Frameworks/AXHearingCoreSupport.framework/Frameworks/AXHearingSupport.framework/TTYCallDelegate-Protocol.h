//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class NSString, TTYCall;

@protocol TTYCallDelegate <NSObject>
- (void)ttyCall:(TTYCall *)arg1 didReceiveString:(NSString *)arg2 forUtterance:(NSString *)arg3;
@end

