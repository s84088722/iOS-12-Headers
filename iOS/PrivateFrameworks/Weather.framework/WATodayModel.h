//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSOperationQueue, WAForecastModel, WFServiceConnection;

@interface WATodayModel : NSObject
{
    NSHashTable *_observers;
    NSOperationQueue *_modelOperationQueue;
    _Bool _hasPendingUpdates;
    WAForecastModel *_forecastModel;
    NSDate *_lastUpdateDate;
    WFServiceConnection *_connection;
    struct ct_green_tea_logger_s *_greenTeaLogger;
}

+ (id)modelWithLocation:(id)arg1;
+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
@property(nonatomic) _Bool hasPendingUpdates; // @synthesize hasPendingUpdates=_hasPendingUpdates;
@property(nonatomic) struct ct_green_tea_logger_s *greenTeaLogger; // @synthesize greenTeaLogger=_greenTeaLogger;
@property(retain, nonatomic) WFServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
- (void).cxx_destruct;
- (void)_persistStateWithModel:(id)arg1;
- (void)performDelayedUpdatesForObserver:(id)arg1;
- (void)_fireTodayModelForecastWasUpdated:(id)arg1;
- (void)_fireTodayModelWantsUpdate;
- (void)clearLocationUpdateState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)hasCrossedHourlyBoundary;
- (void)checkIfNeedsToUpdate;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
@property(retain, nonatomic) WAForecastModel *forecastModel; // @synthesize forecastModel=_forecastModel;
- (id)location;
- (void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)executeModelUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (id)init;

@end

