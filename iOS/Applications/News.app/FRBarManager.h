//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRBarCompressorDelegate-Protocol.h"
#import "FRBarStyleProviding-Protocol.h"
#import "TSStatusBarThemeColorProviderType-Protocol.h"

@class FRBarCompressor, FRBarStyler, NSString, UIColor, UIScrollView, UITraitCollection, UIView, _UINavigationControllerPalette;
@protocol FRBarStyle, FRInteractiveBarCompressionAnimating, FRPaletteProvider;

@interface FRBarManager : NSObject <FRBarCompressorDelegate, FRBarStyleProviding, TSStatusBarThemeColorProviderType>
{
    _Bool _navigationBarCompressionEnabled;
    _Bool _toolbarCompressionEnabled;
    _Bool _compressionLocked;
    _Bool _wasLastScrollUpscroll;
    UIScrollView *_scrollView;
    id <FRInteractiveBarCompressionAnimating> _navigationBarAnimation;
    id <FRInteractiveBarCompressionAnimating> _toolbarAnimation;
    id <FRBarStyle> _preferredBarStyle;
    FRBarStyler *_barStyler;
    FRBarCompressor *_barCompressor;
    id <FRPaletteProvider> _paletteProvider;
    UIView *_attachedView;
    _UINavigationControllerPalette *_palette;
    id <FRBarStyle> _preferredCompressedBarStyle;
    UITraitCollection *_currentTraitCollection;
}

@property(nonatomic) _Bool wasLastScrollUpscroll; // @synthesize wasLastScrollUpscroll=_wasLastScrollUpscroll;
@property(nonatomic, getter=iscompressionLocked) _Bool compressionLocked; // @synthesize compressionLocked=_compressionLocked;
@property(retain, nonatomic) UITraitCollection *currentTraitCollection; // @synthesize currentTraitCollection=_currentTraitCollection;
@property(retain, nonatomic) id <FRBarStyle> preferredCompressedBarStyle; // @synthesize preferredCompressedBarStyle=_preferredCompressedBarStyle;
@property(retain, nonatomic) _UINavigationControllerPalette *palette; // @synthesize palette=_palette;
@property(retain, nonatomic) UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(nonatomic, getter=isToolbarCompressionEnabled) _Bool toolbarCompressionEnabled; // @synthesize toolbarCompressionEnabled=_toolbarCompressionEnabled;
@property(nonatomic, getter=isNavigationBarCompressionEnabled) _Bool navigationBarCompressionEnabled; // @synthesize navigationBarCompressionEnabled=_navigationBarCompressionEnabled;
@property(readonly, nonatomic) __weak id <FRPaletteProvider> paletteProvider; // @synthesize paletteProvider=_paletteProvider;
@property(readonly, nonatomic) FRBarCompressor *barCompressor; // @synthesize barCompressor=_barCompressor;
@property(readonly, nonatomic) FRBarStyler *barStyler; // @synthesize barStyler=_barStyler;
@property(retain, nonatomic) id <FRBarStyle> preferredBarStyle; // @synthesize preferredBarStyle=_preferredBarStyle;
@property(retain, nonatomic) id <FRInteractiveBarCompressionAnimating> toolbarAnimation; // @synthesize toolbarAnimation=_toolbarAnimation;
@property(retain, nonatomic) id <FRInteractiveBarCompressionAnimating> navigationBarAnimation; // @synthesize navigationBarAnimation=_navigationBarAnimation;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)themeColor;
- (id)barButtonStyler;
@property(readonly, nonatomic) _Bool barsExpanded;
- (void)scrollToTop;
- (void)handleDoubleBarTap;
- (void)handleSingleBarTap;
- (void)voiceOverStatusChanged;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)userDefaultsChanged:(id)arg1;
- (void)setBarsCompressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleToolbarCompression;
- (void)barCompressor:(id)arg1 didChangeToState:(long long)arg2;
- (void)barCompressorScrollViewDidScrollOffTop:(id)arg1;
- (void)barCompressorScrollViewDidHitTop:(id)arg1;
- (void)barCompressorScrollViewDidDragDown:(id)arg1;
- (void)barCompressorScrollViewDidDragUp:(id)arg1;
@property(readonly, nonatomic) _Bool navigationBarHasBlurEffect;
@property(readonly, nonatomic) _Bool isHairlineHidden;
@property(readonly, nonatomic) UIColor *navigationBarTintColor;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) UIColor *navigationBarBackgroundColor;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled;
- (void)applyStyling:(id)arg1;
- (void)showAttachedView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)attachViewToNavigationBar:(id)arg1;
- (void)reloadWithTraitCollection:(id)arg1;
- (id)initWithBarStyler:(id)arg1 barCompressor:(id)arg2 paletteProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
