//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOTransitIconDataSource-Protocol.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource>
{
    unsigned int _cartoID;
    unsigned int _defaultTransitType;
}

@property(readonly, nonatomic) unsigned int defaultTransitType; // @synthesize defaultTransitType=_defaultTransitType;
@property(readonly, nonatomic) unsigned int cartoID; // @synthesize cartoID=_cartoID;
@property(readonly, nonatomic) unsigned int iconAttributeValue;
@property(readonly, nonatomic) unsigned int iconAttributeKey;
@property(readonly, nonatomic) long long iconType;
- (id)initWithCartoId:(unsigned int)arg1 defaultTransitType:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

