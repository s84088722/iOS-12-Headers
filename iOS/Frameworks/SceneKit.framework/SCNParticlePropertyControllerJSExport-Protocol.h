//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, NSString, SCNNode;

@protocol SCNParticlePropertyControllerJSExport <JSExport>
+ (id)controllerWithAnimation:(CAAnimation *)arg1;
@property(copy, nonatomic) NSString *inputProperty;
@property(nonatomic) __weak SCNNode *inputOrigin;
@property(nonatomic) double inputBias;
@property(nonatomic) double inputScale;
@property(nonatomic) long long inputMode;
@property(retain, nonatomic) CAAnimation *animation;
- (id)copy;
@end

