//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUArtworkView, NSArray, UIImage, UIImageView;

@interface VideosExtrasConstrainedArtworkContainerView : UIView
{
    _Bool _shouldAutoresizeMaskLayerToFillBounds;
    _Bool _shouldBottomAlignArtwork;
    MPUArtworkView *_artworkView;
    UIImage *_overlayImage;
    double _overlayScale;
    UIImageView *_overlayView;
    NSArray *_overlaySizeConstraints;
}

@property(retain, nonatomic) NSArray *overlaySizeConstraints; // @synthesize overlaySizeConstraints=_overlaySizeConstraints;
@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double overlayScale; // @synthesize overlayScale=_overlayScale;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) _Bool shouldBottomAlignArtwork; // @synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork;
@property(nonatomic) _Bool shouldAutoresizeMaskLayerToFillBounds; // @synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds;
@property(retain, nonatomic) MPUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

