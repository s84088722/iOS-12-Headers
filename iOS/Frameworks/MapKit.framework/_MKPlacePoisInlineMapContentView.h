//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView
{
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
    _Bool _visible;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)mapViewHeight;
- (void)setLocationsNumber:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)hasTitle;

@end

