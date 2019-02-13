//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFBufferedQueue : NSObject
{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

@property(nonatomic) double maximumLatency; // @synthesize maximumLatency=_maximumLatency;
@property(nonatomic) unsigned int maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_currentSize;
- (_Bool)handleItems:(id)arg1;
- (unsigned long long)sizeForItem:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)flushIfNecessary;
- (_Bool)flush;
- (_Bool)_flush;
- (void)removeAllObjects;
- (_Bool)addItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end

