//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSSecureCoding>
{
    NSMutableArray *_connectedNodes;
    struct GKCGraphNode *_cGraphNode;
}

+ (_Bool)supportsSecureCoding;
+ (id)node;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)findPathFromNode:(id)arg1;
- (id)findPathToNode:(id)arg1;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (void)removeConnectionsToNodes:(id)arg1 bidirectional:(_Bool)arg2;
- (void)removeConnection:(id)arg1;
- (void)addConnectionsToNodes:(id)arg1 bidirectional:(_Bool)arg2;
- (void)addConnection:(id)arg1 bidirectional:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (id)mutConnectedNodes;
@property(readonly, nonatomic) NSArray *connectedNodes;
- (void)deleteCGraphNode;
- (struct GKCGraphNode *)makeCGraphNode;
- (struct GKCGraphNode *)cGraphNode;

@end

