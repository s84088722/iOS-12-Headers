//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject
{
    SCKAsyncSerialQueue *_startupTaskQueue;
}

@property(retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue; // @synthesize startupTaskQueue=_startupTaskQueue;
- (void).cxx_destruct;
- (void)executeAfterStartup:(CDUnknownBlockType)arg1;
- (void)enqueueStartupBlock:(CDUnknownBlockType)arg1;
- (id)initWithDeferredStartup:(_Bool)arg1;

@end

