/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
@class RadiosPreferences;

@interface MISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)sendStateUpdate;
-(void)stopService;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(BOOL)didUserPreventData;
-(void)cellDataChangedNotification:(id)arg1 ;
-(void)attachMIS;
-(void)detachMIS;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)authenticate;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(int)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
@end
