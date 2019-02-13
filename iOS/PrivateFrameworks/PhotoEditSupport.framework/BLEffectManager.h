//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLEffectManager : NSObject
{
}

+ (id)effectManager;
+ (void)invertContext:(struct CGContext *)arg1;
+ (void)fillContext:(struct CGContext *)arg1 withColor:(id)arg2;
+ (struct CGContext *)newContextFromContext:(struct CGContext *)arg1;
+ (struct CGContext *)newContext:(struct CGContext *)arg1 withSaturation:(float)arg2;
+ (struct CGContext *)newContext:(struct CGContext *)arg1 lineOperation:(CDUnknownBlockType)arg2;
+ (struct CGContext *)newContext:(struct CGContext *)arg1 pixelOperation:(CDUnknownBlockType)arg2;
+ (void)performLineBlock:(CDUnknownBlockType)arg1 onContext:(struct CGContext *)arg2;
+ (void)performBlock:(CDUnknownBlockType)arg1 onContext:(struct CGContext *)arg2;
+ (void)performLineBlock:(CDUnknownBlockType)arg1 fromContext:(struct CGContext *)arg2 toContext:(struct CGContext *)arg3;
+ (void)performBlock:(CDUnknownBlockType)arg1 fromContext:(struct CGContext *)arg2 toContext:(struct CGContext *)arg3;
+ (struct CGImage *)newBrushImageRefWithSize:(float)arg1 softness:(float)arg2 brightness:(float)arg3;
+ (struct CGContext *)newGrayscaleContextWithSize:(struct CGSize)arg1 clear:(_Bool)arg2;
+ (struct CGContext *)newContextWithSize:(struct CGSize)arg1 clear:(_Bool)arg2 alpha:(_Bool)arg3;
+ (struct CGContext *)newContextWithSize:(struct CGSize)arg1 clear:(_Bool)arg2;

@end

