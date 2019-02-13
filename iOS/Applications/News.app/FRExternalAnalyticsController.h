//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRExternalEventCenterObserving-Protocol.h"
#import "NUExternalAnalyticsEventStreamObserver-Protocol.h"

@class FCAsyncSerialQueue, FCCloudContext, FRExternalAnalyticsURLSession, NSMutableDictionary, NSString;

@interface FRExternalAnalyticsController : NSObject <FRExternalEventCenterObserving, NUExternalAnalyticsEventStreamObserver>
{
    FCCloudContext *_cloudContext;
    FCAsyncSerialQueue *_processorQueue;
    FRExternalAnalyticsURLSession *_externalAnalyticsURLSession;
    NSMutableDictionary *_proxyDataByExternalIDs;
}

@property(retain, nonatomic) NSMutableDictionary *proxyDataByExternalIDs; // @synthesize proxyDataByExternalIDs=_proxyDataByExternalIDs;
@property(retain, nonatomic) FRExternalAnalyticsURLSession *externalAnalyticsURLSession; // @synthesize externalAnalyticsURLSession=_externalAnalyticsURLSession;
@property(retain, nonatomic) FCAsyncSerialQueue *processorQueue; // @synthesize processorQueue=_processorQueue;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void).cxx_destruct;
- (void)_fetchAppConfigWithSuccessCompletion:(CDUnknownBlockType)arg1;
- (void)_fireExternalAnalyticsEventWithExternalAnalyticsConfig:(id)arg1 queryParameters:(id)arg2 requestMetadata:(id)arg3 proxyData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_requestMetadataWithExternalAnalyticsIdentifier:(id)arg1 eventQueryParameters:(id)arg2;
- (long long)externalAnalyticsEventType:(id)arg1;
- (void)_enqueueRequestForEachExternalConfigWithAppConfiguration:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)eventCenter:(id)arg1 eventDidFire:(id)arg2;
- (void)observeEvent:(id)arg1;
- (id)desiredQueryParameterKeys;
- (id)initWithCloudContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

