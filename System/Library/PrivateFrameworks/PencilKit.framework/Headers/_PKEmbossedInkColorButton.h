//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/_PKInkColorButton.h>

@class UIImageView;

@interface _PKEmbossedInkColorButton : _PKInkColorButton
{
    UIImageView *_colorImageView;
    UIImageView *_embossImageView;
}

+ (id)colorFillImageIsCompact:(_Bool)arg1;
@property(retain, nonatomic) UIImageView *embossImageView; // @synthesize embossImageView=_embossImageView;
@property(retain, nonatomic) UIImageView *colorImageView; // @synthesize colorImageView=_colorImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end
