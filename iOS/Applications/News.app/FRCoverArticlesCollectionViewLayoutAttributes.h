//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NFLCoverArticlesWidgetLayout;

@interface FRCoverArticlesCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _showAccessoryView;
    _Bool _focussed;
    double _factor;
    double _margin;
    double _sideCoverHeight;
    NFLCoverArticlesWidgetLayout *_layout;
    struct CGSize _coverBounds;
}

@property(retain, nonatomic) NFLCoverArticlesWidgetLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool focussed; // @synthesize focussed=_focussed;
@property(nonatomic) _Bool showAccessoryView; // @synthesize showAccessoryView=_showAccessoryView;
@property(nonatomic) double sideCoverHeight; // @synthesize sideCoverHeight=_sideCoverHeight;
@property(nonatomic) struct CGSize coverBounds; // @synthesize coverBounds=_coverBounds;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double factor; // @synthesize factor=_factor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

