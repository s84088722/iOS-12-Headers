//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

__attribute__((visibility("hidden")))
@interface SFPersonImageView : UIImageView
{
    _Bool _overlay;
    _Bool _darkStyle;
    _Bool _isDevice;
}

@property(nonatomic) _Bool isDevice; // @synthesize isDevice=_isDevice;
@property(nonatomic) _Bool darkStyle; // @synthesize darkStyle=_darkStyle;
@property(nonatomic) _Bool overlay; // @synthesize overlay=_overlay;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithPersonImageView:(id)arg1;

@end

