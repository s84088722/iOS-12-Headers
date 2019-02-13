//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/SCNSceneRendererDelegate-Protocol.h>

@class NSMutableArray, NSString, PKPeerPayment3DScene, PKPeerPayment3DStore, SCNView;

@interface PKPeerPayment3DTextView : UIView <SCNSceneRendererDelegate>
{
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    double _sceneWidthUnits;
    double _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    double _dynamicRollPitchMix;
    double _startAnimationTime;
    double _animationDuration;
    double _lastRenderTime;
    _Bool _liveMotionEnabled;
    _Bool _snapshotRequested;
    _Bool _hasFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    _Bool _layoutRequested;
    NSMutableArray *_charactersToDraw;
    unsigned long long _renderStyle;
    NSString *_text;
}

+ (id)supportedCharacterSet;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long renderStyle; // @synthesize renderStyle=_renderStyle;
- (void).cxx_destruct;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)performPostRender:(CDUnknownBlockType)arg1;
- (void)didMoveToWindow;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)setMotionEffectEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)generatedSnapshot;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)layoutText;
- (void)loadCharactersAndLayout;
- (_Bool)setText:(id)arg1;
- (void)layoutSubviews;
- (void)updateSceneUnits;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 renderStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
