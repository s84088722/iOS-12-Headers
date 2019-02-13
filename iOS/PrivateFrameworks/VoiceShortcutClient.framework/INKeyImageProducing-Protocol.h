//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@class INImage;
@protocol INKeyImageProducing;

@protocol INKeyImageProducing <NSObject>
@property(readonly) INImage *_keyImage;
- (long long)_compareSubProducerOne:(id <INKeyImageProducing>)arg1 subProducerTwo:(id <INKeyImageProducing>)arg2;

@optional
- (_Bool)_isValidSubProducer:(id <INKeyImageProducing>)arg1;
@end

