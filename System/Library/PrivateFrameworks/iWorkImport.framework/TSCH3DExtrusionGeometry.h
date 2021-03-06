//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGeometry.h>

__attribute__((visibility("hidden")))
@interface TSCH3DExtrusionGeometry : TSCH3DGeometry
{
    vector_d73af98f mCrossSection;
    vector_7200ab52 mSpine;
    vector_d73af98f mScale;
    _Bool mBeginCap;
    _Bool mEndCap;
    float mCrossSectionCreaseAngle;
    float mSpineCreaseAngle;
    unsigned int mEndCapOffset;
    int mEndCapCount;
    unsigned int mBeginCapOffset;
    int mBeginCapCount;
    tvec3_17f03ce0 mNormalBias;
    tvec3_17f03ce0 mSpineDirectionBias;
}

@property(nonatomic) tvec3_17f03ce0 spineDirectionBias; // @synthesize spineDirectionBias=mSpineDirectionBias;
@property(readonly, nonatomic) int capCount; // @synthesize capCount=mEndCapCount;
@property(readonly, nonatomic) unsigned int capOffset; // @synthesize capOffset=mEndCapOffset;
@property(nonatomic) tvec3_17f03ce0 normalBias; // @synthesize normalBias=mNormalBias;
@property(nonatomic) float spineCreaseAngle; // @synthesize spineCreaseAngle=mSpineCreaseAngle;
@property(nonatomic) float crossSectionCreaseAngle; // @synthesize crossSectionCreaseAngle=mCrossSectionCreaseAngle;
@property(nonatomic) _Bool endCap; // @synthesize endCap=mEndCap;
@property(nonatomic) _Bool beginCap; // @synthesize beginCap=mBeginCap;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)debug_dumpGeometryBounds;
- (void)generateArrays;
- (const vector_d73af98f *)scale;
- (void)setScale:(const vector_d73af98f *)arg1;
- (const vector_7200ab52 *)spine;
- (void)setSpine:(const vector_7200ab52 *)arg1;
- (const vector_d73af98f *)crossSection;
- (void)setCrossSection:(const vector_d73af98f *)arg1;
- (void)dealloc;
- (id)init;

@end

