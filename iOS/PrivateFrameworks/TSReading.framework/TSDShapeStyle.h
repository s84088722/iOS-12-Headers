//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSSStyle.h>

#import <TSReading/TSDMixing-Protocol.h>

@interface TSDShapeStyle : TSSStyle <TSDMixing>
{
}

+ (id)p_magicMoveProperties;
+ (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)properties;
+ (void)initialize;
- (_Bool)wantsHighContrastBackgroundColor;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize)arg1;

@end

