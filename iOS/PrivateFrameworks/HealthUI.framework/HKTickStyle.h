//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle
{
    _Bool _shouldRenderMajorTickMarks;
    double _tickLength;
    long long _tickDirection;
}

@property(nonatomic) _Bool shouldRenderMajorTickMarks; // @synthesize shouldRenderMajorTickMarks=_shouldRenderMajorTickMarks;
@property(nonatomic) long long tickDirection; // @synthesize tickDirection=_tickDirection;
@property(nonatomic) double tickLength; // @synthesize tickLength=_tickLength;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

