//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemSource.h"

@class NSObject, NSSet, RouteStartEndItem, SearchResult;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RouteStartEndItemSource : PersonalizedItemSource
{
    RouteStartEndItem *_startItem;
    RouteStartEndItem *_endItem;
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _shouldAlwaysShowStartPin;
    SearchResult *_startLocation;
    SearchResult *_endLocation;
}

@property _Bool shouldAlwaysShowStartPin; // @synthesize shouldAlwaysShowStartPin=_shouldAlwaysShowStartPin;
@property(readonly, nonatomic) SearchResult *endLocation; // @synthesize endLocation=_endLocation;
@property(readonly, nonatomic) SearchResult *startLocation; // @synthesize startLocation=_startLocation;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *keysForEndLocation;
@property(readonly, nonatomic) NSSet *keysForStartLocation;
- (id)allItems;
- (void)setStartLocation:(id)arg1 endLocation:(id)arg2;
- (void)clearStartAndEndLocations;
- (id)init;

@end

