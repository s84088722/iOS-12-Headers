//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SearchHistoryRecorder-Protocol.h"

@class MSPMutableHistoryEntryPlaceDisplay;

__attribute__((visibility("hidden")))
@interface SearchPlaceDisplayHistoryRecorder : NSObject <SearchHistoryRecorder>
{
    MSPMutableHistoryEntryPlaceDisplay *_placeDisplayHistoryItem;
}

@property(retain, nonatomic) MSPMutableHistoryEntryPlaceDisplay *placeDisplayHistoryItem; // @synthesize placeDisplayHistoryItem=_placeDisplayHistoryItem;
- (void).cxx_destruct;
- (void)recordItemInHistory;
- (id)initWithGEOMapItem:(id)arg1 placeDisplayHistoryItem:(id)arg2;
- (id)initWithGEOMapItem:(id)arg1;

@end
