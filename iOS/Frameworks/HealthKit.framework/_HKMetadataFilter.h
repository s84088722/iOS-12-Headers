//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKMetadataFilter : _HKFilter
{
    NSString *_key;
    unsigned long long _operatorType;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2;

@end

