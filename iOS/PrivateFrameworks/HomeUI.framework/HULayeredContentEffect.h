//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIVibrancyEffect;

@interface HULayeredContentEffect : NSObject
{
    UIVibrancyEffect *_vibrancyEffect;
    UIColor *_tintColor;
}

+ (id)contentWithTintColor:(id)arg1;
+ (id)contentWithVibrancyEffect:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIVibrancyEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
- (void).cxx_destruct;

@end
