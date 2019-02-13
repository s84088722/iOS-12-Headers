//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCSAudioFile-Protocol.h>

@class AVAudioFormat, NSString, NSURL, RCSSavedRecordingAccessToken;

__attribute__((visibility("hidden")))
@interface _RCSAudioFile : NSObject <RCSAudioFile>
{
    RCSSavedRecordingAccessToken *_fileToken;
}

@property(retain, nonatomic) RCSSavedRecordingAccessToken *fileToken; // @synthesize fileToken=_fileToken;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioFormat *processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat;
@property(readonly, nonatomic) NSURL *url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

