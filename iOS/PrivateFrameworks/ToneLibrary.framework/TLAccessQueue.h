//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject
{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)_performSynchronousBlockInSerialQueue:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2;

@end

