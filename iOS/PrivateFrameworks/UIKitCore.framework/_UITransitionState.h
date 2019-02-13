//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : NSObject
{
    long long _transitionDirection;
    CDUnknownBlockType _completion;
    NSDate *_beginDate;
}

@property(readonly, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(readonly, nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;
@property(readonly, nonatomic) long long effectiveTransitionDirection;
- (void)cleanupWithFinishedState:(_Bool)arg1 completedState:(_Bool)arg2;
- (void)markBeginDate;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithTransitionDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

