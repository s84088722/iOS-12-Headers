//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, RTMapItem;

@interface RTHistoryEntryPlaceDisplay : NSObject
{
    NSDate *_usageDate;
    RTMapItem *_mapItem;
}

@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSDate *usageDate; // @synthesize usageDate=_usageDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUsageDate:(id)arg1 mapItem:(id)arg2;
- (id)init;

@end
