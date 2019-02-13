//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, Route, TransitDirectionsListDataSourceBuilder;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListDataSource : NSObject
{
    Route *_route;
    double _listWidthForLeadingInset;
    double _transitDirectionsListInstructionsLeadingInset;
    TransitDirectionsListDataSourceBuilder *_dataSourceBuilder;
}

@property(retain, nonatomic) TransitDirectionsListDataSourceBuilder *dataSourceBuilder; // @synthesize dataSourceBuilder=_dataSourceBuilder;
@property(readonly, nonatomic) double transitDirectionsListInstructionsLeadingInset; // @synthesize transitDirectionsListInstructionsLeadingInset=_transitDirectionsListInstructionsLeadingInset;
@property(readonly, nonatomic) __weak Route *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)_itemAtIndexPath:(id)arg1 currentPosition:(unsigned long long)arg2 inItems:(id)arg3 forceExpandItems:(_Bool)arg4;
- (id)itemAtIndexPath:(id)arg1 forceExpandItems:(_Bool)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberofItemsInSection:(long long)arg1 forceExpandItems:(_Bool)arg2;
- (long long)numberofItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)transitSegmentSectionRanges;
- (void)resetArtworkSize;
- (void)_expandItemsAtIndices:(id)arg1;
- (id)_expandedItemsIndices;
- (void)_rebuildItems;
- (void)updateForClusteredLegSelectedRideIndexChange;
- (void)refreshItemInstructionStrings;
- (void)measureShieldWidthForListWidth:(double)arg1;
- (id)initWithRoute:(id)arg1;
@property(readonly, nonatomic) NSArray *_transitDirectionsListItems;

@end
