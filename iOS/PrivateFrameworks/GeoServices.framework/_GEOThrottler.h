//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOThrottler : NSObject
{
    struct vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;
    unsigned int _currentIndex;
    double _timeWindow;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)remainingEntries;
- (_Bool)addRequestTimestamp;
- (id)initWithRequestCount:(unsigned long long)arg1 interval:(double)arg2;
- (id)initForKey:(struct GEOThrottleKey)arg1;

@end

