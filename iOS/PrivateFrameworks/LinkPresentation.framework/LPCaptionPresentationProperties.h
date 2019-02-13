//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSNumber, NSString, UIColor;

@interface LPCaptionPresentationProperties : NSObject
{
    NSString *_text;
    NSAttributedString *_attributedText;
    UIColor *_color;
    double _textScale;
    NSNumber *_maximumNumberOfLines;
}

@property(retain, nonatomic) NSNumber *maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) double textScale; // @synthesize textScale=_textScale;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)init;

@end

