//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CarDebugFrameConfig : NSObject
{
    UILayoutGuide *_layoutGuide;
    UIColor *_color;
    double _weight;
    unsigned long long _edges;
    struct CGRect _frame;
}

@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;

@end

