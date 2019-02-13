//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointRange : CUTCheckpointSignpost
{
    _Bool _ordered;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(nonatomic, getter=isOrdered) _Bool ordered; // @synthesize ordered=_ordered;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (void)mergeWithCheckpoint:(id)arg1;
- (void)_touchEndDate;
- (void)_touchStartDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;

@end

