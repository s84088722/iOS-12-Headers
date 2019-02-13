//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder
{
    NSMutableArray *_items;
}

- (void)shuffleWithCurrentIndex:(unsigned int)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPaths;
- (unsigned long long)itemCount;
- (id)itemForIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

