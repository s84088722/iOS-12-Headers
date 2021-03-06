//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLCloudKitSimpleRecordFetchTask.h"

#import "CPLEngineTransportResourcesCheckTask-Protocol.h"

@class NSArray, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitResourcesCheckTask : CPLCloudKitSimpleRecordFetchTask <CPLEngineTransportResourcesCheckTask>
{
    CDUnknownBlockType _completionHandler;
    NSArray *_resources;
}

- (void).cxx_destruct;
- (_Bool)_checkLocalResource:(id)arg1 cloudRecord:(id)arg2;
- (void)runOperations;
- (id)initWithController:(id)arg1 resources:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

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

