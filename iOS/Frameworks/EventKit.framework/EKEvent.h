//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKCalendarItem.h>

#import <EventKit/EKJunkInvitationProtocol_Private-Protocol.h>

@class EKCalendarDate, EKEventStore, EKParticipant, EKReadWriteLock, EKStructuredLocation, EKSuggestedEventInfo, NSArray, NSDate, NSNumber, NSString, NSURL;

@interface EKEvent : EKCalendarItem <EKJunkInvitationProtocol_Private>
{
    EKStructuredLocation *_cachedLocationPrediction;
    NSDate *_cachedLocationPredictionExpirationDate;
    _Bool _locationPredictionFrozen;
    _Bool _locationPredictionAllowed;
    EKReadWriteLock *_locationPredictionLock;
    _Bool _occurrenceIsAllDay;
    _Bool _requiresDetachDueToSnoozedAlarm;
    int _clearModifiedFlags;
    NSString *_birthdayPersonUniqueID;
    EKCalendarDate *_occurrenceStartDate;
    EKCalendarDate *_occurrenceEndDate;
    EKCalendarDate *_originalOccurrenceStartDate;
    EKCalendarDate *_originalOccurrenceEndDate;
    NSNumber *_originalOccurrenceIsAllDay;
}

+ (id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3;
+ (long long)_eventAvailabilityForParticipantStatus:(long long)arg1 supportedEventAvailabilities:(unsigned long long)arg2 isAllDayEvent:(_Bool)arg3;
+ (id)eventWithEventStore:(id)arg1;
+ (id)knownKeysToUseForFutureChanges;
+ (id)knownKeysToSkipForFutureChanges;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (Class)frozenClass;
+ (id)_locationStringForLocations:(id)arg1;
@property(nonatomic) int clearModifiedFlags; // @synthesize clearModifiedFlags=_clearModifiedFlags;
@property(nonatomic) _Bool requiresDetachDueToSnoozedAlarm; // @synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm;
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay; // @synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay;
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate; // @synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate;
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate; // @synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate;
@property(nonatomic) _Bool occurrenceIsAllDay; // @synthesize occurrenceIsAllDay=_occurrenceIsAllDay;
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate; // @synthesize occurrenceEndDate=_occurrenceEndDate;
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate; // @synthesize occurrenceStartDate=_occurrenceStartDate;
@property(readonly, nonatomic) NSString *birthdayPersonUniqueID; // @synthesize birthdayPersonUniqueID=_birthdayPersonUniqueID;
- (void).cxx_destruct;
- (void)_clearAttendeeChangedFlags;
- (void)dismissAcceptedProposeNewTimeNotification;
@property(readonly, nonatomic) NSURL *launchURL;
- (_Bool)updateWithGeocodedMapItemAndSaveWithCommit:(id)arg1 eventStore:(id)arg2 error:(id *)arg3;
- (id)scanForConflicts;
- (id)potentialConflictOccurrenceDatesInTimePeriod:(double *)arg1;
- (_Bool)_fetchedEventIsConflict:(id)arg1 forStartDate:(id)arg2 endDate:(id)arg3;
- (_Bool)updateEventToEvent:(id)arg1 commit:(_Bool)arg2;
- (_Bool)updateEventToEvent:(id)arg1;
@property(retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
- (id)privacyLevelString;
- (void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(_Bool)arg3;
- (id)committedCopy;
- (void)rebase;
- (_Bool)_noRemainingEarlierOccurrences;
- (_Bool)_eventIsTheOnlyRemainingOccurrence;
- (_Bool)removeWithSpan:(long long)arg1 error:(id *)arg2;
- (_Bool)_isInitialOccurrenceDate:(id)arg1;
- (void)_cancelDetachedEventsWithSpan:(long long)arg1;
- (_Bool)_cancelWithSpan:(long long)arg1 error:(id *)arg2;
- (void)_deleteThisOccurrence;
- (void)_updateSelfFromDetachedEventIfNeededForDelete;
- (void)_deleteFromOccurrenceDateOnward:(id)arg1;
- (_Bool)_deleteWithSpan:(long long)arg1 error:(id *)arg2;
- (_Bool)_shouldDeclineInsteadOfDelete;
- (_Bool)_shouldCancelInsteadOfDeleteWithSpan:(long long)arg1;
- (_Bool)_isSimpleRepeatingEvent;
- (_Bool)allowsSpansOtherThanThisEvent;
- (_Bool)conformsToRecurrenceRules:(id)arg1;
- (_Bool)_checkStartDateConstraintAgainstDate:(CDStruct_79f9e052)arg1 timeZone:(id)arg2 error:(id *)arg3;
- (_Bool)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2;
- (_Bool)_validateAlarmIntervalConstrainedToRecurrenceInterval:(long long)arg1;
- (_Bool)_validateDurationConstrainedToRecurrenceInterval;
- (_Bool)_validateDatesAndRecurrencesGivenSpan:(long long)arg1 error:(id *)arg2;
- (_Bool)validateRecurrenceRule:(id)arg1 error:(id *)arg2;
- (_Bool)hasAttendeeProposedTimes;
- (id)_dateForNextOccurrence;
- (void)rollback;
- (_Bool)revert;
- (_Bool)_reset;
- (void)reset;
- (void)_addNewAttendeesToRecentsIfNeeded;
- (void)_addOrganizerToRecentsIfNeeded;
- (void)markAsCommitted;
- (void)markAsSaved;
- (void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3;
- (void)_adjustForNewCalendarBeforeCommit;
- (void)_filterExceptionDates;
- (void)_clearExceptionDatesAndUpdateDetachedOriginalDates;
- (void)_applyTimeChangesToMaster;
- (id)_updateMasterDate:(id)arg1 forChangeToOccurrenceDate:(id)arg2 fromOriginalOccurrenceDate:(id)arg3;
- (_Bool)_isSignificantlyDetachedComparedToMaster:(id)arg1 shouldIgnorePartStat:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isSignificantlyDetachedIgnoringParticipation;
@property(readonly, nonatomic) _Bool isSignificantlyDetached;
- (void)_propagateChangesToDetachedEvents:(id)arg1 significantlyDetachedEvents:(id)arg2 startDateOffset:(id)arg3 duration:(id)arg4 calendar:(id)arg5;
- (void)_updateModifiedProperties;
- (void)_updateModifiedPropertiesForThisEventAndAllDetachments;
- (_Bool)commitWithSpan:(long long)arg1 error:(id *)arg2;
- (void)_willCommit;
- (id)_generateNewUniqueID;
- (_Bool)validateWithSpan:(long long)arg1 error:(id *)arg2;
- (_Bool)validate:(id *)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)_refreshDateForKey:(id)arg1;
- (_Bool)refresh;
- (id)privacyDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool allowsParticipationStatusModifications;
- (_Bool)hasValidEventAction;
- (_Bool)_hasExternalIDOrDeliverySource;
- (_Bool)isInvitation;
@property(readonly, nonatomic) _Bool canBeRespondedTo;
- (_Bool)allowsAlarmModifications;
- (_Bool)hasSelfAttendee;
@property(readonly, nonatomic) _Bool allowsAvailabilityModifications;
- (id)uniqueId;
@property(retain, nonatomic) NSDate *participationStatusModifiedDate;
@property(readonly, nonatomic) long long pendingParticipationStatus;
- (_Bool)couldBeJunk;
@property(readonly, nonatomic) _Bool supportsJunkReporting;
@property(readonly, nonatomic) NSString *sendersPhoneNumber;
@property(readonly, nonatomic) NSString *sendersEmail;
@property(nonatomic) unsigned long long junkStatus;
@property(readonly, nonatomic) _Bool travelAdvisoryBehaviorIsEffectivelyEnabled;
@property(nonatomic) long long travelAdvisoryBehavior;
@property(readonly, nonatomic) _Bool eligibleForTravelAdvisories;
@property(readonly, nonatomic) _Bool automaticLocationGeocodingAllowed;
- (_Bool)changingAllDayPropertyIsAllowed;
@property(readonly, nonatomic) _Bool canDetachSingleOccurrence;
- (_Bool)requiresDetach;
@property(readonly, nonatomic) _Bool responseMustApplyToAll;
- (_Bool)allowsCalendarModifications;
- (_Bool)allowsRecurrenceModifications;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool isDetached;
- (long long)compareStartDateIncludingTravelWithEvent:(id)arg1;
- (long long)compareStartDateWithEvent:(id)arg1;
- (_Bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (_Bool)isTentative;
@property(retain, nonatomic) NSURL *conferenceURL;
- (id)actions;
- (void)setLocationPredictionAllowed:(_Bool)arg1;
- (void)setPredictedLocationFrozen:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasPredictedLocation;
- (void)rejectPredictedLocation;
- (void)confirmPredictedLocation:(id)arg1;
@property(readonly, nonatomic) NSString *locationWithoutPrediction;
@property(readonly, nonatomic) EKStructuredLocation *preferredLocationWithoutPrediction;
- (void)_clearLocationPredictionCacheIfNotFrozen;
- (void)_clearLocationPredictionCacheIfNotFrozenHoldingLock;
- (id)_updatePredictedLocationCacheIfNeeded;
- (id)_updatePredictedLocationCacheIfNeededHoldingLock;
- (_Bool)_needsPredictedLocationCacheUpdateHoldingLock;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation; // @dynamic structuredLocation;
- (void)setURL:(id)arg1;
- (void)setNotes:(id)arg1;
@property(readonly, nonatomic) _Bool allowsProposedTimeModifications;
- (_Bool)serverSupportedProposeNewTime;
- (_Bool)canForward;
@property(nonatomic) _Bool attendeeReplyChanged; // @dynamic attendeeReplyChanged;
@property(nonatomic) _Bool attendeeDeclinedStartDate;
@property(nonatomic) _Bool attendeeProposedStartDate;
@property(nonatomic) _Bool attendeeStatus;
@property(nonatomic) _Bool attendeeComment;
@property(nonatomic) _Bool locationChanged;
@property(nonatomic) _Bool titleChanged;
@property(nonatomic) _Bool timeChanged;
@property(nonatomic) _Bool dateChanged;
- (void)_setInvitationChangedProperty:(_Bool)arg1 forFlag:(unsigned int)arg2;
- (_Bool)_invitationChangedPropertyForFlag:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool locationIsAConferenceRoom;
@property(nonatomic) long long privacyLevel;
@property(readonly, nonatomic) _Bool allowsPrivacyLevelModifications;
@property(readonly, nonatomic) _Bool allowsTravelTimeModifications;
- (_Bool)allowsAttendeesModifications;
@property(readonly, nonatomic) long long travelRoutingMode;
@property(retain, nonatomic) NSDate *proposedStartDate;
- (_Bool)isProposedTimeEvent;
@property(nonatomic) double travelTime;
@property(readonly, nonatomic) NSDate *startDateIncludingTravel;
- (id)_travelTimeInternalDescription;
@property(nonatomic) int externalTrackingStatus;
- (void)clearInvitationStatus;
@property(nonatomic) unsigned long long invitationStatus;
- (void)setResponseComment:(id)arg1;
- (id)responseComment;
@property(nonatomic) long long availability;
- (id)startDateForRecurrence;
- (void)setRecurrenceRule:(id)arg1;
- (id)recurrenceRule;
@property(readonly, nonatomic) NSString *birthdayContactIdentifier;
@property(readonly, nonatomic) long long birthdayPersonID;
- (long long)_parentParticipationStatus;
- (void)markEventAsAttendeeForward;
@property(nonatomic) long long participationStatus;
- (_Bool)_isParticipationStatusDirty;
@property(nonatomic) _Bool firedTTL;
@property(nonatomic) long long locationPredictionState;
- (void)setNeedsOccurrenceCacheUpdate:(_Bool)arg1;
- (_Bool)needsOccurrenceCacheUpdate;
@property(nonatomic) long long status;
- (CDStruct_79f9e052)endDatePinnedForAllDay;
- (CDStruct_79f9e052)startDatePinnedForAllDay;
@property(readonly, nonatomic) CDStruct_79f9e052 endDateGr;
@property(readonly, nonatomic) CDStruct_79f9e052 startDateGr;
- (CDStruct_79f9e052)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2;
@property(readonly, copy, nonatomic) NSDate *initialEndDate;
@property(readonly, nonatomic) NSDate *occurrenceDate;
@property(readonly, nonatomic) _Bool isMaster;
@property(readonly, copy, nonatomic) NSDate *initialStartDate;
- (void)setOriginalStartDate:(id)arg1;
@property(readonly, nonatomic) NSDate *originalStartDate;
- (_Bool)isFloating;
- (id)_effectiveTimeZone;
- (void)setTimeZone:(id)arg1;
@property(copy, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) EKCalendarDate *endCalendarDate;
- (void)setEndDateRaw:(id)arg1;
- (id)endDateRaw;
@property(readonly, nonatomic) double durationIncludingTravel;
@property(readonly, nonatomic) double duration;
- (void)_setStartDate:(id)arg1 andClearProposedTimes:(_Bool)arg2;
- (void)overrideStartDate:(id)arg1;
@property(copy, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) EKCalendarDate *startCalendarDate;
- (id)_committedStartDate;
- (void)setStartDateRaw:(id)arg1;
- (id)startDateRaw;
@property(readonly, nonatomic) EKCalendarDate *startCalendarDateIncludingTravelTime;
@property(nonatomic, getter=isAllDay) _Bool allDay;
- (_Bool)_isAllDay;
@property(nonatomic) _Bool isPhantom;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (void)_sendModifiedNote;
@property(readonly, nonatomic) _Bool isAllDayDirty;
@property(readonly, nonatomic) _Bool isEndDateDirty;
@property(readonly, nonatomic) _Bool isStartDateDirty;
@property(readonly, nonatomic) _Bool isStatusDirty;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *externalURL;
- (id)externalURI;
@property(readonly, nonatomic) NSString *eventIdentifier;
- (id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2;
- (id)initWithPersistentObject:(id)arg1;
- (id)initWithEventStore:(id)arg1;
- (id)init;
- (_Bool)_canWriteConferenceURL;
- (void)_updateConferenceURL;
- (_Bool)_hasChangesForConferenceURLDetection;
- (void)updateConferenceURLIfNeeded;
- (id)_prioritizedConferencesSources;
- (id)_detectConferenceURL;
- (id)conferenceURLDetected;
- (void)clearDetectedConferenceURL;
- (id)conferenceURLForDisplay;
- (void)setURLCommon:(id)arg1;
- (void)setNotesCommon:(id)arg1;
@property(readonly, nonatomic) NSArray *locationsWithoutPrediction;
@property(retain, nonatomic) NSArray *locations;
- (_Bool)_couldBeJunkCommon;
@property(nonatomic) unsigned long long cachedJunkStatus; // @dynamic cachedJunkStatus;
- (void)setIsJunk:(_Bool)arg1 shouldSave:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *UUID; // @dynamic UUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) EKEventStore *eventStore;
@property(readonly, nonatomic) EKParticipant *organizer; // @dynamic organizer;
@property(readonly) Class superclass;
@property(retain, nonatomic) EKStructuredLocation *travelStartLocation; // @dynamic travelStartLocation;

@end

