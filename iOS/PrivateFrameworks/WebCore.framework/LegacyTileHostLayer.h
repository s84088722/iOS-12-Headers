//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface LegacyTileHostLayer : CALayer
{
    struct LegacyTileGrid *_tileGrid;
}

- (void)renderInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithTileGrid:(struct LegacyTileGrid *)arg1;

@end

