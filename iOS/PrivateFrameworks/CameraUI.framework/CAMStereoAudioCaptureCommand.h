//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand
{
    _Bool _stereoAudioCaptureEnabled;
}

@property(readonly, nonatomic, getter=isStereoAudioCaptureEnabled) _Bool stereoAudioCaptureEnabled; // @synthesize stereoAudioCaptureEnabled=_stereoAudioCaptureEnabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStereoAudioCaptureEnabled:(_Bool)arg1;

@end

