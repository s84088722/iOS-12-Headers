//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CalSearchDataSink;

@interface CalSearch : NSObject
{
    // Error parsing type: ^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}, name: _database
    struct CalFilter *_filter;
    struct __CFString *_searchString;
    int _seed;
    id <CalSearchDataSink> _dataSink;
    _Bool _dateToStartShowingResultsSentToDataSink;
    _Bool _moreResultsAvailable;
    struct __CFArray *_partialResults;
    struct __CFArray *_partialCachedOccurrences;
    struct __CFArray *_partialCachedDays;
    struct __CFArray *_partialCachedDaysIndexes;
    struct __CFSet *_matchedEventsSet;
    struct __CFSet *_matchedParticipantsSet;
    struct __CFSet *_matchedLocationsSet;
    _Bool _stopLoadingResults;
    struct _opaque_pthread_mutex_t _dataSourceDeallocLock;
    _Bool _implementsCancellationCallback;
    _Bool _searchParticipants;
    _Bool _searchLocations;
    _Bool _searchAttendees;
}

@property _Bool searchAttendees; // @synthesize searchAttendees=_searchAttendees;
@property _Bool searchLocations; // @synthesize searchLocations=_searchLocations;
@property _Bool searchParticipants; // @synthesize searchParticipants=_searchParticipants;
- (void).cxx_destruct;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg1;
- (struct CalEventOccurrenceSearchContext *)_createSearchContext;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg1;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg1;
- (struct CalEventIdsSearchContext *)_createEventIdsSearchContext;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg1;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg1;
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg1;
- (void)_addMatchedEventIds:(struct __CFArray *)arg1;
- (void)_startLoadingResults;
- (int)seed;
- (_Bool)moreResultsAvailable;
- (void)stopSearching;
- (void)startSearching;
- (void)dealloc;
-     // Error parsing type: @40@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16^{CalFilter=}24@32, name: initWithDatabase:filter:dataSink:

@end
