//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFAudioPowerProviding-Protocol.h"

@class NSString;
@protocol AFAudioPowerProviding;

@interface VSSpeechAudioPowerService : NSObject <AFAudioPowerProviding>
{
    id <AFAudioPowerProviding> _previousProvider;
}

+ (id)sharedServices;
@property(nonatomic) __weak id <AFAudioPowerProviding> previousProvider; // @synthesize previousProvider=_previousProvider;
- (void).cxx_destruct;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)didEndAccessPower;
- (void)willBeginAccessPower;
- (id)getCurrentAudioPowerProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
