//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet, WDUserDefaults;

@interface WDFavoriteDisplayTypesController : NSObject
{
    NSHashTable *_observers;
    NSMutableSet *_favoritedDisplayTypes;
    long long _state;
    WDUserDefaults *_userDefaults;
    _Bool _shouldRecoverFromErrors;
}

@property(nonatomic) _Bool shouldRecoverFromErrors; // @synthesize shouldRecoverFromErrors=_shouldRecoverFromErrors;
- (void).cxx_destruct;
- (void)_alertObserversDidSuccessfullyPersist;
- (void)_alertObserversDidFail;
- (void)_alertObserversDidUpdate;
- (void)_alertObserversControllerReady;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_reportFavoritedDisplayTypes;
- (id)_displayTypeIdentifiersFromDisplayTypes:(id)arg1;
- (void)_persistFavoritedDisplayTypes;
- (void)_handleFetchSuccess:(id)arg1;
- (void)_handleFetchError:(id)arg1;
- (void)_fetchUserDefaultsIfNecessary;
- (void)_recoverFromFailureStateIfNecessary;
- (_Bool)_needsFetch;
- (void)removeAllFavorites;
- (void)setIsFavorited:(_Bool)arg1 displayTypes:(id)arg2;
- (void)setIsFavorited:(_Bool)arg1 displayType:(id)arg2;
- (id)favoritedDisplayTypes;
- (_Bool)displayTypeIsFavorited:(id)arg1;
@property(readonly, nonatomic) _Bool hasLoadedInitialState;
- (id)initWithWDUserDefaults:(id)arg1;

@end

