//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBAxis : NSObject
{
}

+ (int)chbAxisIdForPlotAxis:(int)arg1 state:(id)arg2;
+ (id)readWithXlPlotAxis:(int)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromAxisType:(int)arg1;
+ (int)xlPlotAxisTypeFrom:(int)arg1;
+ (Class)chbAxisClassWith:(id)arg1;
+ (Class)chbAxisClassWith:(struct XlChartPlotAxis *)arg1 plotAxis:(int)arg2;

@end

