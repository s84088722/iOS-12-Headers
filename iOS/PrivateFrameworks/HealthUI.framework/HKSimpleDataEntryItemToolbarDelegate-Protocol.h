//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKSimpleDataEntryItem;

@protocol HKSimpleDataEntryItemToolbarDelegate <NSObject>

@optional
- (void)dataEntryItemNextPressed:(HKSimpleDataEntryItem *)arg1;
- (void)dataEntryItemPrevPressed:(HKSimpleDataEntryItem *)arg1;
- (void)dataEntryItemDonePressed:(HKSimpleDataEntryItem *)arg1;
@end

