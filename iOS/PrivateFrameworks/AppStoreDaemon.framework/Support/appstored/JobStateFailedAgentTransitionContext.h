//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JobAgentTransitionContext.h"

@class NSError;

@interface JobStateFailedAgentTransitionContext : JobAgentTransitionContext
{
    NSError *_error;
}

+ (id)forAgentState:(id)arg1;
- (void).cxx_destruct;
- (_Bool)applyToEntity:(id)arg1 inTransaction:(id)arg2;
- (id)__apply__error:(id)arg1;

@end

