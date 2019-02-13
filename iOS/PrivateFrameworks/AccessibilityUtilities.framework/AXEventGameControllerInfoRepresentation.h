//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    double _directionPadUp;
    double _directionPadDown;
    double _directionPadLeft;
    double _directionPadRight;
    double _faceButtonA;
    double _faceButtonB;
    double _faceButtonX;
    double _faceButtonY;
    double _shoulderButtonR1;
    double _shoulderButtonR2;
    double _shoulderButtonL1;
    double _shoulderButtonL2;
    double _leftJoystickX;
    double _leftJoystickY;
    double _rightJoystickX;
    double _rightJoystickY;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double rightJoystickY; // @synthesize rightJoystickY=_rightJoystickY;
@property(nonatomic) double rightJoystickX; // @synthesize rightJoystickX=_rightJoystickX;
@property(nonatomic) double leftJoystickY; // @synthesize leftJoystickY=_leftJoystickY;
@property(nonatomic) double leftJoystickX; // @synthesize leftJoystickX=_leftJoystickX;
@property(nonatomic) double shoulderButtonL2; // @synthesize shoulderButtonL2=_shoulderButtonL2;
@property(nonatomic) double shoulderButtonL1; // @synthesize shoulderButtonL1=_shoulderButtonL1;
@property(nonatomic) double shoulderButtonR2; // @synthesize shoulderButtonR2=_shoulderButtonR2;
@property(nonatomic) double shoulderButtonR1; // @synthesize shoulderButtonR1=_shoulderButtonR1;
@property(nonatomic) double faceButtonY; // @synthesize faceButtonY=_faceButtonY;
@property(nonatomic) double faceButtonX; // @synthesize faceButtonX=_faceButtonX;
@property(nonatomic) double faceButtonB; // @synthesize faceButtonB=_faceButtonB;
@property(nonatomic) double faceButtonA; // @synthesize faceButtonA=_faceButtonA;
@property(nonatomic) double directionPadRight; // @synthesize directionPadRight=_directionPadRight;
@property(nonatomic) double directionPadLeft; // @synthesize directionPadLeft=_directionPadLeft;
@property(nonatomic) double directionPadDown; // @synthesize directionPadDown=_directionPadDown;
@property(nonatomic) double directionPadUp; // @synthesize directionPadUp=_directionPadUp;
@property(readonly, nonatomic) _Bool leftJoystickActive;
@property(readonly, nonatomic) _Bool rightJoystickActive;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

