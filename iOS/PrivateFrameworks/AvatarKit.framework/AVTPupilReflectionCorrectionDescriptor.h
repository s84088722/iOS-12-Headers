//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMaterial, SCNNode;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject
{
    SCNNode *_readMorpherNode;
    SCNMaterial *_leftEyeMaterial;
    SCNMaterial *_rightEyeMaterial;
    long long _leftEyeTargetIndex;
    long long _rightEyeTargetIndex;
}

@property(nonatomic) long long rightEyeTargetIndex; // @synthesize rightEyeTargetIndex=_rightEyeTargetIndex;
@property(nonatomic) long long leftEyeTargetIndex; // @synthesize leftEyeTargetIndex=_leftEyeTargetIndex;
@property(retain, nonatomic) SCNMaterial *rightEyeMaterial; // @synthesize rightEyeMaterial=_rightEyeMaterial;
@property(retain, nonatomic) SCNMaterial *leftEyeMaterial; // @synthesize leftEyeMaterial=_leftEyeMaterial;
@property(retain, nonatomic) SCNNode *readMorpherNode; // @synthesize readMorpherNode=_readMorpherNode;
- (void).cxx_destruct;

@end

