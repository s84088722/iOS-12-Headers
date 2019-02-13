//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_nodes;
    struct GKCGraph *_cGraph;
    NSMutableDictionary *__info;
}

+ (_Bool)supportsSecureCoding;
+ (id)graphWithNodes:(id)arg1;
+ (id)graph;
@property(retain, nonatomic) NSMutableDictionary *_info; // @synthesize _info=__info;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;
- (void)addNodes:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(_Bool)arg2;
- (id)initWithNodes:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)nodesMut;
@property(readonly, nonatomic) NSArray *nodes;
- (struct GKCGraph *)cGraph;
- (struct GKCGraph *)makeCGraph;

@end
