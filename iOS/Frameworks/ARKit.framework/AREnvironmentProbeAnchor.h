//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARAnchor.h>

@class NSData, NSUUID;
@protocol MTLTexture;

@interface AREnvironmentProbeAnchor : ARAnchor
{
    float _opaquePixelPercentage;
    id <MTLTexture> _environmentTexture;
    NSData *_colorHistogram;
    NSUUID *_trackedPlaneIdentifier;
    // Error parsing type: , name: _extent
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *trackedPlaneIdentifier; // @synthesize trackedPlaneIdentifier=_trackedPlaneIdentifier;
@property(nonatomic) float opaquePixelPercentage; // @synthesize opaquePixelPercentage=_opaquePixelPercentage;
@property(retain, nonatomic) NSData *colorHistogram; // @synthesize colorHistogram=_colorHistogram;
// Error parsing type for property extent:
// Property attributes: T,R,N,V_extent

@property(retain, nonatomic) id <MTLTexture> environmentTexture; // @synthesize environmentTexture=_environmentTexture;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)description;
-     // Error parsing type: @104@0:8@16{?=[4]}2488, name: initWithIdentifier:transform:extent:
-     // Error parsing type: @104@0:8@16{?=[4]}2488, name: initWithName:transform:extent:
-     // Error parsing type: @96@0:8{?=[4]}1680, name: initWithTransform:extent:
-     // Error parsing type: @88@0:8@16{?=[4]}24, name: initWithIdentifier:transform:
-     // Error parsing type: @88@0:8@16{?=[4]}24, name: initWithName:transform:
-     // Error parsing type: @80@0:8{?=[4]}16, name: initWithTransform:

@end

