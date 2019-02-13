//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLSkeleton, NSArray, NSString;
@protocol MDLJointAnimation;

@interface MDLAnimationBindComponent : NSObject <NSCopying, MDLComponent>
{
    MDLSkeleton *_skeleton;
    id <MDLJointAnimation> _jointAnimation;
    NSArray *_jointPaths;
    // Error parsing type: {?="columns"[4]}, name: _geometryBindTransform
}

// Error parsing type for property geometryBindTransform:
// Property attributes: T{?=[4]},N,V_geometryBindTransform

@property(retain, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
@property(retain, nonatomic) id <MDLJointAnimation> jointAnimation; // @synthesize jointAnimation=_jointAnimation;
@property(retain, nonatomic) MDLSkeleton *skeleton; // @synthesize skeleton=_skeleton;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

