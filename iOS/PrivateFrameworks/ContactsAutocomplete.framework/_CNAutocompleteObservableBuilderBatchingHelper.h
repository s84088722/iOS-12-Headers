//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject
{
    NSArray *_batches;
}

@property(readonly, nonatomic) NSArray *batches; // @synthesize batches=_batches;
- (void).cxx_destruct;
- (id)batchedObservables;
- (void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2;
- (id)initWithBatchCount:(unsigned long long)arg1;

@end

