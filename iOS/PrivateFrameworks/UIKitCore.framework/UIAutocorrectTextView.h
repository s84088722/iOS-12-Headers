//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView
{
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    _Bool m_animating;
    _Bool m_isLongString;
}

@property(nonatomic) _Bool isLongString; // @synthesize isLongString=m_isLongString;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEdgeType:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;

@end

