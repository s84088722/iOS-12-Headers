//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JobAgentState.h"

@interface DownloadingJobAgentState : JobAgentState
{
}

+ (_Bool)isInactiveState;
- (void)_addLockedPolicy;
- (void)_didStartDownload:(long long)arg1;
- (void)_didRestart;
- (void)_didCompleteDownload:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;
- (id)_decideNextState;
- (void)onMessage:(id)arg1;
- (void)onEnter;

@end

