//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction;

@protocol SCNTransactionJSExport <JSExport>
+ (void)setDisableActions:(_Bool)arg1;
+ (_Bool)disableActions;
+ (void)setAnimationTimingFunction:(CAMediaTimingFunction *)arg1;
+ (CAMediaTimingFunction *)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (double)animationDuration;
+ (void)unlock;
+ (void)lock;
+ (void)flush;
+ (void)commit;
+ (void)begin;
@end

