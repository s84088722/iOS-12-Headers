//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ShorteningLabel : UILabel
{
    double _lastUpdateWidth;
    NSArray *_attributedTextAlternatives;
}

@property(retain, nonatomic) NSArray *attributedTextAlternatives; // @synthesize attributedTextAlternatives=_attributedTextAlternatives;
- (void).cxx_destruct;
- (void)_updateAttributedText;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;

@end
