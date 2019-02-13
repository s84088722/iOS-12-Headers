//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUImportActionCoordinatorDelegate-Protocol.h>
#import <PhotosUI/PUImportAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUI/PUImportMediaProviderNotificationsReceiver-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PUImportActionCoordinator, PUImportAssetsDataSourceManager, PUImportController, PUImportMediaProvider, PUImportPPTImportSource, PUTabbedLibraryViewController;
@protocol OS_dispatch_semaphore;

@interface PUImportPPTDriver : NSObject <PUImportAssetsDataSourceManagerObserver, PUImportMediaProviderNotificationsReceiver, PUImportActionCoordinatorDelegate>
{
    CDUnknownBlockType _insertDatasourceReply;
    CDUnknownBlockType _thumbnailTestReply;
    CDUnknownBlockType _importToLibraryTestReply;
    NSMutableDictionary *_extraResults;
    PUImportAssetsDataSourceManager *_dataSourceManager;
    PUImportController *_importController;
    PUImportPPTImportSource *_currentImportSource;
    PUImportMediaProvider *_mediaProvider;
    PUImportActionCoordinator *_actionCoordinator;
    NSObject<OS_dispatch_semaphore> *_importSemaphore;
    _Bool _importComplete;
    long long _iteration;
    double _startTime;
    double _endTime;
    _Bool _loadingContentStarted;
    _Bool _hasSeenAbsolulteLastThumbnailMarker;
    PUTabbedLibraryViewController *_tabbedLibraryViewController;
    NSDictionary *_testOptions;
    NSDictionary *_options;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSDictionary *testOptions; // @synthesize testOptions=_testOptions;
@property __weak PUTabbedLibraryViewController *tabbedLibraryViewController; // @synthesize tabbedLibraryViewController=_tabbedLibraryViewController;
- (void).cxx_destruct;
- (void)actionCoordinatorDidEndDelete:(id)arg1;
- (void)actionCoordinatorDidBeginDelete:(id)arg1;
- (void)actionCoordinatorWillBeginDelete:(id)arg1;
- (id)importDestinationForActionCoordinator:(id)arg1;
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
- (void)actionCoordinatorDidCancelImport:(id)arg1;
- (void)actionCoordinatorDidBeginImport:(id)arg1;
- (void)actionCoordinatorWillBeginImport:(id)arg1;
- (void)ppt_mediaProviderDidProcessAsset:(id)arg1;
- (void)signalImportToLibraryTestReply:(_Bool)arg1;
- (void)signalThumbnailTestReply:(_Bool)arg1;
- (void)signalInsertDatasourceReply:(_Bool)arg1;
- (double)_contentLoadingCheckInterval;
- (void)_updateLoadingContentState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)modelBatchesForOptions:(id)arg1;
- (id)mediaProvider;
- (id)importController;
- (id)importViewController;
- (void)ppt_performImportToLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performThumbnailWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performDeleteWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeCurrentImportSourceIfNecessary;
- (void)ppt_removeImportDataSourceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_insertImportDataSourceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *additionalResults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

