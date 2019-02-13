//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class NSParagraphStyle, NSString, UIColor, UIFont;

@interface NFLCollapsedHeadlineViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes
{
    NSParagraphStyle *_titleParagraphStyle;
    long long _titleNumberOfLines;
    UIFont *_titleFont;
    UIFont *_publisherTextFont;
    UIColor *_publisherTextColor;
    long long _publisherTextNumberOfLines;
    NSParagraphStyle *_publisherTextParagraphStyle;
    NSString *_titleFontName;
    double _titleFontSize;
    struct CGRect _titleFrame;
    struct CGRect _publisherLogoFrame;
    struct CGRect _publisherTextFrame;
}

+ (double)publisherTextHeightForLabelSize:(struct CGSize)arg1 font:(id)arg2;
+ (struct CGSize)publisherLogoSizeFeedSettings:(id)arg1;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1 feedSettings:(id)arg2;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(retain, nonatomic) NSParagraphStyle *publisherTextParagraphStyle; // @synthesize publisherTextParagraphStyle=_publisherTextParagraphStyle;
@property(nonatomic) long long publisherTextNumberOfLines; // @synthesize publisherTextNumberOfLines=_publisherTextNumberOfLines;
@property(copy, nonatomic) UIColor *publisherTextColor; // @synthesize publisherTextColor=_publisherTextColor;
@property(retain, nonatomic) UIFont *publisherTextFont; // @synthesize publisherTextFont=_publisherTextFont;
@property(nonatomic) struct CGRect publisherTextFrame; // @synthesize publisherTextFrame=_publisherTextFrame;
@property(nonatomic) struct CGRect publisherLogoFrame; // @synthesize publisherLogoFrame=_publisherLogoFrame;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) NSParagraphStyle *titleParagraphStyle; // @synthesize titleParagraphStyle=_titleParagraphStyle;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

