//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject
{
    AVAudioSession *_audioSession;
}

+ (id)auxiliarySession;
+ (void)sharedAmbientInstanceWithLoadHandler:(CDUnknownBlockType)arg1;
+ (id)sharedAmbientInstance;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *category;
- (void)dealloc;
- (id)_init;

@end

