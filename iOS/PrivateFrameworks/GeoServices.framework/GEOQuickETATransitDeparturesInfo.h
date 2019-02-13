//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GEOQuickETATransitDeparturesInfo : NSObject
{
    NSString *_direction;
    NSString *_headsign;
    _Bool _departuresHaveFrequency;
    double _departureFrequency;
    NSDate *_departureFrequencyValidUntil;
}

@property(readonly, nonatomic) NSDate *departureFrequencyValidUntil; // @synthesize departureFrequencyValidUntil=_departureFrequencyValidUntil;
@property(readonly, nonatomic) double departureFrequency; // @synthesize departureFrequency=_departureFrequency;
@property(readonly, nonatomic) _Bool departuresHaveFrequency; // @synthesize departuresHaveFrequency=_departuresHaveFrequency;
@property(readonly, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
@property(readonly, nonatomic) NSString *direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;
- (id)description;
- (id)initWithComposedRoute:(id)arg1;

@end

