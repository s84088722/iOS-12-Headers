//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixUnaryKernel : MPSKernel
{
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    CDStruct_67e7699a _sourceMatrixOrigin;
    CDStruct_67e7699a _resultMatrixOrigin;
}

@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) unsigned long long batchStart; // @synthesize batchStart=_batchStart;
@property(nonatomic) CDStruct_67e7699a resultMatrixOrigin; // @synthesize resultMatrixOrigin=_resultMatrixOrigin;
@property(nonatomic) CDStruct_67e7699a sourceMatrixOrigin; // @synthesize sourceMatrixOrigin=_sourceMatrixOrigin;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

