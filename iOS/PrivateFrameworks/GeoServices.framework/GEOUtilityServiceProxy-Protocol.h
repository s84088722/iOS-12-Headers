//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOUtilityServiceProxy <NSObject>
- (void)getCurrentGeoServicesState:(NSObject<OS_dispatch_queue> *)arg1 callback:(void (^)(GEOServicesState *, NSError *))arg2;
- (NSString *)getGeoServicesCacheDirectoryPath;
- (NSString *)getHomeDirectoryPath;
@end

