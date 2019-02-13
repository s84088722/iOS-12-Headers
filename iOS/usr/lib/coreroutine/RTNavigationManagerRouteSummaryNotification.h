//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSString;

@interface RTNavigationManagerRouteSummaryNotification : RTNotification
{
    double _originLatitude;
    double _originLongitude;
    NSString *_destinationName;
    double _destinationLatitude;
    double _destinationLongitude;
}

@property(nonatomic) double destinationLongitude; // @synthesize destinationLongitude=_destinationLongitude;
@property(nonatomic) double destinationLatitude; // @synthesize destinationLatitude=_destinationLatitude;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(nonatomic) double originLongitude; // @synthesize originLongitude=_originLongitude;
@property(nonatomic) double originLatitude; // @synthesize originLatitude=_originLatitude;
- (void).cxx_destruct;
- (id)initWithRouteSummary:(id)arg1;

@end

