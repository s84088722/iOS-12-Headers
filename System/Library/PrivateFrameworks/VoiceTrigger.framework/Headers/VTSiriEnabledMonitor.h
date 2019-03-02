/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSiriEnabledMonitor : VTEventMonitor {

	BOOL _isSiriEnabled;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(void)_didReceiveSiriSettingChanged:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEnabled;
@end
