//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@interface PHAAcknowledgeDeletionsWorkerJob : PHAAssetProcessingJob
{
}

- (void)finish;
- (void)prepare;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (void)_deleteStateRecordsForSuccessfulResults;
- (void)_deleteStateRecordsForLocalUUIDs:(id)arg1;

@end

