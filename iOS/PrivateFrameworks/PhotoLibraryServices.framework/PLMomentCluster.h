//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSCountedSet, NSDate, NSMutableArray, NSMutableSet, NSString;
@protocol NSCopying;

@interface PLMomentCluster : NSObject
{
    _Bool __usedLocationsOfInterest;
    short _generationType;
    NSString *__title;
    NSObject<NSCopying> *__objectID;
    NSDate *__startingDate;
    NSDate *__endingDate;
    CLLocation *__approximateLocation;
    NSMutableArray *__mutableNodes;
    NSMutableSet *__nodesWithLocation;
    NSCountedSet *__splitTags;
    NSCountedSet *__mergeTags;
}

+ (double)nameOccurrenceCutoff;
@property(retain, nonatomic, setter=_setMergeTags:) NSCountedSet *_mergeTags; // @synthesize _mergeTags=__mergeTags;
@property(retain, nonatomic, setter=_setSplitTags:) NSCountedSet *_splitTags; // @synthesize _splitTags=__splitTags;
@property(readonly, nonatomic) NSMutableSet *_nodesWithLocation; // @synthesize _nodesWithLocation=__nodesWithLocation;
@property(copy, nonatomic, setter=_setNodes:) NSMutableArray *_mutableNodes; // @synthesize _mutableNodes=__mutableNodes;
@property(nonatomic) short generationType; // @synthesize generationType=_generationType;
@property(nonatomic) _Bool usedLocationsOfInterest; // @synthesize usedLocationsOfInterest=__usedLocationsOfInterest;
@property(retain, nonatomic, setter=_setEndingDate:) NSDate *endingDate; // @synthesize endingDate=__endingDate;
@property(retain, nonatomic, setter=_setStartingDate:) NSDate *startingDate; // @synthesize startingDate=__startingDate;
@property(copy, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=__objectID;
@property(retain, nonatomic) NSString *title; // @synthesize title=__title;
- (unsigned long long)expandFromNode:(id)arg1 withNeighbors:(id)arg2 inClustering:(id)arg3 minimumNumberOfPoints:(unsigned long long)arg4;
@property(readonly, nonatomic) CLLocation *approximateLocation; // @synthesize approximateLocation=__approximateLocation;
- (void)_correctStartAndEndDates;
- (void)removeNodesFromCluster:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)removeNode:(id)arg1 nilCluster:(_Bool)arg2;
- (void)addNodes:(id)arg1;
- (void)addNodesFromCluster:(id)arg1;
- (void)addNode:(id)arg1;
- (id)mergeTags;
- (id)mergeTagAboveCutoff:(double)arg1;
- (id)splitTags;
- (_Bool)hasMerges;
- (_Bool)hasSplits;
- (_Bool)isTagged;
@property(readonly, copy, nonatomic) NSArray *nodes;
- (id)description;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1;
- (id)initWithMoment:(id)arg1;
- (id)init;
- (void)commonPLMomentClusterInitialization;

@end

