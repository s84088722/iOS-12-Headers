//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeviceScorer : NSObject
{
}

+ (_Bool)_shouldEnableDeviceScoring;
+ (id)_loadURLBag;
+ (id)_hexEncodingForData:(id)arg1;
+ (_Bool)deviceScoringSupported;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;
- (void)_initDeviceScorerWithContext:(id)arg1;
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServerEndpoint:(long long)arg1;

@end

