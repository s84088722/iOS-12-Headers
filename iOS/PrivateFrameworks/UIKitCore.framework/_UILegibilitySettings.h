//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIColor;

@interface _UILegibilitySettings : NSObject <NSSecureCoding, NSCopying>
{
    long long _style;
    UIColor *_contentColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_shadowColor;
    double _shadowRadius;
    double _shadowAlpha;
    double _imageOutset;
    double _minFillHeight;
    NSString *_shadowCompositingFilterName;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedInstanceForStyle:(long long)arg1;
@property(copy, nonatomic) NSString *shadowCompositingFilterName; // @synthesize shadowCompositingFilterName=_shadowCompositingFilterName;
@property(nonatomic) double minFillHeight; // @synthesize minFillHeight=_minFillHeight;
@property(nonatomic) double imageOutset; // @synthesize imageOutset=_imageOutset;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) long long style; // @synthesize style=_style;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)setPropertiesForStyle:(long long)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 contentColor:(id)arg2;
- (id)initWithContentColor:(id)arg1 contrast:(double)arg2;
- (id)initWithContentColor:(id)arg1;
- (id)initWithStyle:(long long)arg1;

@end

