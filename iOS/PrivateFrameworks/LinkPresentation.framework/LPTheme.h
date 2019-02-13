//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionBarStyle, LPImageViewStyle, LPPointUnit, LPTapToLoadViewStyle, LPTextViewStyle, LPVideoViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPTheme : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_highlightColor;
    LPCaptionBarStyle *_captionBar;
    LPTextViewStyle *_quotedText;
    LPImageViewStyle *_mediaImage;
    LPVideoViewStyle *_mediaVideo;
    UIColor *_mediaBackgroundColor;
    LPCaptionBarStyle *_mediaTopCaptionBar;
    LPCaptionBarStyle *_mediaBottomCaptionBar;
    LPTapToLoadViewStyle *_tapToLoad;
    LPPointUnit *_maximumWidth;
    LPPointUnit *_maximumIntrinsicHeight;
    double _widthFractionForTallMedia;
}

+ (void)addClient:(id)arg1;
+ (id)themeWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3;
+ (id)regularTheme;
@property(nonatomic) double widthFractionForTallMedia; // @synthesize widthFractionForTallMedia=_widthFractionForTallMedia;
@property(retain, nonatomic) LPPointUnit *maximumIntrinsicHeight; // @synthesize maximumIntrinsicHeight=_maximumIntrinsicHeight;
@property(retain, nonatomic) LPPointUnit *maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad; // @synthesize tapToLoad=_tapToLoad;
@property(readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) UIColor *mediaBackgroundColor; // @synthesize mediaBackgroundColor=_mediaBackgroundColor;
@property(readonly, nonatomic) LPVideoViewStyle *mediaVideo; // @synthesize mediaVideo=_mediaVideo;
@property(readonly, nonatomic) LPImageViewStyle *mediaImage; // @synthesize mediaImage=_mediaImage;
@property(readonly, nonatomic) LPTextViewStyle *quotedText; // @synthesize quotedText=_quotedText;
@property(readonly, nonatomic) LPCaptionBarStyle *captionBar; // @synthesize captionBar=_captionBar;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)CSSTextForProperty:(id)arg1 withValue:(id)arg2 allowsAlternateProperties:(_Bool)arg3;
- (id)CSSTextForThemeProperty:(id)arg1 allowsAlternateProperties:(_Bool)arg2;
- (id)valueForThemeProperty:(id)arg1;
- (id)CSSCustomPropertiesForThemePropertiesInSet:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3;

@end

