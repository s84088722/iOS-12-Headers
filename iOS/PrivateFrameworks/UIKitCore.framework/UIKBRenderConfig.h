//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIKBRenderConfig : NSObject <NSCopying>
{
    _Bool _useEmojiStyles;
    _Bool _lightKeyboard;
    long long _forceQuality;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightKeycapOpacity;
}

+ (long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2;
+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2;
+ (id)lowQualityDarkConfig;
+ (id)darkConfig;
+ (id)defaultEmojiConfig;
+ (id)defaultConfig;
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property(nonatomic) double lightKeycapOpacity; // @synthesize lightKeycapOpacity=_lightKeycapOpacity;
@property(nonatomic) double keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property(nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) long long forceQuality; // @synthesize forceQuality=_forceQuality;
@property(readonly, nonatomic) long long blurEffectStyle;
@property(readonly, nonatomic) long long backdropStyle;
@property(readonly, nonatomic) _Bool whiteText;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

