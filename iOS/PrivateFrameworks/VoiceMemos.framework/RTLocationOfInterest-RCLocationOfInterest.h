//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTLocationOfInterest.h>

#import <VoiceMemos/RCLocationOfInterest-Protocol.h>

@class CLLocation, NSString;
@protocol GEOMapItem;

@interface RTLocationOfInterest (RCLocationOfInterest) <RCLocationOfInterest>
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
@property(readonly, nonatomic) CLLocation *location;

// Remaining properties
@property(readonly, nonatomic) double confidence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *preferredName;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double uncertainty;
@end

