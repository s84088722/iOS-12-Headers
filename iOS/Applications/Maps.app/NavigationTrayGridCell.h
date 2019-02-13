//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class GEOSearchCategory, UIImageView, UILabel, UIView;
@protocol NavigationTrayGridCellDelegate;

__attribute__((visibility("hidden")))
@interface NavigationTrayGridCell : MapsThemeView
{
    long long _identifier;
    _Bool _shouldUseCustomImageBackgroundColor;
    id <NavigationTrayGridCellDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    GEOSearchCategory *_category;
    UIView *_highlightedOverlayView;
}

+ (double)imageSize;
@property(retain, nonatomic) UIView *highlightedOverlayView; // @synthesize highlightedOverlayView=_highlightedOverlayView;
@property(nonatomic) _Bool shouldUseCustomImageBackgroundColor; // @synthesize shouldUseCustomImageBackgroundColor=_shouldUseCustomImageBackgroundColor;
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <NavigationTrayGridCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)currentfont;
- (void)updateTheme;
- (double)contentHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

