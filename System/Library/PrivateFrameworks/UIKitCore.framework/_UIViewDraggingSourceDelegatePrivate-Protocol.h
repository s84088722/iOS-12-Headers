//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIViewDraggingSourceDelegate-Protocol.h>

@class NSArray, UIView;

@protocol _UIViewDraggingSourceDelegatePrivate <_UIViewDraggingSourceDelegate>

@optional
- (long long)_view:(UIView *)arg1 dataOwnerOfDragSourceWithIndex:(unsigned long long)arg2;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (_Bool)_shouldPerformHitTestingForDragSessionInView:(UIView *)arg1;
@end

