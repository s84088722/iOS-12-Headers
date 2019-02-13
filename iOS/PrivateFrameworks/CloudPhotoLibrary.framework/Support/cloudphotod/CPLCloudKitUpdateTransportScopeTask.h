//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportUpdateTransportScopeTask-Protocol.h"

@class CPLCloudKitScope, CPLEngineScope, CPLLibraryInfo, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitUpdateTransportScopeTask : CPLCloudKitTransportTask <CPLEngineTransportUpdateTransportScopeTask>
{
    CDUnknownBlockType _completionHandler;
    CPLCloudKitScope *_cloudKitScope;
    CPLEngineScope *_scope;
    CPLLibraryInfo *_libraryInfo;
}

@property(readonly, nonatomic) CPLLibraryInfo *libraryInfo; // @synthesize libraryInfo=_libraryInfo;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void).cxx_destruct;
- (void)runOperations;
- (id)_errorForUpdateError:(id)arg1;
- (id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 libraryInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

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

