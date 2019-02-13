//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSSet, NSString;

@interface _HKDevicePropertyFilter : _HKFilter
{
    NSString *_keyPath;
    NSString *_propertyKey;
    NSSet *_allowedValues;
}

+ (_Bool)supportsSecureCoding;
+ (id)_keyPathForProperty:(id)arg1;
+ (_Bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
@property(readonly, nonatomic) NSSet *allowedValues; // @synthesize allowedValues=_allowedValues;
@property(readonly, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)description;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithKey:(id)arg1 allowedValues:(id)arg2;

@end

