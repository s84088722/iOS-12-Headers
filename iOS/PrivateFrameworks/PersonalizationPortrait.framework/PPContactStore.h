//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface PPContactStore : NSObject
{
    NSMapTable *_recordLoadingDelegates;
    NSObject<OS_dispatch_queue> *_changeMonitoringQueue;
}

- (void).cxx_destruct;
- (_Bool)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;
- (void)_loadContactNameRecordsWithDelegate:(id)arg1;
- (void)_sendChangesToDelegates;
- (void)_resetContactNameRecordsWithDelegate:(id)arg1;
- (_Bool)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

