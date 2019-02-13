//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNNode;

@protocol SCNPhysicsVehicleWheelJSExport <JSExport>
+ (id)wheelWithNode:(SCNNode *)arg1;
@property double suspensionRestLength;
@property double radius;
@property struct SCNVector3 axle;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 connectionPosition;
@property double maximumSuspensionForce;
@property double frictionSlip;
@property double maximumSuspensionTravel;
@property double suspensionDamping;
@property double suspensionCompression;
@property double suspensionStiffness;
@property(readonly) SCNNode *node;
- (id)copy;
@end

