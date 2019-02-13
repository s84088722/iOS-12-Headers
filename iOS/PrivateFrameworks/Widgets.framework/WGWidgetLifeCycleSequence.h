//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WGWidgetLifeCycleSequence : NSObject
{
    long long _currentState;
    NSString *_sequenceIdentifier;
    WGWidgetLifeCycleSequence *_previousSequence;
}

@property(retain, nonatomic, getter=_previousSequence, setter=_setPreviousSequence:) WGWidgetLifeCycleSequence *previousSequence; // @synthesize previousSequence=_previousSequence;
@property(readonly, copy, nonatomic) NSString *sequenceIdentifier; // @synthesize sequenceIdentifier=_sequenceIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)transitionToState:(long long)arg1;
- (CDUnknownBlockType)beginTransitionToState:(long long)arg1 error:(id *)arg2;
@property(nonatomic, setter=_setCurrentState:) long long currentState; // @synthesize currentState=_currentState;
- (_Bool)_isValidTransitionToState:(long long)arg1;
- (_Bool)isCurrentStateAtMost:(long long)arg1;
- (_Bool)isCurrentStateAtLeast:(long long)arg1;
- (_Bool)isCurrentStateNotYet:(long long)arg1;
- (_Bool)isCurrentState:(long long)arg1;
- (id)sequenceWithIdentifier:(id)arg1;
- (id)initWithSequenceIdentifier:(id)arg1;

@end

