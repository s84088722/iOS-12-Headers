//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;

@protocol _GEOCountryConfigurationServerProxy <NSObject>
- (void)updateCountryCodeWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 callback:(void (^)(NSError *))arg2;
- (id)initWithDelegate:(id <_GEOCountryConfigurationServerProxyDelegate>)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
@end

