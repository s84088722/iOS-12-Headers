//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/PARResponse.h>

@class NSArray;

@interface PARFlightResponse : PARResponse
{
    NSArray *_flightResults;
}

+ (id)responseFromReply:(id)arg1;
+ (id)_debugResponseFromReply:(id)arg1;
@property(retain, nonatomic) NSArray *flightResults; // @synthesize flightResults=_flightResults;
- (void).cxx_destruct;
- (id)description;

@end

