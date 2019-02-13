//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface RCTextLayer : CALayer
{
    struct CGSize _cachedSize;
    unsigned long long _cachedSizeHash;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _preferredAlignment;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long preferredAlignment; // @synthesize preferredAlignment=_preferredAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)textRectWithAlignment:(long long)arg1 inLayoutBounds:(struct CGRect)arg2;
- (struct CGSize)_displaySize;
- (void)sizeToFit;
- (id)_attributes;
- (id)init;

@end

