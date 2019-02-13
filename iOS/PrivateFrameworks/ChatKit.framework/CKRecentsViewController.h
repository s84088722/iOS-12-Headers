//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBrowserViewController.h>

#import <ChatKit/CKBrowserDragControllerDelegate-Protocol.h>
#import <ChatKit/MSStickerBrowserViewDataSource-Protocol.h>
#import <ChatKit/_MSStickerSendManagerDelegate-Protocol.h>

@class MSStickerBrowserView, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface CKRecentsViewController : CKBrowserViewController <MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate, CKBrowserDragControllerDelegate>
{
    _Bool _hasHandwritingRecents;
    _Bool _hasStickerRecents;
    _Bool _isLoadingRecents;
    _Bool _preparingForDisplay;
    NSMutableArray *_recentItems;
    MSStickerBrowserView *_browserView;
    UILabel *_noRecentsLabel;
    NSMutableDictionary *_stickerCache;
    CDUnknownBlockType _draggingCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType draggingCompletionHandler; // @synthesize draggingCompletionHandler=_draggingCompletionHandler;
@property(nonatomic, getter=isPreparingForDisplay) _Bool preparingForDisplay; // @synthesize preparingForDisplay=_preparingForDisplay;
@property(nonatomic) _Bool isLoadingRecents; // @synthesize isLoadingRecents=_isLoadingRecents;
@property(retain, nonatomic) NSMutableDictionary *stickerCache; // @synthesize stickerCache=_stickerCache;
@property(retain, nonatomic) UILabel *noRecentsLabel; // @synthesize noRecentsLabel=_noRecentsLabel;
@property(retain, nonatomic) MSStickerBrowserView *browserView; // @synthesize browserView=_browserView;
@property(retain, nonatomic) NSMutableArray *recentItems; // @synthesize recentItems=_recentItems;
@property(nonatomic) _Bool hasStickerRecents; // @synthesize hasStickerRecents=_hasStickerRecents;
@property(nonatomic) _Bool hasHandwritingRecents; // @synthesize hasHandwritingRecents=_hasHandwritingRecents;
- (void).cxx_destruct;
- (_Bool)stickerBrowserView:(id)arg1 shouldDrawBorderAroundSticker:(id)arg2;
- (_Bool)dragManager:(id)arg1 canPeelItem:(id)arg2;
- (_Bool)dragManager:(id)arg1 canRotateItem:(id)arg2;
- (_Bool)dragManager:(id)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (_Bool)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)saveSnapshotForBrowserViewController;
- (id)requestSnapshotDataForPersistance;
- (id)_stickerForMSSticker:(id)arg1;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (_Bool)shouldShowChatChrome;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (_Bool)mayBeKeptInViewHierarchy;
- (void)setupNoRecentsLabel;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (void)resortAndReloadRecents;
- (void)forceTearDownRemoteView;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)prepareForDisplay;
- (void)loadRecents;
- (void)recentsUpdated;
- (void)dealloc;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

