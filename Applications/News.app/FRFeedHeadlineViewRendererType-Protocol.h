//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NFLFeedCollectionViewLayoutAttributes, UIView;
@protocol FRFeedRenderable, NFLFeedTileInfo;

@protocol FRFeedHeadlineViewRendererType
- (void)resetView:(UIView<FRFeedRenderable> *)arg1;
- (void)renderView:(UIView<FRFeedRenderable> *)arg1 withTileInfo:(id <NFLFeedTileInfo>)arg2 layoutAttributes:(NFLFeedCollectionViewLayoutAttributes *)arg3 userInterfaceStyle:(long long)arg4;
@end
