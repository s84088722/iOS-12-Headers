//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, NSArray;

@interface HUTriggerConditionSummaryItem : HFItem
{
    NSArray *_conditions;
    HMHome *_home;
}

@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithConditions:(id)arg1 home:(id)arg2;

@end

