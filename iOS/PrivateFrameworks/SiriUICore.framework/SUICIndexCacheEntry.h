//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUICIndexCacheEntry : NSObject
{
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int *_gl_indices;
}

@property(nonatomic) unsigned int *gl_indices; // @synthesize gl_indices=_gl_indices;
@property(nonatomic) unsigned int numWaveIndices; // @synthesize numWaveIndices=_numWaveIndices;
@property(nonatomic) unsigned int numAuraIndicesCulled; // @synthesize numAuraIndicesCulled=_numAuraIndicesCulled;
@property(nonatomic) unsigned int numAuraIndices; // @synthesize numAuraIndices=_numAuraIndices;
- (void)dealloc;

@end

