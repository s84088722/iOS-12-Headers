//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HFChildServiceFilter, HMService;

@interface HFChildServiceControlItem : HFControlItem
{
    HMService *_parentService;
    HFChildServiceFilter *_childServiceFilter;
}

+ (Class)valueClass;
@property(readonly, nonatomic) HFChildServiceFilter *childServiceFilter; // @synthesize childServiceFilter=_childServiceFilter;
@property(readonly, nonatomic) HMService *parentService; // @synthesize parentService=_parentService;
- (void).cxx_destruct;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;

@end

