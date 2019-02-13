//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKUIAutocompletePendingSearchProtocol-Protocol.h>

@class EKEventStore, NSString;
@protocol CalSpotlightQueryPendingSearchProtocol;

@interface EKUIAutocompletePendingSearch : NSObject <EKUIAutocompletePendingSearchProtocol>
{
    EKEventStore *_eventStore;
    unsigned long long _maximumResultCount;
    id <CalSpotlightQueryPendingSearchProtocol> _pendingSearch;
}

+ (void)_updateResult:(id)arg1 withEvent:(id)arg2;
+ (id)_eventKitQueue;
+ (id)_queue;
- (void).cxx_destruct;
- (void)cancel;
- (void)searchWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

