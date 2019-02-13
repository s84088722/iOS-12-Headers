//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKAppDataSet : NSObject <NSCopying>
{
    NSArray *_dataItems;
    NSArray *_itemIDs;
    NSIndexSet *_updatedIndexes;
    struct _NSRange _visibleIndexRange;
}

@property(copy, nonatomic) NSIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(nonatomic) struct _NSRange visibleIndexRange; // @synthesize visibleIndexRange=_visibleIndexRange;
@property(readonly, copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
@property(copy, nonatomic) NSArray *dataItems; // @synthesize dataItems=_dataItems;
- (void).cxx_destruct;
- (id)dataSetByUpdatingDataItemsAtIndexes:(id)arg1 withDataItems:(id)arg2;
- (id)dataSetByUpdatingVisibleIndexRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataItems:(id)arg1 itemIDs:(id)arg2;

@end

