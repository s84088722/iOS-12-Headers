/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTNotifier {

	BOOL _unlockedSinceBoot;
	RTDarwinNotificationHelper* _notificationHelper;
	RTKeybagMonitor* _keybagMonitor;
	long long _encryptedDataAvailability;

}

@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) RTKeybagMonitor * keybagMonitor;                              //@synthesize keybagMonitor=_keybagMonitor - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                          //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                                       //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
+(id)dataProtectionLockStateToString:(long long)arg1 ;
+(id)encryptedDataAvailabilityToString:(long long)arg1 ;
-(BOOL)unlockedSinceBoot;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithKeybagMonitor:(id)arg1 notificationHelper:(id)arg2 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(long long)encryptedDataAvailability;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(RTKeybagMonitor *)keybagMonitor;
-(void)handleKeybagLockStatusChange:(long long)arg1 ;
-(void)handleUnlockedSinceBoot;
-(void)setKeybagMonitor:(RTKeybagMonitor *)arg1 ;
-(id)init;
-(void)dealloc;
@end
