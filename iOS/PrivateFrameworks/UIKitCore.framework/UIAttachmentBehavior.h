//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, PKExtendedPhysicsBody, PKPhysicsJoint;

@interface UIAttachmentBehavior : UIDynamicBehavior
{
    struct CGPoint _anchorPoint;
    struct CGPoint _anchorPointA;
    struct CGPoint _anchorPointB;
    PKExtendedPhysicsBody *_anchorBody;
    PKPhysicsJoint *_joint;
    double _damping;
    double _frequency;
    double _length;
    struct CGVector _axis;
    unsigned long long _attachmentType;
    long long _type;
    struct {
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
        unsigned int rangeSet:1;
        unsigned int frictionTorqueSet:1;
        unsigned int isRevolute:1;
    } _stateFlags;
    long long _attachedBehaviorType;
    double _frictionTorque;
    CDStruct_ef18196a _attachmentRange;
}

+ (id)pinAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint)arg3;
+ (id)fixedAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint)arg3;
+ (id)limitAttachmentWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset)arg4;
+ (id)slidingAttachmentWithItem:(id)arg1 attachmentAnchor:(struct CGPoint)arg2 axisOfTranslation:(struct CGVector)arg3;
+ (id)slidingAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint)arg3 axisOfTranslation:(struct CGVector)arg4;
+ (_Bool)_isPrimitiveBehavior;
@property(nonatomic) CDStruct_c3b9c2ee attachmentRange; // @synthesize attachmentRange=_attachmentRange;
@property(nonatomic) double frictionTorque; // @synthesize frictionTorque=_frictionTorque;
@property(readonly, nonatomic) long long attachedBehaviorType; // @synthesize attachedBehaviorType=_attachedBehaviorType;
- (void).cxx_destruct;
- (id)description;
- (void)_dissociate;
- (void)_associate;
- (void)_reevaluateJoint;
- (void)_changedParameter;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) double frequency;
@property(nonatomic) double damping;
@property(nonatomic) double length;
@property(readonly, copy, nonatomic) NSArray *items;
- (long long)type;
- (id)initWithItem:(id)arg1 point:(struct CGPoint)arg2 attachedToItem:(id)arg3 point:(struct CGPoint)arg4;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset)arg4;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToAnchor:(struct CGPoint)arg3;
- (id)initWithItem:(id)arg1 point:(struct CGPoint)arg2 attachedToAnchor:(struct CGPoint)arg3;
- (id)initWithItem:(id)arg1 attachedToItem:(id)arg2;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint)arg2;
- (id)init;
- (void)_updateJointWithRange:(CDStruct_c3b9c2ee)arg1;

@end

