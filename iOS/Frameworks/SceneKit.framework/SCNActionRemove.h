//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionRemove : SCNAction
{
    _Bool _hasFired;
}

+ (id)removeFromParentNode;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

