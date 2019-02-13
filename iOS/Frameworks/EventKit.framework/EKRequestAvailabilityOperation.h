//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class EKAvailabilityCache, NSArray, NSDate, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface EKRequestAvailabilityOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _isExecuting;
    EKAvailabilityCache *_availabilityCache;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    CDUnknownBlockType _resultsBlock;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)main;
- (void)start;
- (id)description;
- (id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6;
- (id)init;

@end

