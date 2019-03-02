//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTRigSettings : NSObject
{
    _Bool _supportsScale;
    _Bool _supportsElevation;
    _Bool _supportsSpacing;
    _Bool _supportsRotation;
    double _minScale;
    double _minElevation;
    double _minSpacing;
    double _minRotation;
    double _maxScale;
    double _maxElevation;
    double _maxSpacing;
    double _maxRotation;
    double _offsetRotation;
    double _defaultElevation;
    double _defaultSpacing;
    NSArray *_bones;
    NSArray *_bonesSym;
    NSArray *_bonesFactor;
    NSArray *_radius;
}

+ (id)rigSettingsWithType:(long long)arg1;
@property _Bool supportsRotation; // @synthesize supportsRotation=_supportsRotation;
@property _Bool supportsSpacing; // @synthesize supportsSpacing=_supportsSpacing;
@property _Bool supportsElevation; // @synthesize supportsElevation=_supportsElevation;
@property _Bool supportsScale; // @synthesize supportsScale=_supportsScale;
@property(retain) NSArray *radius; // @synthesize radius=_radius;
@property(retain) NSArray *bonesFactor; // @synthesize bonesFactor=_bonesFactor;
@property(retain) NSArray *bonesSym; // @synthesize bonesSym=_bonesSym;
@property(retain) NSArray *bones; // @synthesize bones=_bones;
@property double defaultSpacing; // @synthesize defaultSpacing=_defaultSpacing;
@property double defaultElevation; // @synthesize defaultElevation=_defaultElevation;
@property double offsetRotation; // @synthesize offsetRotation=_offsetRotation;
@property double maxRotation; // @synthesize maxRotation=_maxRotation;
@property double maxSpacing; // @synthesize maxSpacing=_maxSpacing;
@property double maxElevation; // @synthesize maxElevation=_maxElevation;
@property double maxScale; // @synthesize maxScale=_maxScale;
@property double minRotation; // @synthesize minRotation=_minRotation;
@property double minSpacing; // @synthesize minSpacing=_minSpacing;
@property double minElevation; // @synthesize minElevation=_minElevation;
@property double minScale; // @synthesize minScale=_minScale;
- (void).cxx_destruct;

@end
