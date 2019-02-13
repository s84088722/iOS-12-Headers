//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView
{
    unsigned int _seed;
    OFEmitterView *_emitterView;
    struct CGPoint _originalEmitterPosition;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)setSettingVelocity:(double)arg1;
- (double)settingVelocity;
- (void)setSettingSpin:(double)arg1;
- (double)settingSpin;
- (void)setSettingSeed:(double)arg1;
- (double)settingSeed;
- (void)setSettingScale:(double)arg1;
- (double)settingScale;
- (void)setSettingRenderMode:(id)arg1;
- (id)settingRenderMode;
- (void)setSettingLifetime:(double)arg1;
- (double)settingLifetime;
- (void)setSettingEmitterZPosition:(double)arg1;
- (double)settingEmitterZPosition;
- (void)setSettingEmitterSize:(struct CGSize)arg1;
- (struct CGSize)settingEmitterSize;
- (void)setSettingEmitterShape:(id)arg1;
- (id)settingEmitterShape;
- (void)setSettingEmitterPosition:(struct CGPoint)arg1;
- (struct CGPoint)settingEmitterPosition;
- (void)setSettingEmitterMode:(id)arg1;
- (id)settingEmitterMode;
- (void)setSettingEmitterDepth:(double)arg1;
- (double)settingEmitterDepth;
- (void)setSettingEmitterCells:(id)arg1;
- (id)settingEmitterCells;
- (void)setSettingBirthRate:(double)arg1;
- (double)settingBirthRate;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (_Bool)isEmitting;
- (void)resumeEmitter;
- (void)pauseEmitter;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

@end

