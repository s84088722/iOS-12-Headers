//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSStarkTableViewController.h"

#import "SVSStarkItemController-Protocol.h"
#import "SVSStarkTableViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSTimer, NSUUID, SAUIListItem;
@protocol SVSStarkDisambiguationSnippetControllerDelegate;

@interface SVSStarkDisambiguationSnippetController : SVSStarkTableViewController <SVSStarkTableViewControllerDelegate, SVSStarkItemController>
{
    unsigned long long _preferredListItemIndex;
    SAUIListItem *_preferredListItem;
    _Bool _isGroup;
    NSMutableDictionary *_groupNameMapping;
    _Bool _isIdle;
    long long _interactionStyle;
    NSUUID *_conversationItemIdentifier;
    id <SVSStarkDisambiguationSnippetControllerDelegate> _delegate;
    NSString *_disambiguationKey;
    NSTimer *_idleTimer;
}

@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_isIdle) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(nonatomic) __weak id <SVSStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)backgroundColorForTableViewCells;
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;
- (void)didPressShowMore;
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newShowMoreCellWithIdentifier:(id)arg1;
- (Class)showMoreCellClass;
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tableCellIdentifiersAndClasses;
- (_Bool)isActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_createNewIdleTimer;
- (void)_resetIdleTimer;
- (void)_clearIdleTimer;
- (void)_idleTimerFired:(id)arg1;
- (void)autodisambiguate;
- (_Bool)shouldAutodisambiguate;
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 showHeader:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

