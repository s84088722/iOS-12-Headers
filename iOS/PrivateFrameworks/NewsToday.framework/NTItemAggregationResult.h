//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface NTItemAggregationResult : NSObject <NSCopying>
{
    NSDictionary *_aggregatedItemsBySectionDescriptor;
    NSSet *_itemIDsOfLeadingCells;
    NSDictionary *_slotAllocationByDynamicSlotItemID;
    NSArray *_unusedSectionDescriptors;
}

@property(copy, nonatomic) NSArray *unusedSectionDescriptors; // @synthesize unusedSectionDescriptors=_unusedSectionDescriptors;
@property(copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID; // @synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID;
@property(copy, nonatomic) NSSet *itemIDsOfLeadingCells; // @synthesize itemIDsOfLeadingCells=_itemIDsOfLeadingCells;
@property(copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor; // @synthesize aggregatedItemsBySectionDescriptor=_aggregatedItemsBySectionDescriptor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 itemIDsOfLeadingCells:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 unusedSectionDescriptors:(id)arg4;
- (id)init;

@end

