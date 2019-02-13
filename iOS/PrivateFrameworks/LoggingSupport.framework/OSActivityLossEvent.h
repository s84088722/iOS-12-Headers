//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityLossEvent : OSActivityEvent
{
    _Bool _saturated;
    unsigned int _count;
    unsigned long long _startMachTimestamp;
    unsigned long long _endMachTimestamp;
}

@property(readonly, nonatomic) _Bool saturated; // @synthesize saturated=_saturated;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long endMachTimestamp; // @synthesize endMachTimestamp=_endMachTimestamp;
@property(readonly, nonatomic) unsigned long long startMachTimestamp; // @synthesize startMachTimestamp=_startMachTimestamp;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

