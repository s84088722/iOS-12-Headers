//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAnimation, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCycleLayerAnimation : NSObject
{
    CALayer *_layer;
    CAAnimation *_animation;
    CAAnimation *_originalAnimation;
    NSString *_key;
}

+ (id)cycleAnimationWithLayer:(id)arg1 animation:(id)arg2 key:(id)arg3;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) CAAnimation *originalAnimation; // @synthesize originalAnimation=_originalAnimation;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (id)description;

@end

