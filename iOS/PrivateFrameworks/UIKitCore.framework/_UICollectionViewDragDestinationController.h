//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDropInteractionDelegate_Private-Protocol.h>
#import <UIKitCore/_UICollectionViewShadowUpdatesRebaseApplicable-Protocol.h>

@class CADisplayLink, NSIndexPath, NSString, UICollectionView, UICollectionViewDropProposal, UIDropInteraction, _UIDragDestinationControllerDropProposalState, _UIDragDestinationControllerReorderingState, _UIDragDestinationControllerSessionState;
@protocol UIDropSession, _UICollectionViewDragDestinationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>
{
    UICollectionView *_collectionView;
    UIDropInteraction *_dropInteraction;
    id <_UICollectionViewDragDestinationControllerDelegate> _delegate;
    CADisplayLink *_reorderDisplayLink;
    _UIDragDestinationControllerSessionState *_sessionState;
    _UIDragDestinationControllerReorderingState *_reorderingState;
    _UIDragDestinationControllerDropProposalState *_dropProposalState;
}

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) _UIDragDestinationControllerDropProposalState *dropProposalState; // @synthesize dropProposalState=_dropProposalState;
@property(retain, nonatomic) _UIDragDestinationControllerReorderingState *reorderingState; // @synthesize reorderingState=_reorderingState;
@property(retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) CADisplayLink *reorderDisplayLink; // @synthesize reorderDisplayLink=_reorderDisplayLink;
@property(nonatomic) __weak id <_UICollectionViewDragDestinationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (_Bool)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(struct CGPoint)arg2;
- (_Bool)_shouldQueryDropActionForIndexPath:(id)arg1;
- (id)_dragAndDropController;
- (id)_effectiveDropProposalForProposal:(id)arg1;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1;
- (_Bool)_isMultiItemSource;
- (_Bool)_shouldPerformMovementForProposal:(id)arg1;
- (void)_commitCurrentInteractiveReordering;
- (void)_cancelCurrentInteractiveReorder;
- (void)_commitCurrentDragAndDropSession;
- (void)_reorderingDisplayLinkDidTick;
- (_Bool)_delegateImplementsSelector:(SEL)arg1;
- (_Bool)_delegateImplementsTargetIndexPath;
- (_Bool)_delegateImplementsDidExit;
- (_Bool)_delegateImplementsDropActionForIndexPath;
- (_Bool)_delegateImplementsPerformDropFromIndexPathsWithAction;
- (_Bool)_delegateImplementsPerformDropFromIndexPathsWithCoordinator;
- (_Bool)_isLocalInteractiveMove;
- (void)_resumeReorderingDisplayLink;
- (void)_pauseReorderingDisplayLink;
- (void)_configureReorderingDisplayLink;
- (void)_configureInteraction;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1;
- (void)_endInteractiveReorderingIfNeeded;
- (void)_cancelInteractiveReorderingIfNeeded;
- (_Bool)_isCompatibilityMode;
- (id)_dropDelegateActual;
- (id)_dropDelegateProxy;
- (id)_dragDestinationDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (_Bool)hasPerformedReordering;
- (void)dropWasCancelled;
- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1;
- (_Bool)isInteractiveReorderingDisabled;
@property(readonly, nonatomic) id <UIDropSession> currentDropSession;
@property(readonly, nonatomic) UICollectionViewDropProposal *currentDropProposal;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath;
@property(readonly, nonatomic) _Bool supportsLocalSessionReordering;
@property(readonly, nonatomic) _Bool isActive;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

