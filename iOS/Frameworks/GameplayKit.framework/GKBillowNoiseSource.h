//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKBillowNoiseSource : GKCoherentNoiseSource
{
    double _persistence;
}

+ (id)billowNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;
@property(nonatomic) double persistence; // @synthesize persistence=_persistence;
- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;
- (id)init;

@end

