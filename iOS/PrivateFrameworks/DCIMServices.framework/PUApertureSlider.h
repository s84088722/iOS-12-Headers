//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DCIMServices/UIScrollViewDelegate-Protocol.h>

@class CAMSelectionFeedbackGenerator, NSNumberFormatter, NSString, PUApertureGradientView, PUApertureSliderDotView, PUApertureSliderTickMarksView, UIColor, UIImageView, UILabel, UIScrollView;
@protocol PUApertureSliderDelegate;

@interface PUApertureSlider : UIView <UIScrollViewDelegate>
{
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_wholeNumberFormatter;
    _Bool _enabled;
    _Bool _useLegibilityBackgrounds;
    _Bool __overscrolling;
    _Bool __active;
    unsigned int __endStopSoundID;
    unsigned int __fullStopSoundID;
    unsigned int __thirdStopSoundID;
    unsigned int __overscrollStopSoundID;
    id <PUApertureSliderDelegate> _delegate;
    long long _textOrientation;
    UIScrollView *__scrollView;
    UIView *__indicatorView;
    UILabel *__titleLabel;
    UILabel *__valueLabel;
    PUApertureGradientView *__opaqueGradientView;
    PUApertureGradientView *__transparentGradientView;
    UIImageView *__valueBackground;
    UIImageView *__titleBackground;
    UIView *__indicatorBackground;
    PUApertureSliderTickMarksView *__tickMarksView;
    PUApertureSliderDotView *__dotView;
    CAMSelectionFeedbackGenerator *__feedbackGenerator;
    unsigned long long __currentApertureIndex;
    unsigned long long __minimumApertureIndex;
    unsigned long long __maximumApertureIndex;
    unsigned long long __markedApertureIndex;
}

+ (_Bool)isValidApertureIndex:(unsigned long long)arg1;
+ (_Bool)isValidApertureIndexFullStop:(unsigned long long)arg1;
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1;
+ (id)validApertureValues;
@property(nonatomic, setter=_setMarkedApertureIndex:) unsigned long long _markedApertureIndex; // @synthesize _markedApertureIndex=__markedApertureIndex;
@property(nonatomic, setter=_setMaximumApertureIndex:) unsigned long long _maximumApertureIndex; // @synthesize _maximumApertureIndex=__maximumApertureIndex;
@property(nonatomic, setter=_setMinimumApertureIndex:) unsigned long long _minimumApertureIndex; // @synthesize _minimumApertureIndex=__minimumApertureIndex;
@property(nonatomic, setter=_setCurrentApertureIndex:) unsigned long long _currentApertureIndex; // @synthesize _currentApertureIndex=__currentApertureIndex;
@property(nonatomic, getter=_isActive, setter=_setActive:) _Bool _active; // @synthesize _active=__active;
@property(nonatomic, getter=_isOverscrolling, setter=_setOverscrolling:) _Bool _overscrolling; // @synthesize _overscrolling=__overscrolling;
@property(readonly, nonatomic) unsigned int _overscrollStopSoundID; // @synthesize _overscrollStopSoundID=__overscrollStopSoundID;
@property(readonly, nonatomic) unsigned int _thirdStopSoundID; // @synthesize _thirdStopSoundID=__thirdStopSoundID;
@property(readonly, nonatomic) unsigned int _fullStopSoundID; // @synthesize _fullStopSoundID=__fullStopSoundID;
@property(readonly, nonatomic) unsigned int _endStopSoundID; // @synthesize _endStopSoundID=__endStopSoundID;
@property(readonly, nonatomic) CAMSelectionFeedbackGenerator *_feedbackGenerator; // @synthesize _feedbackGenerator=__feedbackGenerator;
@property(readonly, nonatomic) PUApertureSliderDotView *_dotView; // @synthesize _dotView=__dotView;
@property(readonly, nonatomic) PUApertureSliderTickMarksView *_tickMarksView; // @synthesize _tickMarksView=__tickMarksView;
@property(retain, nonatomic) UIView *_indicatorBackground; // @synthesize _indicatorBackground=__indicatorBackground;
@property(retain, nonatomic) UIImageView *_titleBackground; // @synthesize _titleBackground=__titleBackground;
@property(retain, nonatomic) UIImageView *_valueBackground; // @synthesize _valueBackground=__valueBackground;
@property(retain, nonatomic) PUApertureGradientView *_transparentGradientView; // @synthesize _transparentGradientView=__transparentGradientView;
@property(retain, nonatomic) PUApertureGradientView *_opaqueGradientView; // @synthesize _opaqueGradientView=__opaqueGradientView;
@property(readonly, nonatomic) UILabel *_valueLabel; // @synthesize _valueLabel=__valueLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(readonly, nonatomic) UIView *_indicatorView; // @synthesize _indicatorView=__indicatorView;
@property(readonly, nonatomic) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic) _Bool useLegibilityBackgrounds; // @synthesize useLegibilityBackgrounds=_useLegibilityBackgrounds;
@property(nonatomic) long long textOrientation; // @synthesize textOrientation=_textOrientation;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PUApertureSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTextOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGPoint)_contentOffsetForApertureIndex:(unsigned long long)arg1;
- (unsigned long long)_nearestValidApertureIndexForContentOffset:(struct CGPoint)arg1;
- (unsigned long long)_biasedValidApertureIndexForContentOffset:(struct CGPoint)arg1;
- (double)_interpolatedValidApertureIndexForContentOffset:(struct CGPoint)arg1;
- (double)_scrollableDistanceInScrollView:(id)arg1;
- (unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1;
- (void)_setApertureWithIndex:(unsigned long long)arg1 shouldDelegate:(_Bool)arg2 shouldScroll:(_Bool)arg3 shouldEmitFeedback:(_Bool)arg4;
- (void)setMarkedApertureValueToNone;
- (void)setMarkedApertureValueClosestTo:(double)arg1;
@property(readonly, nonatomic) double markedApertureValue;
@property(readonly, nonatomic) double apertureValue;
@property(readonly, nonatomic) double maximumApertureValue;
@property(readonly, nonatomic) double minimumApertureValue;
- (void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2;
- (void)setApertureValueClosestTo:(double)arg1;
@property(retain, nonatomic) UIColor *gradientColor;
- (id)_createLegibilityImage;
- (void)_updateLegibilityBackgrounds;
- (void)_setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removeDotView;
- (void)_updateMarkedApertureViewAnimated:(_Bool)arg1;
- (void)_updateLabel;
- (void)_updateScrollViewContentOffset;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_layoutSliderContentAtY:(double)arg1 withHorizontalPadding:(double)arg2;
- (void)_layoutSubviewsWithLabelRotation:(double)arg1;
- (void)_layoutSubviewsWithNoRotation;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

