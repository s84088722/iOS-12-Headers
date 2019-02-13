//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface PXIDSAddressQuery : NSObject
{
    unsigned long long _destinationsCount;
    NSMutableSet *_mutableRemainingDestinations;
    NSMutableDictionary *_mutableStashedResults;
    unsigned long long _resultsCount;
    CDUnknownBlockType _resultHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isComplete;
@property(readonly, copy, nonatomic) NSSet *remainingDestinations;
- (id)popStashedResults;
- (void)stashDestination:(id)arg1 withResult:(_Bool)arg2;
- (id)initWithDestinations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

