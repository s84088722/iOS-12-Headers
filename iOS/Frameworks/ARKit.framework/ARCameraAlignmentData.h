//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARCameraAlignmentData : NSObject <ARResultData, NSSecureCoding>
{
    double _timestamp;
    // Error parsing type: {?="columns"[4]}, name: _cameraTransform
}

+ (_Bool)supportsSecureCoding;
// Error parsing type for property cameraTransform:
// Property attributes: T{?=[4]},N,V_cameraTransform

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

