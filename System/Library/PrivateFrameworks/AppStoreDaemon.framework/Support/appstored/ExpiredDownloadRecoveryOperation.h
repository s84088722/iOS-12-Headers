//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AgentOperation.h"

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : AgentOperation
{
    SSMemoryEntity *_download;
    CDUnknownBlockType _outputBlock;
}

+ (_Bool)canAttemptRecoveryWithError:(id)arg1;
- (void).cxx_destruct;
- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithParentOperation:(id)arg1 downloadID:(long long)arg2 databaseTransaction:(id)arg3;

@end

