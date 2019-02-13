//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>
#import <NeutrinoCore/NSMutableCopying-Protocol.h>

@interface NURegion : NSObject <NSCopying, NSMutableCopying>
{
    struct Region *_imp;
}

+ (id)regionWithRegion:(id)arg1;
+ (id)regionWithRect:(CDStruct_996ac03c)arg1;
+ (id)region;
- (double)density;
- (double)area;
- (_Bool)includesRegion:(id)arg1;
- (_Bool)includesRect:(CDStruct_996ac03c)arg1;
- (_Bool)intersectsRegion:(id)arg1;
- (_Bool)intersectsRect:(CDStruct_996ac03c)arg1;
- (CDStruct_996ac03c)bounds;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToRegion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRegion:(id)arg1;
- (id)initWithRect:(CDStruct_996ac03c)arg1;
- (id)init;
- (id)regionWithSubregionsOfMinimumDensity:(double)arg1;
- (id)convertImageRegion:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toRect:(CDStruct_996ac03c)arg3;
- (id)regionByFlippingInRect:(CDStruct_996ac03c)arg1;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform)arg1 roundPolicy:(long long)arg2;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (id)regionByShrinkingBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (id)regionByShrinkingBy:(CDStruct_912cb5d2)arg1;
- (id)regionByGrowingBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (id)regionByGrowingBy:(CDStruct_912cb5d2)arg1;
- (id)regionByTranslatingBy:(CDStruct_912cb5d2)arg1;
- (id)regionByScalingBy:(struct CGPoint)arg1 withRounding:(long long)arg2;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByExcludingRect:(CDStruct_996ac03c)arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByClippingToRect:(CDStruct_996ac03c)arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByRemovingRect:(CDStruct_996ac03c)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRect:(CDStruct_996ac03c)arg1;

@end

