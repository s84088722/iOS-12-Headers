//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView
{
    unsigned char _tipDirection;
    UIImage *_templateImage;
}

@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (void)tintColorDidChange;
- (void)updateTransform;
- (void)updateImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

