//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition
{
    NSDictionary *cuiInfo;
    unsigned long long _nimages;
    struct CGImage *_image[9];
    struct CGRect _layoutRects[9];
    struct CGSize _intrinsicSize;
    struct CGRect _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    CDStruct_3c058996 _contentInsets;
    CUIPSDGradient *_gradient;
}

- (id)scaleLocalizedString;
- (id)lookLocalizedString;
- (id)drawingLayerLocalizedString;
- (id)dimension2LocalizedString;
- (id)dimension1LocalizedString;
- (id)presentationStateLocalizedString;
- (id)sizeLocalizedString;
- (id)previousValueLocalizedString;
- (id)valueLocalizedString;
- (id)stringForValue:(unsigned short)arg1;
- (id)directionLocalizedString;
- (id)previousStateLocalizedString;
- (id)stateLocalizedString;
- (id)stringForState:(unsigned short)arg1;
- (id)typeLocalizedString;
- (id)description;
- (unsigned short)appearance;
- (unsigned short)layer;
- (unsigned short)identifier;
- (unsigned short)keyScale;
- (unsigned short)look;
- (unsigned short)drawingLayer;
- (unsigned short)dimension2;
- (unsigned short)dimension1;
- (unsigned short)size;
- (unsigned short)previousValue;
- (unsigned short)value;
- (unsigned short)direction;
- (unsigned short)presentationState;
- (unsigned short)previousState;
- (unsigned short)state;
- (struct CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1;
- (long long)rowSlices;
- (long long)columnSlices;
- (id)defaultTemplateName;
- (id)referenceImage;
- (id)coreUIOptions;
- (CDStruct_3c058996)contentInsets;
- (struct CGRect)edgeInsets:(_Bool)arg1;
- (struct CGRect)alignmentRectangle;
- (id)slices;
- (double)scale;
- (void)dealloc;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
@property(readonly, nonatomic) CUIPSDGradient *gradient;
@property(readonly, nonatomic) struct CGRect *sliceRects;
@property(readonly, nonatomic) unsigned long long numberOfSlices;

@end

