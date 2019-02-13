//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSNumber, UIColor;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>
{
    long long _style;
    _Bool _legacy;
    long long _legibilityStyle;
    UIColor *_foregroundColor;
    NSNumber *_overrideHeight;
    double _foregroundAlpha;
}

@property(readonly, retain, nonatomic) NSNumber *overrideHeight; // @synthesize overrideHeight=_overrideHeight;
@property(readonly, nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(readonly, retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(readonly, nonatomic, getter=isLegacy) _Bool legacy; // @synthesize legacy=_legacy;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)isTranslucent;
- (_Bool)isDoubleHeight;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 overrideHeight:(id)arg5;
- (id)initWithStyle:(long long)arg1 legacy:(_Bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5 overrideHeight:(id)arg6;

@end

