//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFConditionItem-Protocol.h>

@class HFCharacteristicCondition, NSString;

@interface HFCharacteristicConditionItem : HFItem <HFConditionItem>
{
    HFCharacteristicCondition *_condition;
}

+ (id)_nameForCharacteristicCondition:(id)arg1;
@property(readonly, nonatomic) HFCharacteristicCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCondition:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
