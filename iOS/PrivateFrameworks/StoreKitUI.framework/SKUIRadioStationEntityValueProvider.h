//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKEntityValueProviding-Protocol.h>

@class NSString, RadioStation;

@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding>
{
    RadioStation *_station;
}

@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)rsep_stationName;
- (id)rsep_stationDescription;
- (id)rsep_coreSeedName;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;
- (id)initWithStation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

