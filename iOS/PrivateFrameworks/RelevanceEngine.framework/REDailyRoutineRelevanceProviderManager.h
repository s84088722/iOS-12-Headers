//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REDailyRoutinePredictorDelegate-Protocol.h>

@class NSString;

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate>
{
    _Bool _inMorningRoutine;
    _Bool _inEveningRoutine;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1;
- (void)_updateRoutines;
- (void)_prepareForUpdate;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (_Bool)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

