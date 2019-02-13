//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKEffectNode.h>

@class CLKDevice;

@interface NTKChronoSubDial : SKEffectNode
{
    CLKDevice *_device;
    double _labelsRadius;
    double _labelsFontSize;
    long long _labelsFont;
    double _radius;
    struct CGSize _smallOuter;
    struct CGSize _smallInner;
}

+ (id)lower:(double)arg1 forDevice:(id)arg2;
+ (id)upper:(double)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) struct CGSize smallInner; // @synthesize smallInner=_smallInner;
@property(readonly, nonatomic) struct CGSize smallOuter; // @synthesize smallOuter=_smallOuter;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) long long labelsFont; // @synthesize labelsFont=_labelsFont;
@property(readonly, nonatomic) double labelsFontSize; // @synthesize labelsFontSize=_labelsFontSize;
@property(readonly, nonatomic) double labelsRadius; // @synthesize labelsRadius=_labelsRadius;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)colorize:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (void)updateTimeScale:(unsigned long long)arg1;
- (id)addNodes:(id)arg1;
- (id)addNodes:(id)arg1 to:(id)arg2;
- (id)initWithRadius:(double)arg1 forDevice:(id)arg2;

@end

