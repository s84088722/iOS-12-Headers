//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedVideoVisibilityMonitoring-Protocol.h"
#import "FRFeedVideoVisibilityReporting-Protocol.h"

@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;
@protocol FRFeedVideoVisibilePercentageProviding;

@interface FRFeedVideoVisibilityMonitor : NSObject <FRFeedVideoVisibilityReporting, FRFeedVideoVisibilityMonitoring>
{
    _Bool appeared;
    _Bool _locked;
    double _visiblePercentage;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_disappearedState;
    NFStateMachineState *_appearedState;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
    id <FRFeedVideoVisibilePercentageProviding> _visiblePercentageProvider;
    long long _lockCount;
}

@property(nonatomic) long long lockCount; // @synthesize lockCount=_lockCount;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) __weak id <FRFeedVideoVisibilePercentageProviding> visiblePercentageProvider; // @synthesize visiblePercentageProvider=_visiblePercentageProvider;
@property(readonly, nonatomic) NSMutableArray *didDisappearBlocks; // @synthesize didDisappearBlocks=_didDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *willDisappearBlocks; // @synthesize willDisappearBlocks=_willDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // @synthesize visiblePercentageBlocks=_visiblePercentageBlocks;
@property(readonly, nonatomic) NSMutableArray *didAppearBlocks; // @synthesize didAppearBlocks=_didAppearBlocks;
@property(readonly, nonatomic) NSMutableArray *willAppearBlocks; // @synthesize willAppearBlocks=_willAppearBlocks;
@property(readonly, nonatomic) NFStateMachineState *appearedState; // @synthesize appearedState=_appearedState;
@property(readonly, nonatomic) NFStateMachineState *disappearedState; // @synthesize disappearedState=_disappearedState;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;
- (void).cxx_destruct;
- (void)determineVisiblePercentage;
@property(readonly, nonatomic) _Bool appeared; // @synthesize appeared;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;
- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
- (void)visiblePercentageChanged;
- (void)didDisappear;
- (void)didAppear;
- (void)unlock;
- (void)lock;
- (id)initWithVisiblePercentageProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

