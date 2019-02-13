//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface LegacyTileLayer : CALayer
{
    struct LegacyTileGrid *_tileGrid;
    unsigned int _paintCount;
    _Bool _isRenderingInContext;
}

@property(readonly, nonatomic) _Bool isRenderingInContext; // @synthesize isRenderingInContext=_isRenderingInContext;
@property(nonatomic) struct LegacyTileGrid *tileGrid; // @synthesize tileGrid=_tileGrid;
@property(nonatomic) unsigned int paintCount; // @synthesize paintCount=_paintCount;
- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;

@end

