//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureGraphElement.h>

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraphNode : UIGestureGraphElement
{
    NSMutableSet *_inEdges;
    NSMutableSet *_outEdges;
    NSMutableSet *_inOutEdges;
    NSMapTable *_edgesByLabel;
}

- (void).cxx_destruct;
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;
- (void)_removeEdge:(id)arg1;
- (void)_addEdge:(id)arg1;
- (id)description;
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *inOutEdges;
@property(readonly, nonatomic) NSSet *outEdges;
@property(readonly, nonatomic) NSSet *inEdges;
@property(readonly, nonatomic) NSSet *allEdges;
- (id)edgesForLabel:(id)arg1;
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isInOutEdge:(id)arg1;
- (_Bool)isOutEdge:(id)arg1;
- (_Bool)isInEdge:(id)arg1;
- (unsigned long long)typeOfEdge:(id)arg1;
- (_Bool)hasEdgeBetweenNode:(id)arg1;
- (_Bool)hasEdgeFromNode:(id)arg1;
- (_Bool)hasEdgeTowardNode:(id)arg1;
- (unsigned long long)edgeCountForLabel:(id)arg1;
@property(readonly, nonatomic) unsigned long long edgeCount;

@end

