//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface FIUIChartBarAccessibilityElement : UIAccessibilityElement
{
    id _barSeries;
    unsigned long long _index;
    struct CGPoint _barPoint;
}

+ (id)accessibilityElementsForBarSeries:(id)arg1;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) id barSeries; // @synthesize barSeries=_barSeries;
@property(nonatomic) struct CGPoint barPoint; // @synthesize barPoint=_barPoint;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGRect)_accessibilityFrameStandardBar;
- (struct CGRect)_accessibilityFrameUniform;
- (struct CGRect)accessibilityFrame;
- (id)initWithAccessibilityContainer:(id)arg1 barSeries:(id)arg2 index:(unsigned long long)arg3 plotPoint:(id)arg4;

@end

