//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyConstantColor : GLKEffectProperty
{
    union _GLKVector4 _color;
    unsigned char _enabled;
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(nonatomic) unsigned char enabled; // @synthesize enabled=_enabled;
@property(nonatomic) union _GLKVector4 color; // @synthesize color=_color;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)setShaderBindings;
- (void)dirtyAllUniforms;
- (id)init;

@end

