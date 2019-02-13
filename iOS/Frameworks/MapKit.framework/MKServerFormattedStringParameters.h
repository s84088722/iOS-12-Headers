//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>
{
    long long _instructionsDistanceDetailLevel;
    NSDictionary *_variableOverides;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *variableOverides; // @synthesize variableOverides=_variableOverides;
@property(readonly, nonatomic) long long instructionsDistanceDetailLevel; // @synthesize instructionsDistanceDetailLevel=_instructionsDistanceDetailLevel;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToServerFormattedStringParameters:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;

@end

