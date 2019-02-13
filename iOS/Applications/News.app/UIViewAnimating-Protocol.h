//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol UIViewAnimating <NSObject>
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) _Bool reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) long long state;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@end

