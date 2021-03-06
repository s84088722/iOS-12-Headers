//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSSArticleInternal, UIImageView, UILabel;

@interface NSSArticleView : UIView
{
    NSSArticleInternal *_article;
    UILabel *_titleLabel;
    UILabel *_excerptLabel;
    UIImageView *_thumbnailImageView;
    UIView *_thumbnailContainerView;
    UILabel *_publisherLabel;
    UILabel *_dateLabel;
    UIImageView *_publisherLogoImageView;
    struct CGSize _preferredSize;
}

@property(nonatomic) __weak UIImageView *publisherLogoImageView; // @synthesize publisherLogoImageView=_publisherLogoImageView;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(nonatomic) __weak UIView *thumbnailContainerView; // @synthesize thumbnailContainerView=_thumbnailContainerView;
@property(nonatomic) __weak UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak UILabel *excerptLabel; // @synthesize excerptLabel=_excerptLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(retain, nonatomic) NSSArticleInternal *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)_updateFonts;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)layoutSubviews;
- (double)calculateHeightForWidth:(double)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

