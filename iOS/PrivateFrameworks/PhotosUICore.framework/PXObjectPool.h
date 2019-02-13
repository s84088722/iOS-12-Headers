//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXObjectPool : NSObject
{
    _Bool _isPerformingTransaction;
    long long _countLimit;
    NSMutableArray *_reusableObjects;
    long long _behavior;
}

@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) NSMutableArray *reusableObjects; // @synthesize reusableObjects=_reusableObjects;
@property(nonatomic) long long countLimit; // @synthesize countLimit=_countLimit;
- (void).cxx_destruct;
- (void)_vacuum;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)checkInObject:(id)arg1;
- (id)checkOutObjectPassingTest:(CDUnknownBlockType)arg1 usingFactory:(CDUnknownBlockType)arg2;
- (id)init;

@end

