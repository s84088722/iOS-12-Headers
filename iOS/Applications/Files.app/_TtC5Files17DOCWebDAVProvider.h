//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Files21DOCFileProviderSource.h"

@interface _TtC5Files17DOCWebDAVProvider : _TtC5Files21DOCFileProviderSource
{
    // Error parsing type: , name: rootItemCollection
    // Error parsing type: , name: rootItemCollectionObserverCount
    // Error parsing type: , name: isEjectable
}

- (CDUnknownBlockType).cxx_destruct;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
@property(nonatomic) _Bool isEjectable; // @synthesize isEjectable;
- (void)dealloc;

@end

