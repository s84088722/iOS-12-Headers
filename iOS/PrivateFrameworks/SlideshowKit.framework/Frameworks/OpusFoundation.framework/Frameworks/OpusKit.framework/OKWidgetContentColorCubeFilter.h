//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetBasicFilter.h>

#import <OpusKit/JSOKWidgetContentColorCubeFilter-Protocol.h>

@class NSData, NSNumber, UIColor;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter>
{
    NSNumber *_inputMinHueAngle;
    NSNumber *_inputMaxHueAngle;
    UIColor *_inputReplaceColor;
    NSData *_cubeData;
}

+ (id)filterWithMinHueAngle:(id)arg1 inputMaxHueAngle:(id)arg2 inputReplaceColor:(id)arg3;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(retain, nonatomic) UIColor *inputReplaceColor; // @synthesize inputReplaceColor=_inputReplaceColor;
@property(retain, nonatomic) NSNumber *inputMaxHueAngle; // @synthesize inputMaxHueAngle=_inputMaxHueAngle;
@property(retain, nonatomic) NSNumber *inputMinHueAngle; // @synthesize inputMinHueAngle=_inputMinHueAngle;
- (void)rgbToHSV:(float *)arg1 hsv:(float *)arg2;
- (void)createCubeWithMinHueAngle:(double)arg1 maxHueAngle:(double)arg2;
- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputMaxHueAngle:(id)arg1;
- (void)setSettingInputMinHueAngle:(id)arg1;
- (void)setSettingInputReplaceColor:(id)arg1;
- (void)dealloc;

@end

