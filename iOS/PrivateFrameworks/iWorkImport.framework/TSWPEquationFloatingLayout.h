//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPEquationLayout.h>

@class TSDInfoGeometry, TSDLayoutGeometry;

__attribute__((visibility("hidden")))
@interface TSWPEquationFloatingLayout : TSWPEquationLayout
{
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;

@end

