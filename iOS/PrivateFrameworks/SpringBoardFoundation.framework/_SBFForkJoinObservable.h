//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFObservable.h>

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable
{
    NSArray *_observables;
    NSMutableArray *_results;
    unsigned long long _uncompletedObservableCount;
}

- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (void)_observableFinishedForObserver:(id)arg1;
- (void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithWithObservables:(id)arg1;

@end

