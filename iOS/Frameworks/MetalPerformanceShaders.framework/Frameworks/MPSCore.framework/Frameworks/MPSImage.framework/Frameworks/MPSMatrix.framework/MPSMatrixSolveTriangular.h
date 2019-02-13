//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrix;

@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel
{
    MPSMatrix *_workspace;
    _Bool _right;
    _Bool _upper;
    _Bool _transpose;
    _Bool _unit;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
    double _alpha;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) _Bool unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) unsigned long long numberOfRightHandSides; // @synthesize numberOfRightHandSides=_numberOfRightHandSides;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, nonatomic) _Bool transpose; // @synthesize transpose=_transpose;
@property(readonly, nonatomic) _Bool upper; // @synthesize upper=_upper;
@property(readonly, nonatomic) _Bool right; // @synthesize right=_right;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 right:(_Bool)arg2 upper:(_Bool)arg3 transpose:(_Bool)arg4 unit:(_Bool)arg5 order:(unsigned long long)arg6 numberOfRightHandSides:(unsigned long long)arg7 alpha:(double)arg8;

@end

