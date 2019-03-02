//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, PGGraphNode;

@interface PGGraphMatchingContextItem : NSObject
{
    double _score;
    unsigned long long _relatedType;
    unsigned long long _criteria;
    PGGraphNode *_referenceNode;
    PGGraphNode *_matchedNode;
    NSSet *_contextNodes;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

+ (unsigned long long)criteriaForLocationLabel:(id)arg1;
+ (id)contextItemWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;
@property(readonly, nonatomic) NSSet *contextNodes; // @synthesize contextNodes=_contextNodes;
@property(readonly, nonatomic) PGGraphNode *matchedNode; // @synthesize matchedNode=_matchedNode;
@property(readonly, nonatomic) PGGraphNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(nonatomic) unsigned long long criteria; // @synthesize criteria=_criteria;
@property(readonly, nonatomic) unsigned long long relatedType; // @synthesize relatedType=_relatedType;
@property(nonatomic) double score; // @synthesize score=_score;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContextItem:(id)arg1;
- (id)debugDescription;
- (id)_matchedAddressNode;
- (void)_findLocalStartAndEndDate;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)description;
- (id)initWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;

@end
