//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent
{
    NSString *_reason;
}

+ (id)identifier;
@property(readonly, copy) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)initWithReason:(id)arg1;

@end

