//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CLKGaugeProvider : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _paused;
    _Bool _finalized;
    long long _style;
    NSArray *_gaugeColors;
    NSArray *_gaugeColorLocations;
}

+ (id)gaugeProviderWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSArray *gaugeColorLocations; // @synthesize gaugeColorLocations=_gaugeColorLocations;
@property(retain, nonatomic) NSArray *gaugeColors; // @synthesize gaugeColors=_gaugeColors;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)finalize;
- (void)validate;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (double)progressFractionForNow:(id)arg1;
- (_Bool)needsTimerUpdates;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
