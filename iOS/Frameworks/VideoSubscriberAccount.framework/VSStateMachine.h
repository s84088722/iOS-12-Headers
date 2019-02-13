//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, VSOptional;
@protocol VSStateMachineDelegate;

@interface VSStateMachine : NSObject
{
    int _mode;
    NSString *_name;
    id <VSStateMachineDelegate> _delegate;
    NSOperationQueue *_transitionQueue;
    VSOptional *_currentState;
    NSMutableArray *_enqueuedTransitions;
    NSMutableDictionary *_transitionTable;
    NSMutableDictionary *_ignoredEventsByState;
}

@property(retain, nonatomic) NSMutableDictionary *ignoredEventsByState; // @synthesize ignoredEventsByState=_ignoredEventsByState;
@property(retain, nonatomic) NSMutableDictionary *transitionTable; // @synthesize transitionTable=_transitionTable;
@property(retain, nonatomic) NSMutableArray *enqueuedTransitions; // @synthesize enqueuedTransitions=_enqueuedTransitions;
@property(retain, nonatomic) VSOptional *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSOperationQueue *transitionQueue; // @synthesize transitionQueue=_transitionQueue;
@property(nonatomic) __weak id <VSStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)enqueueEvent:(id)arg1;
- (void)activateWithState:(id)arg1;
- (void)setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;
- (void)ignoreEvent:(id)arg1 inState:(id)arg2;
- (void)_setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ignoringEvent:(_Bool)arg4;
- (void)_handleEnqueuedTransitions;
- (void)_exitingState:(id)arg1;
- (void)_enteringState:(id)arg1;
- (id)init;

@end

