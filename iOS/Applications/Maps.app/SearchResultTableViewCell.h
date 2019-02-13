//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_SearchResultTableViewCell.h"

@class NSURL, UIImageView;

__attribute__((visibility("hidden")))
@interface SearchResultTableViewCell : _SearchResultTableViewCell
{
    UIImageView *_imageView;
    int _imageState;
    NSURL *_currentLoadingURL;
}

+ (struct CGSize)photoSize;
- (void).cxx_destruct;
- (void)prepareForActionMenuPresentationUsingTheme:(id)arg1;
- (void)cancelLoadingPhoto;
- (void)getDefaultImage:(CDUnknownBlockType)arg1;
- (void)setDefaultImage;
- (void)loadPhoto;
- (void)didUpdateMapItem;
- (void)prepareForReuse;
- (void)updateTheme;
- (double)horizontalSpacing;
- (double)trailingMargin;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

