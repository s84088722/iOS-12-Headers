//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKEventStatsCounterInternalProperty-Protocol.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)incrementCountByNumber:(unsigned long long)arg1;
- (void)incrementCount;
- (id)eventName;

@end

