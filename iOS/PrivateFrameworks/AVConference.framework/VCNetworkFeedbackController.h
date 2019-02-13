//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/WCMClientDelegate-Protocol.h>
#import <AVConference/WRMClientDelegate-Protocol.h>

@class VCConnectionManager, VCRecommendedNetworkSettings, VCWCMClient, WRMClient;
@protocol VCNetworkFeedbackControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate>
{
    VCWCMClient *_WCMClient;
    WRMClient *_WRMClient;
    VCConnectionManager *_connectionManager;
    VCRecommendedNetworkSettings *_recommendedSettings;
    unsigned int _clientTargetBitrate;
    unsigned int _clientTargetBitrateCap;
    id <VCNetworkFeedbackControllerDelegate> _weakDelegate;
}

@property unsigned int clientTargetBitrateCap; // @synthesize clientTargetBitrateCap=_clientTargetBitrateCap;
@property unsigned int clientTargetBitrate; // @synthesize clientTargetBitrate=_clientTargetBitrate;
- (void)cleanupWRMClient;
- (void)setupWRMClient;
- (void)cleanupWCMClient;
- (void)setupWCMClient;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)requestWRMNotification;
@property(readonly) unsigned int recommendedTargetBitrateCap;
- (id)strongDelegate;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2;

@end

