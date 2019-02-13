//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIKBRenderConfig, UIKBRenderingContext;

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderingContext *_renderingContext;
    NSMutableArray *_segmentTraits;
    _Bool _suppressSegmentTraits;
    double _rivenSizeFactor;
    _Bool _lightweightFactory;
    double _scale;
    struct CGSize _stretchFactor;
    _Bool _boldTextEnabled;
    _Bool _increasedContrastEnabled;
    _Bool _allowsPaddles;
    _Bool _preferStringKeycapOverImage;
    _Bool _drawsOneHandedAffordance;
}

+ (_Bool)couldUseGlyphSelectorForDisplayString:(id)arg1;
+ (id)_characterSetForGlyphSelectors;
+ (id)segmentedControlColor:(_Bool)arg1;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3;
+ (id)lightweightFactoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2 skipLayoutSegments:(_Bool)arg3;
+ (Class)factoryClassForVisualStyle:(CDStruct_227bb23d)arg1;
+ (long long)_graphicsQuality;
+ (_Bool)_enabled;
@property(nonatomic) _Bool drawsOneHandedAffordance; // @synthesize drawsOneHandedAffordance=_drawsOneHandedAffordance;
@property(nonatomic) _Bool preferStringKeycapOverImage; // @synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage;
@property(nonatomic) _Bool allowsPaddles; // @synthesize allowsPaddles=_allowsPaddles;
@property(nonatomic) _Bool increasedContrastEnabled; // @synthesize increasedContrastEnabled=_increasedContrastEnabled;
@property(readonly, nonatomic) _Bool boldTextEnabled; // @synthesize boldTextEnabled=_boldTextEnabled;
@property(nonatomic) struct CGSize stretchFactor; // @synthesize stretchFactor=_stretchFactor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;
@property(nonatomic) double rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;
@property(readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;
@property(retain, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
- (long long)glyphSelectorForDisplayString:(id)arg1;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)thinTextFontName;
- (id)lightTextFontName;
- (id)lightPadKeycapsFontName;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (id)controlKeyShadowColorName;
- (id)defaultKeyShadowColorName;
- (id)controlKeyForegroundColorName;
- (id)lowQualityLayeredBackgroundColorName;
- (id)_controlKeyBackgroundColorName;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyBackgroundColorName;
- (long long)lightHighQualityEnabledBlendForm;
- (long long)enabledBlendForm;
- (void)suppressLayoutSegments;
- (void)addLayoutSegment:(id)arg1;
- (_Bool)useBlueThemingForKey:(id)arg1;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2;
- (id)displayContentsForKey:(id)arg1;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (double)skinnyKeyThreshold;
- (id)ZWNJKeyImageName;
- (id)spaceKeyGrabberHandlesImageName;
- (id)messagesWriteboardKeyImageName;
- (id)biuKeyImageName;
- (id)boldKeyImageName;
- (id)undoKeyImageName;
- (id)pasteKeyImageName;
- (id)copyKeyImageName;
- (id)cutKeyImageName;
- (id)rightArrowKeyImageName;
- (id)leftArrowKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteOnKeyImageName;
- (id)deleteKeyImageName;
- (id)handwritingMoreKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(_Bool)arg4 blurBlending:(_Bool)arg5;
- (_Bool)keyIsRightToLeftSensitive:(id)arg1;
- (id)hashStringElement;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (void)setupLayoutSegments;
- (void)lowQualityTraits:(id)arg1;
- (double)translucentGapWidth;
- (void)scaleTraits:(id)arg1;
- (struct CGPoint)RivenPointFactor:(struct CGPoint)arg1;
- (double)RivenFactor:(double)arg1;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (void)dealloc;
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (struct CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (double)emojiPopupDividerKeyOffset;
- (double)keyCornerRadius;
@property(readonly, getter=renderConfig) UIKBRenderConfig *renderConfig;
- (id)extraPasscodePaddleTraits;
- (id)passcodeShiftedControlKeyTraits;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeControlKeyTraits;
- (id)passcodeKeyEdgeColorName;
- (double)passcodeEdgeWeight;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;

@end

