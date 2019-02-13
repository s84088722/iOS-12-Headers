//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface CarManeuverViewStyle : NSObject <NSCopying>
{
    _Bool _hasLaneGuidance;
    _Bool _hasShield;
    _Bool _secondarySignVisible;
    int _variant;
    unsigned long long _compressionStage;
}

+ (id)styleWithVariant:(int)arg1;
@property(nonatomic) unsigned long long compressionStage; // @synthesize compressionStage=_compressionStage;
@property(nonatomic) _Bool secondarySignVisible; // @synthesize secondarySignVisible=_secondarySignVisible;
@property(nonatomic) _Bool hasShield; // @synthesize hasShield=_hasShield;
@property(nonatomic) _Bool hasLaneGuidance; // @synthesize hasLaneGuidance=_hasLaneGuidance;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int desiredFraming;
@property(readonly, nonatomic) struct CGSize arrowReferenceSize;
@property(readonly, nonatomic) CDStruct_092aca68 arrowMetrics;
@property(readonly, nonatomic) _Bool canHaveLaneGuidance;
@property(readonly, nonatomic) _Bool isSecondary;
@property(readonly, nonatomic) long long labelLineBreakMode;
@property(readonly, nonatomic) long long instructionsMaxNumberOfTotalLines;
@property(readonly, nonatomic) long long instructionsMaxNumberOfLinesWithPreferredFont;
@property(readonly, nonatomic) double instructionsAlternateFontLineSpacing;
@property(readonly, nonatomic) UIFont *instructionsAlternateFont;
@property(readonly, nonatomic) UIFont *instructionsPreferredFont;
@property(readonly, nonatomic) UIColor *instructionsColor;
@property(readonly, nonatomic) UIColor *distanceColor;
@property(readonly, nonatomic) UIFont *distanceFont;
@property(readonly, nonatomic) _Bool displaysShield;
- (id)initWithVariant:(int)arg1;

@end

