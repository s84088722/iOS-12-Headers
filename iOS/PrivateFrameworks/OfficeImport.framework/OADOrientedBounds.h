//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject
{
    struct CGRect mBounds;
    float mRotation;
    unsigned int mFlipX:1;
    unsigned int mFlipY:1;
    int mModeX;
    int mModeY;
}

+ (_Bool)directionCloserToVerticalThanToHorizontal:(float)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToOrientedBounds:(id)arg1;
- (struct CGRect)boundingBox;
- (struct CGSize)boundingBoxSize;
- (void)setYMode:(int)arg1;
- (int)yMode;
- (void)setXMode:(int)arg1;
- (int)xMode;
- (void)setFlipY:(_Bool)arg1;
- (_Bool)flipY;
- (void)setFlipX:(_Bool)arg1;
- (_Bool)flipX;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setOrientedBounds:(id)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;

@end

