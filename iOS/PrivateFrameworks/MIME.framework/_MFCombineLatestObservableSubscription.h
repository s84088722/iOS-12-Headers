//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _MFCombineLatestObservableSubscription : NSObject
{
    NSLock *_lock;
    NSArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_activeIndexes;
    NSMutableIndexSet *_silentIndexes;
}

@property(retain, nonatomic) NSMutableIndexSet *silentIndexes; // @synthesize silentIndexes=_silentIndexes;
@property(retain, nonatomic) NSMutableIndexSet *activeIndexes; // @synthesize activeIndexes=_activeIndexes;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(copy, nonatomic) NSArray *observables; // @synthesize observables=_observables;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3;
- (void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;
- (void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;

@end

