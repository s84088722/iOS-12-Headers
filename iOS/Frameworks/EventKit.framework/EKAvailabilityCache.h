//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EKAvailabilityCache : NSObject
{
    _Bool _sourceIsInvalid;
    NSString *_accountID;
    _Bool _sourceSupportsAvailabilityRequests;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_addressesToCachedSpanRanges;
    NSMutableDictionary *_ignoredEventIDsToAddressBasedCaches;
    unsigned long long _nextRequestID;
    unsigned long long _cancelledID;
}

+ (void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned long long)arg2;
+ (long long)_convertType:(long long)arg1;
+ (id)_generateEventKitSpansFromPersistenceSpans:(id)arg1;
+ (_Bool)_isValidStartDate:(id)arg1 endDate:(id)arg2;
- (void).cxx_destruct;
- (id)_dictionaryForIgnoredEventID:(id)arg1;
- (void)_handleResults:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2 ignoredEventID:(id)arg3;
- (void)cancelAvailabilityRequestWithID:(id)arg1;
- (id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)description;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

