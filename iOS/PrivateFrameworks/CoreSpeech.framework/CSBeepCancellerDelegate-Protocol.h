//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSBeepCanceller, NSData;

@protocol CSBeepCancellerDelegate <NSObject>
- (void)beepCancellerDidCancelSamples:(CSBeepCanceller *)arg1 buffer:(NSData *)arg2 timestamp:(unsigned long long)arg3;
@end

