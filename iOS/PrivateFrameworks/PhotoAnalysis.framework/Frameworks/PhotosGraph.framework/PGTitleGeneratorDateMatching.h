//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSSet, PGGraph, PGTitle;

@interface PGTitleGeneratorDateMatching : NSObject
{
    PGGraph *_graph;
    long long _type;
    NSDateInterval *_referenceDateInterval;
    NSSet *_dateNodes;
    NSSet *_momentNodes;
}

+ (id)_dateNodesFromMomentNodes:(id)arg1;
+ (id)_typeMatchings;
+ (_Bool)type:(long long)arg1 isBetterThanType:(long long)arg2;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) NSSet *dateNodes; // @synthesize dateNodes=_dateNodes;
@property(retain, nonatomic) NSDateInterval *referenceDateInterval; // @synthesize referenceDateInterval=_referenceDateInterval;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (long long)_matchingTypeForDateNode:(id)arg1;
- (long long)_findBestType;
- (_Bool)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
@property(readonly, nonatomic) unsigned long long allowedTimeTitleFormats;
@property(readonly, nonatomic) PGTitle *title;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3;

@end

