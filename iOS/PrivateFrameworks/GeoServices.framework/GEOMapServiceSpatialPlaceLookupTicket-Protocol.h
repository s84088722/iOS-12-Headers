//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, nonatomic) NSArray *parameters;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

