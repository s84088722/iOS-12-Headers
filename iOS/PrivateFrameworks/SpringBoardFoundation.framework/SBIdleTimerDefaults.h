//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (_Bool)disableAutoDimExists;
@property(readonly, nonatomic) _Bool disableAutoDim; // @dynamic disableAutoDim;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic, getter=isBacklightLoggingEnabled) _Bool backlightLoggingEnabled; // @dynamic backlightLoggingEnabled;
@property(readonly, nonatomic) _Bool disableAttentionAwareness; // @dynamic disableAttentionAwareness;
@property(readonly, nonatomic) _Bool dontDimOrLockWhileConnectedToPower; // @dynamic dontDimOrLockWhileConnectedToPower;
@property(readonly, nonatomic) double minimumLockscreenIdleTime; // @dynamic minimumLockscreenIdleTime;
@property(readonly, nonatomic) _Bool supportLiftToWake; // @dynamic supportLiftToWake;
@property(readonly, nonatomic) _Bool supportTapToWake; // @dynamic supportTapToWake;

@end

