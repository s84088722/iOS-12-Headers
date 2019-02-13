//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVTSplashScreenLayoutDelegate;

@interface AVTSplashScreenLayout : NSObject
{
    _Bool _wantsSecondaryVideo;
    _Bool _needsLayout;
    id <AVTSplashScreenLayoutDelegate> _delegate;
    unsigned long long _labelEdgePaddingStyle;
    NSString *_currentContentSizeCategory;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
    struct CGRect _titleFrame;
    struct CGRect _subTitleFrame;
    struct CGRect _primaryVideoFrame;
    struct CGRect _secondaryVideoFrame;
    struct CGRect _buttonFrame;
}

+ (struct CGRect)secondaryVideoFrameForContentFrame:(struct CGRect)arg1;
+ (struct CGRect)primaryVideoFrameForContentFrame:(struct CGRect)arg1 wantsSecondaryVideo:(_Bool)arg2;
+ (struct CGRect)subTitleFrameForString:(id)arg1 titleFrame:(struct CGRect)arg2 buttonFrame:(struct CGRect)arg3 wantsSecondaryVideo:(_Bool)arg4 containerSize:(struct CGSize)arg5 labelEdgePadding:(double)arg6;
+ (struct CGRect)titleFrameForString:(id)arg1 yOrigin:(double)arg2 containerSize:(struct CGSize)arg3 labelEdgePadding:(double)arg4;
+ (struct CGRect)buttonFrameForString:(id)arg1 containerSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
+ (double)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(unsigned long long)arg1 contentSizeCategory:(id)arg2 numberOfLines:(long long)arg3;
+ (id)buttonFont;
+ (id)subTitleFont;
+ (id)titleFont;
+ (id)blueButton;
+ (unsigned long long)appropriateLabelEdgePaddingStyleForViewSize:(struct CGSize)arg1;
@property(nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
@property(copy, nonatomic) NSString *currentContentSizeCategory; // @synthesize currentContentSizeCategory=_currentContentSizeCategory;
@property(nonatomic) _Bool wantsSecondaryVideo; // @synthesize wantsSecondaryVideo=_wantsSecondaryVideo;
@property(nonatomic) struct CGRect buttonFrame; // @synthesize buttonFrame=_buttonFrame;
@property(nonatomic) struct CGRect secondaryVideoFrame; // @synthesize secondaryVideoFrame=_secondaryVideoFrame;
@property(nonatomic) struct CGRect primaryVideoFrame; // @synthesize primaryVideoFrame=_primaryVideoFrame;
@property(nonatomic) struct CGRect subTitleFrame; // @synthesize subTitleFrame=_subTitleFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) unsigned long long labelEdgePaddingStyle; // @synthesize labelEdgePaddingStyle=_labelEdgePaddingStyle;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) __weak id <AVTSplashScreenLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)didChangeContentSizeCategory:(id)arg1;
- (void)calculateLayoutWithTitleString:(id)arg1 subTitleString:(id)arg2 buttonTitle:(id)arg3;
- (void)dealloc;
- (id)initWithContainerSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 wantsSecondaryVideo:(_Bool)arg3 labelEdgePaddingStyle:(unsigned long long)arg4 currentContentSizeCategory:(id)arg5;
- (id)initWithContainerSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 wantsSecondaryVideo:(_Bool)arg3 labelEdgePaddingStyle:(unsigned long long)arg4;

@end

