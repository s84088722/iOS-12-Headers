//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemAdornment.h"

@class GEOFeatureStyleAttributes;

__attribute__((visibility("hidden")))
@interface PersonalizedItemStyleAttributesAdornment : PersonalizedItemAdornment
{
    GEOFeatureStyleAttributes *_styleAttributes;
}

+ (id)adornmentWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2;
+ (id)adornmentWithStyleAttributes:(id)arg1;
+ (id)defaultAdornment;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
- (void).cxx_destruct;
- (id)combineAdornment:(id)arg1;
- (id)initWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2;

@end

