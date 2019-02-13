//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/_GCControllerButtonInput.h>

@class _GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput
{
    _GCControllerAxisInput *_axis;
    _Bool _positive;
}

@property(readonly, nonatomic, getter=isPositive) _Bool positive; // @synthesize positive=_positive;
@property(nonatomic) __weak _GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (float)value;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
- (_Bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (_Bool)_setValueFromAxisButton:(float)arg1;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (_Bool)isAnalog;
- (id)description;
- (id)collection;
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;

@end

