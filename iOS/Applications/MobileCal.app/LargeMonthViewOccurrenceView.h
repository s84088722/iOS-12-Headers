//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, LargeMonthViewOccurrence;

@interface LargeMonthViewOccurrenceView : UIView
{
    CALayer *_glowLayer;
    CALayer *_contentLayer;
    LargeMonthViewOccurrence *_occurrence;
}

@property(retain, nonatomic) LargeMonthViewOccurrence *occurrence; // @synthesize occurrence=_occurrence;
- (void).cxx_destruct;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

