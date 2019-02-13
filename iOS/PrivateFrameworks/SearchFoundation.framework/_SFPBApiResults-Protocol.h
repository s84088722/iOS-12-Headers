//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBFlight;

@protocol _SFPBApiResults <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *flights;
@property(nonatomic) int resultType;
@property(nonatomic) int status;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFlight *)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (void)addFlights:(_SFPBFlight *)arg1;
- (void)clearFlights;
@end

