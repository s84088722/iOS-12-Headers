//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface MKLaneDirectionCollisionCalculator : NSObject
{
    NSMutableDictionary *_collisionsForDirection;
    NSMutableArray *_directions;
    NSNumber *_directionWithMostCollisions;
    _Bool _hasCollisions;
}

@property(readonly, nonatomic) _Bool hasCollisions; // @synthesize hasCollisions=_hasCollisions;
- (void).cxx_destruct;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1;
- (void)removeNextDirectionWithCollisions;
@property(readonly, nonatomic) _Bool hasDirectionWithMaxCollisions;
- (void)_recalculateCollisions;
@property(readonly, nonatomic) NSArray *directions;
- (id)initWithDirections:(id)arg1;

@end

