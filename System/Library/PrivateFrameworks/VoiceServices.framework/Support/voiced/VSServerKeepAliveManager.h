//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface VSServerKeepAliveManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeKeepAlives;
}

- (void).cxx_destruct;
- (void)cancelKeepAlive:(id)arg1;
- (void)maintainKeepAlive:(id)arg1;
- (_Bool)hasActiveKeepAlives;
- (id)init;

@end

