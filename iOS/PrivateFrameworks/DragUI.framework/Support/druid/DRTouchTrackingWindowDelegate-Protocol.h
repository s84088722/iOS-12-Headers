//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet;

@protocol DRTouchTrackingWindowDelegate <NSObject>
- (void)trackedTouchesCancelled:(NSSet *)arg1;
- (void)trackedTouchesEnded:(NSSet *)arg1 pairedWithVelocities:(NSSet *)arg2;
- (void)trackedTouchesMoved:(NSSet *)arg1;
- (void)trackedTouchesBegan:(NSSet *)arg1;
@end

