//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUnitConverter.h>

#import <Foundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding>
{
    double _reciprocalValue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) double reciprocalValue; // @synthesize reciprocalValue=_reciprocalValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;
- (double)baseUnitValueFromValue:(double)arg1;
- (id)initWithReciprocalValue:(double)arg1;

@end

