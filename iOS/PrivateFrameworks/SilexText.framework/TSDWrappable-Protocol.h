//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexText/NSObject-Protocol.h>

@class TSDAbstractLayout, TSDWrapPolygon;

@protocol TSDWrappable <NSObject>
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (TSDWrapPolygon *)wrapPolygon;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (TSDAbstractLayout *)parent;
@end

