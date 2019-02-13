//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem
{
    NSMutableSet *_responses;
    NSMutableSet *_successfulICS;
    NSMutableSet *_failedResponseItems;
}

@property(retain, nonatomic) NSMutableSet *failedResponseItems; // @synthesize failedResponseItems=_failedResponseItems;
@property(retain, nonatomic) NSMutableSet *successfulICS; // @synthesize successfulICS=_successfulICS;
@property(retain, nonatomic) NSMutableSet *responses; // @synthesize responses=_responses;
- (void).cxx_destruct;
- (id)description;
- (void)addNewTopLevelItem:(id)arg1;
- (id)copyParseRules;

@end

