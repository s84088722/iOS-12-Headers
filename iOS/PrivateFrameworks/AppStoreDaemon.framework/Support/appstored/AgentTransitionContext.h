//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Agent, NSString;

@interface AgentTransitionContext : NSObject
{
    Agent *_agent;
    NSString *_originState;
    NSString *_targetState;
}

+ (id)forState:(id)arg1;
+ (id)forAgentState:(id)arg1 state:(id)arg2;
+ (id)forAgentState:(id)arg1;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_targetState;
- (void).cxx_destruct;
- (id)_initWithAgentState:(id)arg1 state:(id)arg2;
- (void)transition;
- (_Bool)canApplyTo:(id)arg1;
- (_Bool)applyToEntity:(id)arg1 inTransaction:(id)arg2;

@end

