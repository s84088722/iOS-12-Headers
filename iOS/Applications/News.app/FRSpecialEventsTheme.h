//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCFeedTheming-Protocol.h"

@class FCAssetHandle, FCColor, FCHeadlineTemplate, FCTagBanner, FCTextInfo, NSArray, NSString;
@protocol FCFeedTheming;

@interface FRSpecialEventsTheme : NSObject <FCFeedTheming>
{
    id <FCFeedTheming> _baseTheme;
}

+ (id)breakingNewsSectionTitle;
@property(readonly, copy, nonatomic) id <FCFeedTheming> baseTheme; // @synthesize baseTheme=_baseTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property(readonly, nonatomic) NSArray *loadableFonts;
@property(readonly, nonatomic) struct CGSize nameImageMaskSize;
@property(readonly, nonatomic) struct CGSize nameImageForDarkBackgroundSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageMaskInsets;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageForDarkBackgroundInsets;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageInsets;
@property(readonly, nonatomic) struct CGSize nameImageSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *logoImageAssetHandle;
@property(readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) double bannerImageBaselineOffsetPercentage;
@property(readonly, nonatomic) double bannerImageScale;
@property(readonly, nonatomic) FCTagBanner *compactBannerImage;
@property(readonly, nonatomic) FCTagBanner *bannerImageForMask;
@property(readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground;
@property(readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground;
@property(readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property(readonly, nonatomic) long long feedType;
@property(readonly, nonatomic) _Bool isWhite;
@property(readonly, nonatomic) FCColor *foregroundColor;
@property(readonly, nonatomic) FCColor *backgroundColor;
@property(readonly, nonatomic) _Bool allowCustomBottomStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

