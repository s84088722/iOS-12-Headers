//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/ICDeviceBrowserDelegate-Protocol.h>

@class ICDeviceBrowser, NSMutableDictionary, NSString, NSXPCConnection, PFDispatchQueue;
@protocol OS_os_log, PHImportDelegate;

@interface PHImportController : NSObject <ICDeviceBrowserDelegate>
{
    struct os_unfair_lock_s _sourceListLock;
    PFDispatchQueue *_queue;
    NSObject<OS_os_log> *_log;
    NSXPCConnection *_connection;
    ICDeviceBrowser *_deviceBrowser;
    NSMutableDictionary *_importSourcesByDevice;
    id <PHImportDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) struct os_unfair_lock_s sourceListLock; // @synthesize sourceListLock=_sourceListLock;
@property(nonatomic) __weak id <PHImportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *importSourcesByDevice; // @synthesize importSourcesByDevice=_importSourcesByDevice;
@property(retain, nonatomic) ICDeviceBrowser *deviceBrowser; // @synthesize deviceBrowser=_deviceBrowser;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly) PFDispatchQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(_Bool)arg3;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(_Bool)arg3;
- (id)filterDuplicates:(id)arg1 onSource:(id)arg2 options:(id)arg3 library:(id)arg4;
- (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 performanceDelegate:(id)arg6 atEnd:(CDUnknownBlockType)arg7;
- (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 atEnd:(CDUnknownBlockType)arg6;
- (id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 performanceDelegate:(id)arg5 atEnd:(CDUnknownBlockType)arg6;
- (id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 atEnd:(CDUnknownBlockType)arg5;
- (id)importSourceForUrls:(id)arg1;
- (_Bool)sourceIsConnected:(id)arg1;
- (void)accessSourceList:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

