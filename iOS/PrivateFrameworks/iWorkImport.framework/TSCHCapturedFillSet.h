//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHFillSet.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHCapturedFillSet : TSCHFillSet
{
    int _numberOfThemeSeriesStyles;
    NSArray *_seriesStyles;
}

+ (id)capturedFillSetWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1;
- (id)initWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3;

@end

