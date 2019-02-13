//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface MusicImageAccessoryButton : UIButton
{
    double _tallestFontDescender;
    _Bool _shouldBaselineAlignTrailingAccessoryImage;
    struct UIOffset _trailingAccessoryOffset;
}

@property(nonatomic) struct UIOffset trailingAccessoryOffset; // @synthesize trailingAccessoryOffset=_trailingAccessoryOffset;
@property(nonatomic) _Bool shouldBaselineAlignTrailingAccessoryImage; // @synthesize shouldBaselineAlignTrailingAccessoryImage=_shouldBaselineAlignTrailingAccessoryImage;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)music_configureControlWithTextDescriptor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

