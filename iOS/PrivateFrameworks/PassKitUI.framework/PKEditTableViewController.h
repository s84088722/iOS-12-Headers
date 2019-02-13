//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/PKEditPassesPerformanceTestResponder-Protocol.h>
#import <PassKitUI/PKEditTableNoPassesViewDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSourcePrefetching-Protocol.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSObject, NSString, PKEditPendingCacheRequest, PKEditTableNoPassesView, PKGroupsController, UITableView;
@protocol OS_dispatch_queue, PKEditTableViewControllerCachingDelegate;

@interface PKEditTableViewController : UITableViewController <UITableViewDataSourcePrefetching, PKEditTableNoPassesViewDelegate, PKEditPassesPerformanceTestResponder>
{
    PKEditTableNoPassesView *_noPassesView;
    _Bool _shouldShowNoPassesView;
    UITableView *_tableView;
    _Bool _scrollingUp;
    struct CGSize _imageSizeNeeded;
    _Bool _needsFullPass;
    _Bool _isAccessibilityCategory;
    NSCache *_imageCache;
    unsigned long long _imagesToKeep;
    NSObject<OS_dispatch_queue> *_queueCaching;
    PKEditPendingCacheRequest *_currentCacheRequest;
    _Bool _shouldProcessHighPriorityRequests;
    NSMutableArray *_highPriorityRequests;
    _Bool _shouldProcessLowPriorityRequests;
    NSMutableArray *_lowPriorityRequests;
    unsigned long long _visibleRows;
    NSMutableDictionary *_placeholdersPerPassStyle;
    long long _testIteration;
    double _snapshotDurationAverage;
    NSMutableArray *_lastSnapshotDurations;
    double _lastYOffset;
    double _lastYOffsetTime;
    _Bool _scrollingFast;
    _Bool _dragging;
    id <PKEditTableViewControllerCachingDelegate> _cachingDelegate;
    PKGroupsController *_existingGroupsController;
    long long _performanceTest;
    NSString *_performanceTestName;
}

@property(nonatomic) long long testIteration; // @synthesize testIteration=_testIteration;
@property(retain, nonatomic) NSString *performanceTestName; // @synthesize performanceTestName=_performanceTestName;
@property(nonatomic) long long performanceTest; // @synthesize performanceTest=_performanceTest;
@property(retain, nonatomic) PKGroupsController *existingGroupsController; // @synthesize existingGroupsController=_existingGroupsController;
@property(nonatomic) __weak id <PKEditTableViewControllerCachingDelegate> cachingDelegate; // @synthesize cachingDelegate=_cachingDelegate;
- (void).cxx_destruct;
- (void)beginPassDeletionTestWithTestName:(id)arg1;
- (void)beginPassSelectionTestWithTestName:(id)arg1;
- (void)beginScrollingTestWithTestName:(id)arg1;
- (void)scrollToLastRowOrFailTest;
- (void)scrollToFirstRowOrFailTest;
- (void)selectFirstRowOrFailTest;
- (void)failedTestWithReason:(id)arg1;
- (void)passedTest;
- (void)startedTestWithName:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scanCode;
- (void)findApps;
- (void)noPassesViewFindAppsForWalletTapped:(id)arg1;
- (void)noPassesViewScanCodeButtonTapped:(id)arg1;
- (void)resumeRequestIfNoScrollingAfterTimeInterval:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellWithIdentifier:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateShouldProcessHighPriorityRequestsWithFastScrolling:(_Bool)arg1;
- (void)_setShouldProcessLowPriorityRequests:(_Bool)arg1;
- (unsigned long long)_imagesToKeepOutsideVisibleCells;
- (void)clearImageCacheForPass:(id)arg1;
- (id)_resizedImageWithImage:(id)arg1 alignmentSize:(struct CGSize)arg2;
- (id)_cropImage:(id)arg1 toHeight:(double)arg2;
- (id)_createPassStackWithPassImage:(id)arg1 withHeight:(double)arg2;
- (id)_createImageForPass:(id)arg1 imageSize:(struct CGSize)arg2 cacheKey:(id)arg3 fullPass:(_Bool)arg4 stacked:(_Bool)arg5;
- (void)updateAverageSnapshotDuration:(double)arg1;
- (void)removeRequestsWithCacheKey:(id)arg1;
- (void)moveHighPriorityToLowPriorityWithCacheKey:(id)arg1;
- (void)triageCacheRequest:(id)arg1;
- (void)currentCacheRequestCompletedWithImage:(id)arg1 duration:(double)arg2;
- (void)processCacheRequest:(id)arg1;
- (void)_imageOfSize:(struct CGSize)arg1 forPass:(id)arg2 fullPass:(_Bool)arg3 stacked:(_Bool)arg4 synchronously:(_Bool)arg5 preemptive:(_Bool)arg6 placeholder:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)mostRecentPassInGroup:(id)arg1;
- (void)showNoPassesView:(_Bool)arg1;
- (void)preemptivelyCacheImagesForPass:(id)arg1 stacked:(_Bool)arg2;
- (void)imageForPass:(id)arg1 stacked:(_Bool)arg2 synchronously:(_Bool)arg3 placeholder:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadContentAndImageSetFromExistingPassForPass:(id)arg1;
- (unsigned long long)visibleRowsCount;
- (void)generatePlaceholderImages;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
