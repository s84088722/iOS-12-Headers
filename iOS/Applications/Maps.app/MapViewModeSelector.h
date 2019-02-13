//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface MapViewModeSelector : UISegmentedControl
{
    _Bool _lastLayoutWidthFits;
    NSSet *_disallowedViewModes;
    NSArray *_orderedViewModes;
    double _lastLayoutWidth;
}

@property(nonatomic) _Bool lastLayoutWidthFits; // @synthesize lastLayoutWidthFits=_lastLayoutWidthFits;
@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(retain, nonatomic) NSArray *orderedViewModes; // @synthesize orderedViewModes=_orderedViewModes;
@property(copy, nonatomic) NSSet *disallowedViewModes; // @synthesize disallowedViewModes=_disallowedViewModes;
- (void).cxx_destruct;
- (_Bool)updateSegmentsIfNeededToFitWidth:(double)arg1;
@property(nonatomic) long long selectedViewMode;
- (id)init;

@end

