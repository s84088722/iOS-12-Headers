//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURegionPolicy-Protocol.h>

@class NSString, NURegion;

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy>
{
    long long _roundingPolicy;
    NURegion *_region;
    CDStruct_1e2b2e48 _scale;
}

@property(readonly) NURegion *region; // @synthesize region=_region;
@property long long roundingPolicy; // @synthesize roundingPolicy=_roundingPolicy;
@property CDStruct_912cb5d2 scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)regionForGeometry:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (id)initWithRect:(CDStruct_996ac03c)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

