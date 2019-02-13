//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKCaptureRequest.h>

#import <CameraKit/NSCopying-Protocol.h>
#import <CameraKit/NSMutableCopying-Protocol.h>

@interface CMKVideoCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying>
{
    long long _deviceOrientation;
    long long _captureDevice;
    long long _torchMode;
}

@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

