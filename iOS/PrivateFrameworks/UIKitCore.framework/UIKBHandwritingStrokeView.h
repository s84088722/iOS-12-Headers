//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBHandwritingView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokeView : UIView
{
    UIKBHandwritingView *_keyView;
    struct CGContext *_bitmapContext;
    double _scaleFactor;
    struct CGRect _aggregateInvalidRect;
}

@property(readonly, nonatomic) struct CGRect aggregateInvalidRect; // @synthesize aggregateInvalidRect=_aggregateInvalidRect;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) struct CGContext *bitmapContext; // @synthesize bitmapContext=_bitmapContext;
@property(nonatomic) __weak UIKBHandwritingView *keyView; // @synthesize keyView=_keyView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayAggregateInvalidRect;
- (void)redrawStrokesInRect:(struct CGRect)arg1;
- (void)clearRect:(struct CGRect)arg1;
- (void)addTrapezoidFromFirstPoint:(struct)arg1 secondPoint:(struct)arg2;
- (void)addHandwritingPoint:(struct)arg1;
- (struct CGRect)convertRectToViewCoordinates:(struct CGRect)arg1;
- (struct CGRect)convertRectToBitmapCoordinates:(struct CGRect)arg1;
- (void)updateInkColor;
- (void)createBitmapIfNeeded;
- (struct CGRect)handwritingPointToRect:(struct)arg1;
- (_Bool)_wantsDeepDrawing;
- (void)dealloc;

@end

