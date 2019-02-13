//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSArray, NSMutableArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem
{
    NSMutableArray *_cumulativeRowOffsets;
    NSArray *_subitems;
}

@property(retain, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
- (void).cxx_destruct;
- (void)commitEditing;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (long long)numberOfRows;
- (_Bool)hasPresentableData;
- (void)setOwningViewController:(id)arg1;
- (void)setData:(id)arg1;
- (void)_getSubitem:(id *)arg1 andSubitemRow:(long long *)arg2 forTableViewRow:(long long)arg3;

@end

