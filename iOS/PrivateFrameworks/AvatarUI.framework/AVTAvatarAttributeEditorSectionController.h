//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionController-Protocol.h>

@class AVTAvatarAttributeEditorSection, AVTTransitionCoordinator, AVTUIEnvironment, NSString;
@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTIndexBasedTaskScheduler, AVTTaskScheduler;

@interface AVTAvatarAttributeEditorSectionController : NSObject <AVTAvatarAttributeEditorSectionController>
{
    long long _selectedIndex;
    id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
    AVTAvatarAttributeEditorSection *_section;
    AVTTransitionCoordinator *_transitionCoordinator;
    AVTUIEnvironment *_environment;
    id <AVTIndexBasedTaskScheduler> _thumbnailScheduler;
    id <AVTTaskScheduler> _renderingScheduler;
}

+ (struct UIEdgeInsets)edgeInsetsForSection:(id)arg1 fittingWidth:(double)arg2 environment:(id)arg3;
+ (struct CGSize)cellSizeForSectionItem:(id)arg1 inSection:(id)arg2 fittingWidth:(double)arg3 environment:(id)arg4;
+ (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+ (_Bool)supportsSelection;
@property(readonly, nonatomic) id <AVTTaskScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) id <AVTIndexBasedTaskScheduler> thumbnailScheduler; // @synthesize thumbnailScheduler=_thumbnailScheduler;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) AVTAvatarAttributeEditorSection *section; // @synthesize section=_section;
@property(nonatomic) __weak id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2;
- (void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize)arg1;
- (void)resetToDefaultState;
- (void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2;
- (struct UIEdgeInsets)edgeInsetsFittingSize:(struct CGSize)arg1;
- (unsigned long long)indexForItem:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;
- (long long)numberOfItems;
- (id)prefetchingSectionItemForIndex:(long long)arg1;
- (id)viewForIndex:(long long)arg1;
- (void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)updateWithSection:(id)arg1;
- (id)initWithThumbnailScheduler:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

