//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
{
}

+ (void)setCurrentEphemeralUserPasscodeTypeFromUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;
+ (_Bool)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;
+ (id)sharedManager;
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;
- (void)_sendPasscodeChangedNotification;
- (void)_setPrivatePasscodeDict:(id)arg1;

@end

