//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchResultMapItemBase.h"

@class GEOFeatureStyleAttributes;

__attribute__((visibility("hidden")))
@interface SearchResultMapItem : SearchResultMapItemBase
{
    _Bool _showsBalloonCallout;
    GEOFeatureStyleAttributes *_style;
}

- (void).cxx_destruct;
- (_Bool)showsBalloonCallout;
- (_Bool)shouldBeClustered;
- (id)styleAttributes;
- (id)style;
- (id)subtitle;
- (id)title;

@end
