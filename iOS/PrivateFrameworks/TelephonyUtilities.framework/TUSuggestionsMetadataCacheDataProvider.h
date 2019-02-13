//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    NSObject<OS_dispatch_semaphore> *_suggestionsServiceThrottleSemaphore;
    id _suggestionsContactsObserver;
}

+ (id)newestSuggestedContactForDestinationID:(id)arg1;
+ (void)suggestedNamesForDestinationID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)sharedService;
@property(readonly, nonatomic) id suggestionsContactsObserver; // @synthesize suggestionsContactsObserver=_suggestionsContactsObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore; // @synthesize suggestionsServiceThrottleSemaphore=_suggestionsServiceThrottleSemaphore;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (id)init;

@end

