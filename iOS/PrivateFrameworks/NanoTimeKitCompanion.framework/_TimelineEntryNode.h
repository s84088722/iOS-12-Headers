//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/_TimelineNode.h>

@class NSDate;
@protocol CLKTimelineEntry;

@interface _TimelineEntryNode : _TimelineNode
{
    id <CLKTimelineEntry> _entry;
}

@property(retain, nonatomic) id <CLKTimelineEntry> entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date;

@end

