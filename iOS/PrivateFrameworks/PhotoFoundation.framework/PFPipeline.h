//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PFPipelineDelegate;

@interface PFPipeline : NSObject
{
    NSString *_label;
    NSArray *_stages;
    unsigned long long _jobsInFlight;
    unsigned long long _concurrentJobLimit;
    unsigned long long _recomputeAllocatedThreads;
    id <PFPipelineDelegate> _delegate;
}

+ (void)concurrencyRecomputeNeeded;
+ (void)recomputeConcurrency:(unsigned long long)arg1;
+ (id)pipelineWithLabel:(id)arg1 stageCount:(unsigned long long)arg2 selectors:(SEL *)arg3 concurrentJobLimit:(unsigned long long)arg4 delegate:(id)arg5;
+ (unsigned long long)maximumConcurrency;
+ (void)initialize;
@property(readonly) NSArray *stages; // @synthesize stages=_stages;
@property(readonly) __weak id <PFPipelineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishedAJob:(id)arg1;
- (void)jobCompletedStage:(id)arg1;
- (void)stage0GeneratedJob:(id)arg1;
- (void)invokeStage:(id)arg1;
- (void)addJobs:(id)arg1;
- (void)addJob:(id)arg1;
- (void)addJobs:(unsigned long long)arg1 withQOS:(unsigned int)arg2 generator:(CDUnknownBlockType)arg3;
- (void)resumePreviousStage:(unsigned long long)arg1;
- (void)pausePreviousStage:(unsigned long long)arg1;
- (void)deactivate;
- (void)activate;
- (id)description;
- (id)initWithLabel:(id)arg1 stages:(id)arg2 concurrentJobLimit:(unsigned long long)arg3 delegate:(id)arg4;
- (id)init;

@end

