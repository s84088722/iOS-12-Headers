//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitEventTriggerExecutionSession, NSString;

@interface HomeKitEventTriggerExecutionSessionEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitEventTriggerExecutionSession *_metric;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) AWDHomeKitEventTriggerExecutionSession *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

