//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class NSNumber, NSString;

@interface HFSimpleIncrementalControlItem : HFControlItem
{
    NSString *_incrementalCharacteristicType;
}

+ (Class)valueClass;
@property(readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *stepValue;
@property(readonly, nonatomic) NSNumber *maxValue;
@property(readonly, nonatomic) NSNumber *minValue;
- (id)_metadata;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;

@end

