//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMetalLayer, PKInternalDrawingView;

@interface PKMetalView : UIView
{
    _Bool _isWideGamut;
    _Bool _isFixedPixelSize;
    _Bool _doubleBuffered;
    PKInternalDrawingView *_drawingView;
    struct CGSize _fixedPixelSize;
}

@property(nonatomic) _Bool doubleBuffered; // @synthesize doubleBuffered=_doubleBuffered;
@property(readonly, nonatomic) struct CGSize fixedPixelSize; // @synthesize fixedPixelSize=_fixedPixelSize;
@property(readonly, nonatomic) _Bool isFixedPixelSize; // @synthesize isFixedPixelSize=_isFixedPixelSize;
@property(readonly, nonatomic) _Bool isWideGamut; // @synthesize isWideGamut=_isWideGamut;
@property(nonatomic) __weak PKInternalDrawingView *drawingView; // @synthesize drawingView=_drawingView;
- (void).cxx_destruct;
- (void)flushDrawables;
- (void)resizeDrawableIfNecessary;
- (void)setFixedPixelSize:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool isDrawableAvailable; // @dynamic isDrawableAvailable;
@property(readonly, nonatomic) CAMetalLayer *metalLayer;
- (id)initWithFrame:(struct CGRect)arg1 andPixelSize:(struct CGSize)arg2 isWideGamut:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isWideGamut:(_Bool)arg2;
- (void)initLayer;

@end

