//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportFetchMomentShareTask-Protocol.h"

@class NSString, NSURL;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitFetchMomentShareTask : CPLCloudKitTransportTask <CPLEngineTransportFetchMomentShareTask>
{
    NSURL *_shareURL;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
- (id)_momentShareFromShareMetadata:(id)arg1;
- (void)runOperations;
- (id)initWithController:(id)arg1 shareURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

