//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol OFUIDismissalViewDelegate;

@interface OFUIDismissalView : UIView
{
    id <OFUIDismissalViewDelegate> _dismissalViewDelegate;
    _Bool _inPassthroughHitTest;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) id <OFUIDismissalViewDelegate> dismissalViewDelegate; // @synthesize dismissalViewDelegate=_dismissalViewDelegate;
- (void)dealloc;

@end

