//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MANode.h"

@class NSDateComponents;

@interface PGGraphNode : MANode
{
}

+ (id)sortEventsByDateSortDescriptors;
+ (id)addressNodesFromEventNodes:(id)arg1;
+ (id)_specialDateComponentsForDate:(id)arg1;
+ (double)specialDateTimeIntervalForDateComponents:(id)arg1;
+ (id)_specialDateDateComponentsFromTimeInterval:(double)arg1;
+ (double)specialDateTimeIntervalForDate:(id)arg1;
+ (unsigned long long)partOfDayForPartOfDayNode:(id)arg1;
+ (id)stringValueForPartOfDay:(unsigned long long)arg1;
- (id)keywordDescription;
- (id)_stringValueForPropertyWithKey:(id)arg1;
- (id)UUID;
- (id)name;
- (_Bool)isFrequentSocialGroup;
- (id)nameAsSocialGroupNode;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(_Bool *)arg4 block:(CDUnknownBlockType)arg5;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3 andBlock:(CDUnknownBlockType)arg4;
- (id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)matchingDescription;
- (double)neighborScore;
- (double)contentScore;
- (_Bool)isSmartInteresting;
- (_Bool)isInteresting;
- (void)_enumeratePartOfDayWithThreshold:(float)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_partOfDayWithThreshold:(float)arg1;
- (void)enumerateSignificantPartsOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePartOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)significantPartsOfDay;
- (unsigned long long)partOfDay;
- (struct CLLocationCoordinate2D)bestLocationCoordinate;
- (id)bestAddressNode;
- (id)sameMonthEvents;
- (id)sameWeekendEvents;
- (id)lastWeekendEvents;
- (id)weekendNode;
- (_Bool)isWeekend;
- (id)nextEvent;
- (double)momentMeaningScore;
- (id)previousEvent;
- (unsigned long long)totalNumberOfPersons;
- (unsigned long long)numberOfAssets;
- (double)timestampTZEnd;
- (double)timestampTZStart;
- (double)timestampUTCEnd;
- (double)timestampUTCStart;
- (id)meaningLabels;
- (double)contentScoreAverage;
- (double)meaningScore;
- (_Bool)belongsToDefaultMemoryAssetCollections;
- (_Bool)hasParentCollection;
- (id)lastWeekDateNodes;
- (id)sameWeekDateNodes;
- (id)localDate;
- (double)graphScore;
@property(retain, nonatomic) NSDateComponents *anniversaryDateComponents;
@property(retain, nonatomic) NSDateComponents *birthdayDateComponents;
- (double)personScore;
- (_Bool)isUserCreated;
- (_Bool)isFavorite;
- (long long)timeValue;

@end

