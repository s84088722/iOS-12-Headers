//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKWidgetSpriteEmitterViewProxyExports-Protocol.h>

@class NSString, SKEmitterNode, SKNode, SKTexture, SKView;

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView <OKWidgetSpriteEmitterViewProxyExports>
{
    SKView *_skView;
    NSString *_emitterResourceName;
    NSString *_particuleResourceName;
    SKEmitterNode *_emitterNode;
    SKTexture *_particuleTexture;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(retain, nonatomic) SKTexture *particuleTexture; // @synthesize particuleTexture=_particuleTexture;
@property(retain, nonatomic) SKNode *emitterNode; // @synthesize emitterNode=_emitterNode;
@property(copy, nonatomic) NSString *particuleResourceName; // @synthesize particuleResourceName=_particuleResourceName;
@property(copy, nonatomic) NSString *emitterResourceName; // @synthesize emitterResourceName=_emitterResourceName;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)updateEmitter;
- (void)unloadEmitter;
- (void)loadEmitterIfNeeded;
- (void)setAntialiasing:(_Bool)arg1;
- (void)setSettingEmitterResource:(id)arg1;
- (id)settingEmitterResource;
- (void)setSettingParticuleResource:(id)arg1;
- (id)settingParticuleResource;
- (void)setSettingBackgroundColor:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

@end
