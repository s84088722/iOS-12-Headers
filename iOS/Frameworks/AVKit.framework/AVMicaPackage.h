//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/CAMLParserDelegate-Protocol.h>
#import <AVKit/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSString;

@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate>
{
    NSString *_state;
    NSString *_packageName;
    CAStateController *_stateController;
    long long _layoutDirection;
    CALayer *_rootLayer;
    struct CGSize _targetSize;
    struct CGSize _unscaledSize;
}

+ (id)classSubstitions;
+ (void)asynchronouslyPrepareMicaPackageWithName:(id)arg1 layoutDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(readonly, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=_unscaledSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_loadRootLayerIfNeeded;
- (id)sublayerWithName:(id)arg1;
- (id)availableStatesOnLayer:(id)arg1;
- (id)availableStates;
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;
- (void)transitionToStateWithName:(id)arg1;
- (void)_recursivelySetFillColor:(struct CGColor *)arg1 rootLayer:(id)arg2;
- (id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2;
- (void)_setState:(id)arg1;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)setState:(id)arg1 color:(struct CGColor *)arg2;
- (id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

