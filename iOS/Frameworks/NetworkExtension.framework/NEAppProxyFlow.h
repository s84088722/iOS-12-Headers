//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEFlowMetaData, NSData;
@protocol OS_dispatch_queue;

@interface NEAppProxyFlow : NSObject
{
    NEFlowMetaData *_metaData;
    struct _NEFlow *_flow;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (struct __CFError *)copyVPNFlowErrorFromFlowError:(id)arg1;
+ (id)flowErrorForVPNFlowError:(long long)arg1;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct _NEFlow *flow; // @synthesize flow=_flow;
@property(readonly) NEFlowMetaData *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;
@property(retain) NSData *applicationData;
- (void)closeWriteWithError:(id)arg1;
- (void)closeReadWithError:(id)arg1;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearEventHandlers;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;

@end

