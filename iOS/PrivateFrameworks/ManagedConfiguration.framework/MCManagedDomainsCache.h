//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MCManagedDomainsCache : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableArray *_memberQueueCache;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableArray *memberQueueCache; // @synthesize memberQueueCache=_memberQueueCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void).cxx_destruct;
- (void)memberQueueRereadCache;
- (void)rereadCache;
- (_Bool)isURLManaged:(id)arg1;
- (id)init;

@end

