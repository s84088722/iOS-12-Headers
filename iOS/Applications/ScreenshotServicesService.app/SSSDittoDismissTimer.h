//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SSSDittoDismissTimerDelegate;

@interface SSSDittoDismissTimer : NSObject
{
    NSTimer *_currentTimer;
    _Bool _hasSetViewState;
    _Bool _hasSetInDragAndDrop;
    _Bool _hasSetShowingSharingUI;
    _Bool _hasSetShowingWaitingForImageIdentifierUpdatesUI;
    _Bool _hasSetPerformingDismissAnimation;
    _Bool _hasSetUserInterfaceHidden;
    _Bool _inDragAndDrop;
    _Bool _showingSharingUI;
    _Bool _showingWaitingForImageIdentifierUpdatesUI;
    _Bool _performingDismissAnimation;
    _Bool _userInterfaceHidden;
    unsigned long long _viewState;
    id <SSSDittoDismissTimerDelegate> _delegate;
}

@property(nonatomic) __weak id <SSSDittoDismissTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool userInterfaceHidden; // @synthesize userInterfaceHidden=_userInterfaceHidden;
@property(nonatomic) _Bool performingDismissAnimation; // @synthesize performingDismissAnimation=_performingDismissAnimation;
@property(nonatomic) _Bool showingWaitingForImageIdentifierUpdatesUI; // @synthesize showingWaitingForImageIdentifierUpdatesUI=_showingWaitingForImageIdentifierUpdatesUI;
@property(nonatomic) _Bool showingSharingUI; // @synthesize showingSharingUI=_showingSharingUI;
@property(nonatomic) _Bool inDragAndDrop; // @synthesize inDragAndDrop=_inDragAndDrop;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)newScreenshotReceived;
- (void)userInteractionOccurred;
@property(readonly, nonatomic) _Bool timerIsRunning;
- (void)_timerFired;
- (void)_significantTimerEventOccured;
- (_Bool)_timerShouldBeRunning;
- (id)_stateDescription;
- (id)init;

@end

