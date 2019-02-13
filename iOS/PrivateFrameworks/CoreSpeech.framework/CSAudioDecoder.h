//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSAudioDecoderDelegate;

@interface CSAudioDecoder : NSObject
{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _inASBD;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioDecoderDelegate> _delegate;
}

+ (id)opusDecoder;
@property __weak id <CSAudioDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addPackets:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end

