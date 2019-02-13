//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSObject, PXMemoriesDataSourceState;
@protocol OS_dispatch_queue;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXMemoriesDataSourceState *__state;
}

@property(readonly, nonatomic) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end

