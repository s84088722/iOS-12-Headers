//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@protocol SCNJSAnimationGroupJSExport <JSExport>
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double beginTime;
@property(getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property(retain) CAMediaTimingFunction *timingFunction;
@property double duration;
@property(copy) NSArray *animations;
@end

