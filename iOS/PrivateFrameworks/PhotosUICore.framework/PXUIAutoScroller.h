//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAutoScroller.h>

@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller
{
    CADisplayLink *__displayLink;
}

@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
- (void).cxx_destruct;
- (void)updateWithGestureRecognizer:(id)arg1;
- (_Bool)autoscrollWithOffset:(struct CGPoint)arg1;
- (void)stopRepeating;
- (void)_handleDisplayLink:(id)arg1;
- (void)startRepeating;
- (struct CGRect)visibleRectForScrollView:(id)arg1;

@end

