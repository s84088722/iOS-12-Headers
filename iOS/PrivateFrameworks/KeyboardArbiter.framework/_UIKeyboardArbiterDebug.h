//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterDebug : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _importantCount;
    NSMutableArray *_entries;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getDebugInfoDictionariesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAsynchronousData:(CDUnknownBlockType)arg1;
- (void)errorWithFormat:(const char *)arg1;
- (void)debugWithFormat:(const char *)arg1;
- (void)infoWithFormat:(const char *)arg1;
- (void)addEntry:(id)arg1;
- (id)init;

@end

