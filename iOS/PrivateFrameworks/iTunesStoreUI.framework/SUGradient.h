//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>
#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@class NSArray, NSLock, NSMutableArray;

@interface SUGradient : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableArray *_colorStops;
    NSLock *_lock;
    struct SUGradientPoint _p0;
    struct SUGradientPoint _p1;
    _Bool _sorted;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)gradientWithColor:(id)arg1;
- (id)description;
@property(readonly) struct SUGradientPoint p1;
@property(readonly) struct SUGradientPoint p0;
@property(readonly) long long numberOfColorStops;
- (id)newPatternColorWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2;
@property(readonly) long long gradientType;
- (struct CGShading *)copyShading;
- (struct CGGradient *)copyCGGradient;
@property(readonly) NSArray *colorStopOffsets;
@property(readonly) NSArray *colorStopColors;
- (void)addColorStopWithOffset:(double)arg1 color:(struct CGColor *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithPoint0:(struct SUGradientPoint)arg1 point1:(struct SUGradientPoint)arg2 type:(long long)arg3;

@end

