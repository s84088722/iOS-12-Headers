//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKCOUpdateOperation.h>

#import <iWorkImport/TSKCORangeOperation-Protocol.h>
#import <iWorkImport/TSKCOTransforming-Protocol.h>
#import <iWorkImport/TSKCOUpdateRangeOperationSubset-Protocol.h>

@class TSKCORangeAddress;

__attribute__((visibility("hidden")))
@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation, TSKCOUpdateRangeOperationSubset, TSKCOTransforming>
{
    int _transformBehavior;
    TSKCORangeAddress *_address;
}

+ (id)stringForTransformBehavior:(int)arg1;
@property(readonly, nonatomic) int transformBehavior; // @synthesize transformBehavior=_transformBehavior;
@property(readonly, nonatomic) TSKCORangeAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (id)toString;
- (id)ut_transformByTransformer:(id)arg1;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)toUpdateRangeOperation;
- (id)operationWithNewAddress:(id)arg1;
- (id)operationWithNewNoop:(_Bool)arg1;
- (id)initWithRangeAddress:(id)arg1 selectionPropertyName:(id)arg2;
- (id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 noop:(_Bool)arg3;
- (id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2;
- (id)p_initWithRangeAddress:(id)arg1 propertyName:(id)arg2 transformBehavior:(int)arg3 noop:(_Bool)arg4;

@end
