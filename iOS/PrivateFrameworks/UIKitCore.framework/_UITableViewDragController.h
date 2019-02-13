//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragInteractionDelegate_Internal-Protocol.h>

@class NSIndexPath, NSMapTable, NSMutableOrderedSet, NSString, UIDragInteraction, UITableView, UITableViewCell;
@protocol UIDragSession, _UITableViewDragControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDragController : NSObject <UIDragInteractionDelegate_Internal>
{
    _Bool _forceEnabledForReordering;
    long long _clientEnabledState;
    id <UIDragSession> _dragSession;
    NSMutableOrderedSet *_indexPaths;
    UIDragInteraction *_dragInteraction;
    UITableView<_UITableViewDragControllerDelegate> *_tableView;
    UITableViewCell *_initiatingCell;
    NSIndexPath *_initiatingIndexPath;
    UITableViewCell *_tentativeInitiatingCell;
    NSIndexPath *_tentativeInitiatingIndexPath;
    NSMutableOrderedSet *_tentativeIndexPaths;
    NSMapTable *_cellsAnimatingCancel;
}

+ (_Bool)isEnabledByDefault;
@property(retain, nonatomic) NSMapTable *cellsAnimatingCancel; // @synthesize cellsAnimatingCancel=_cellsAnimatingCancel;
@property(retain, nonatomic) NSMutableOrderedSet *tentativeIndexPaths; // @synthesize tentativeIndexPaths=_tentativeIndexPaths;
@property(retain, nonatomic) NSIndexPath *tentativeInitiatingIndexPath; // @synthesize tentativeInitiatingIndexPath=_tentativeInitiatingIndexPath;
@property(retain, nonatomic) UITableViewCell *tentativeInitiatingCell; // @synthesize tentativeInitiatingCell=_tentativeInitiatingCell;
@property(retain, nonatomic) NSIndexPath *initiatingIndexPath; // @synthesize initiatingIndexPath=_initiatingIndexPath;
@property(retain, nonatomic) UITableViewCell *initiatingCell; // @synthesize initiatingCell=_initiatingCell;
@property(nonatomic) __weak UITableView<_UITableViewDragControllerDelegate> *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) NSMutableOrderedSet *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property(nonatomic) _Bool forceEnabledForReordering; // @synthesize forceEnabledForReordering=_forceEnabledForReordering;
@property(nonatomic) long long clientEnabledState; // @synthesize clientEnabledState=_clientEnabledState;
- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (_Bool)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)resetDragState;
- (void)beginDragOfRowsForSession:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)beginDragForTentativeRows;
- (void)clearTentativeRows;
- (void)addTentativeRowAtIndexPath:(id)arg1;
- (_Bool)canProvideItemsForDragAtPoint:(struct CGPoint)arg1;
- (void)immediatelyBeginDragWithTouch:(id)arg1;
- (void)forceReset;
@property(readonly, nonatomic) NSIndexPath *draggedIndexPath;
@property(readonly, nonatomic) UITableViewCell *draggedCell;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)uninstallFromTableView;
- (void)updateDragInteractionEnabledState;
- (void)setupDragInteraction;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

