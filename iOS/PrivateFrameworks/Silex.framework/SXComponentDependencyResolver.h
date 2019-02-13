//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface SXComponentDependencyResolver : NSObject
{
    NSArray *_solvedComponentNodes;
    NSMutableArray *_componentNodes;
    NSDictionary *_mappedComponentNodes;
}

@property(readonly, nonatomic) NSDictionary *mappedComponentNodes; // @synthesize mappedComponentNodes=_mappedComponentNodes;
@property(readonly, nonatomic) NSMutableArray *componentNodes; // @synthesize componentNodes=_componentNodes;
@property(readonly, nonatomic) NSArray *solvedComponentNodes; // @synthesize solvedComponentNodes=_solvedComponentNodes;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)createComponentNodesForComponentIdentifiers:(id)arg1;
- (void)reset;
- (void)resolveStack:(id)arg1 withSolvedNodes:(id)arg2;
- (id)solvedOrderForComponentNodes:(id)arg1;
- (id)componentNodesDependentOnComponentNode:(id)arg1;
- (id)componentNodeForComponentIdentifier:(id)arg1 andAttribute:(long long)arg2;
- (id)solvableOrder;
- (void)addComponentNode:(id)arg1;
- (void)addDependency:(id)arg1;
- (id)initWithComponentIdentifiers:(id)arg1;

@end

