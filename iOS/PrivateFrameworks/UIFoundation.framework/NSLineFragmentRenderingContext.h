//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSTextApplicationFrameworkContextClient-Protocol.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSGraphicsContext, NSString;

@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient>
{
    void *_runs;
    long long _numRuns;
    unsigned short *_glyphs;
    struct CGSize *_advancements;
    double _leftSideDelta;
    double _lineWidth;
    double _leftControlWidth;
    double _rightControlWidth;
    double _elasticWidth;
    struct CGRect _imageBounds;
    struct {
        unsigned int _isRTL:1;
        unsigned int _vAdvance:1;
        unsigned int _flipped:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _applicationFrameworkContext:3;
        unsigned int _reserved:25;
    } _flags;
    long long _resolvedDirection;
    long long _resolvedAlignment;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
    NSGraphicsContext *_graphicsContext;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSGraphicsContext *graphicsContext; // @synthesize graphicsContext=_graphicsContext;
@property(retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_styleEffects;
@property(retain, nonatomic) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_catalog;
@property long long resolvedTextAlignment; // @synthesize resolvedTextAlignment=_resolvedAlignment;
@property long long resolvedBaseWritingDirection; // @synthesize resolvedBaseWritingDirection=_resolvedDirection;
- (struct CGRect)imageBounds;
@property long long applicationFrameworkContext;
- (_Bool)isRTL;
- (double)elasticWidth;
- (double)lineFragmentWidth;
- (void)getMaximumAscender:(double *)arg1 minimumDescender:(double *)arg2;
- (struct CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(_Bool)arg2 baselineDelta:(double *)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2;
@property(nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) _Bool usesSimpleTextEffects;
- (void)finalize;
- (void)dealloc;
- (id)initWithRuns:(struct __CFArray *)arg1 glyphOrigin:(double)arg2 lineFragmentWidth:(double)arg3 elasticWidth:(double)arg4 usesScreenFonts:(_Bool)arg5 isRTL:(_Bool)arg6;
- (oneway void)release;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

