//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKScale : SKAction
{
    struct SKCScale *_mycaction;
}

+ (id)scaleYTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleToSize:(struct CGSize)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleYBy:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
