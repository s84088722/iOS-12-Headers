//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistorySessionController;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionSearcher : NSObject
{
    WBSHistorySessionController *_sessionController;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (void).cxx_destruct;
- (void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSessionController:(id)arg1;
- (id)init;

@end

