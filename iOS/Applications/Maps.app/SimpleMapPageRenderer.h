//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapPageRenderer.h"

__attribute__((visibility("hidden")))
@interface SimpleMapPageRenderer : MapPageRenderer
{
    CDStruct_34734122 topLeftCorner;
    double _widthInMeters;
}

- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)drawTopContentInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (void)_setTitlesWithMapItem:(id)arg1;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (struct CGRect)overviewRect;
- (id)initWithMapView:(id)arg1;

@end

