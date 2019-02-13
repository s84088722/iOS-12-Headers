//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class BKSAnimationFenceHandle;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _keyboardOnScreen;
    BKSAnimationFenceHandle *_animationFence;
    struct CGRect _keyboardPosition;
    struct CGRect _keyboardPositionWithIAV;
}

+ (_Bool)supportsSecureCoding;
+ (id)informationForKeyboardUp:(struct CGRect)arg1 withIAV:(struct CGRect)arg2;
+ (id)informationForKeyboardDown;
+ (id)animationFence;
@property(readonly) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(readonly) struct CGRect keyboardPositionWithIAV; // @synthesize keyboardPositionWithIAV=_keyboardPositionWithIAV;
@property(readonly) struct CGRect keyboardPosition; // @synthesize keyboardPosition=_keyboardPosition;
@property(readonly, copy) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)resetAnimationFencing;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithoutFence;
- (id)copyWithoutIAV;
- (id)initWithKeyboardRect:(struct CGRect)arg1 iavPosition:(struct CGRect)arg2 onScreen:(_Bool)arg3 fence:(id)arg4;

@end

