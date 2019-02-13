//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSDWrapPolygon : NSObject <NSCopying>
{
    void *mPolygon;
    _Bool mIntersectsSelf;
    _Bool mComputedSelfIntersection;
    struct CGRect mBounds;
    _Bool mComputedBounds;
}

- (struct CGPoint)intersectionPointBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (id)bezierPath;
- (struct CGRect)bounds;
- (void *)polygon;
- (_Bool)intersectsSelf;
- (void)setIntersectsSelf:(_Bool)arg1;
- (void)setPath:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (void)p_computeIntersectionState;
- (int)p_countSegments;
- (void)p_setPolygon:(CDStruct_727a4eeb *)arg1;
- (void)p_freePolygon;

@end

