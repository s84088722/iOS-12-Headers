//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol AFClockItemStorageDelegate;

@interface AFClockItemStorage : NSObject <AFInvalidating>
{
    id <AFClockItemStorageDelegate> _delegate;
    long long _groupingDepth;
    unsigned long long _workingGeneration;
    NSDate *_workingDate;
    NSMutableDictionary *_workingItemsByID;
    NSString *_identifier;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_itemsByID;
}

@property(copy, nonatomic) NSDictionary *itemsByID; // @synthesize itemsByID=_itemsByID;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)invalidate;
- (void)deleteAllItems;
- (void)deleteItemsWithIDs:(id)arg1;
- (void)insertOrUpdateItems:(id)arg1;
- (id)itemWithID:(id)arg1;
- (void)endGrouping;
- (void)beginGrouping;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

