//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDWorkQueueItem;

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem
{
    SGDWorkQueueItem *_workQueueItem;
    _Bool _highPriority;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)highPriority;
- (void)markAsFailed;
- (void)finish;
- (void)dealloc;
- (id)initWithWorkQueueItem:(id)arg1 item:(id)arg2 highPriority:(_Bool)arg3;

@end
