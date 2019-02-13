//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding>
{
    NSUnit *_unit;
    double _doubleValue;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)measurementBySubtractingMeasurement:(id)arg1;
- (id)measurementByAddingMeasurement:(id)arg1;
- (id)_performOperation:(long long)arg1 withMeasurement:(id)arg2;
- (id)measurementByConvertingToUnit:(id)arg1;
- (_Bool)canBeConvertedToUnit:(id)arg1;
@property(readonly) double doubleValue;
@property(readonly, copy) NSUnit *unit;
- (void)dealloc;
- (id)initWithDoubleValue:(double)arg1 unit:(id)arg2;

@end

