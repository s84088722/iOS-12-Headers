//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataMachineReadableCodeObjectInternal, CIBarcodeDescriptor, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject
{
    AVMetadataMachineReadableCodeObjectInternal *_internal;
}

+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;
- (id)basicDescriptor;
@property(readonly) NSString *stringValue;
@property(readonly) NSArray *corners;
- (id)description;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;
@property(readonly) CIBarcodeDescriptor *descriptor;

@end

