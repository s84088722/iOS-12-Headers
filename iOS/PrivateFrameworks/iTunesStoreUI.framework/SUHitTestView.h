//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SUHitTestView : UIView
{
    NSMutableArray *_hitTestTargets;
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeHitTestTarget:(id)arg1;
- (void)addHitTestTarget:(id)arg1;
- (void)dealloc;

@end

