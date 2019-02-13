//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class NSString, UIKBThemedView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView>
{
    _Bool _inExtendedView;
    _Bool _beginsFirstPage;
    _Bool _endsLastPage;
    _Bool _isAtLeftEdge;
    _Bool _isAutocorrectionCandidate;
    UIKBThemedView *_themedView;
    UILabel *_label;
    UILabel *_annotationLabel;
    UIView *_centeredBackgroundView;
    UIView *_proactiveCandidateView;
    NSString *_candidateText;
    NSString *_annotationText;
}

+ (id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4;
+ (double)labelOffset;
+ (_Bool)highlightAffectsBackground;
+ (double)widthForCandidate:(id)arg1;
+ (_Bool)drawsSideBorders;
+ (struct UIEdgeInsets)cacheInsets;
+ (id)textColorWithHighlight:(_Bool)arg1 whiteText:(_Bool)arg2;
+ (id)annotationFont;
+ (id)font;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool isAutocorrectionCandidate; // @synthesize isAutocorrectionCandidate=_isAutocorrectionCandidate;
@property(nonatomic) _Bool isAtLeftEdge; // @synthesize isAtLeftEdge=_isAtLeftEdge;
@property(nonatomic) _Bool endsLastPage; // @synthesize endsLastPage=_endsLastPage;
@property(nonatomic) _Bool beginsFirstPage; // @synthesize beginsFirstPage=_beginsFirstPage;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *candidateText; // @synthesize candidateText=_candidateText;
@property(retain, nonatomic) UIView *proactiveCandidateView; // @synthesize proactiveCandidateView=_proactiveCandidateView;
@property(retain, nonatomic) UIView *centeredBackgroundView; // @synthesize centeredBackgroundView=_centeredBackgroundView;
@property(retain, nonatomic) UILabel *annotationLabel; // @synthesize annotationLabel=_annotationLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(nonatomic) _Bool inExtendedView; // @synthesize inExtendedView=_inExtendedView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)dimKeys:(id)arg1;
- (void)updateIsAtLeftEdgeState;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateLabels;
- (void)_setRenderConfig:(id)arg1;
- (void)didMoveToWindow;
- (void)setCandidate:(id)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (int)style;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

