//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface AdQueue : NSObject
{
    NSMutableArray *_array;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void)enqueue:(id)arg1;
- (id)dequeue;
- (unsigned long long)count;
- (id)init;

@end

